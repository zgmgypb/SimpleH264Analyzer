// SimpleH264Analyzer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Stream.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CStreamFile h264stream(_T("test.h264"));

	h264stream.Parse_h264_bitstream();

	return 0;
}
