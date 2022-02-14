
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
__attribute__((used)) static const char *FUNC_0(u32 VAR_0)
{
 switch (VAR_0) {
 case 128: return "NORMAL";
 case 134: return "DIN_INSERT";
 case 131: return "DOUT_INSERT";
 case 132: return "DIN_STRIP";
 case 129: return "DOUT_STRIP";
 case 133: return "DIN_PASS";
 case 130: return "DOUT_PASS";
 default: return "UNKNOWN";
 }
}
