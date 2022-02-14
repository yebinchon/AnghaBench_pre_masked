
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wl18xx_rdl_num { ____Placeholder_wl18xx_rdl_num } wl18xx_rdl_num ;
__attribute__((used)) static const char *FUNC_0(enum wl18xx_rdl_num VAR_0)
{
 switch (VAR_0) {
 case 136:
  return "183xH";
 case 135:
  return "183x or 180x";
 case 134:
  return "187xH";
 case 133:
  return "187x";
 case 132:
  return "RDL11 - Not Supported";
 case 131:
  return "180xD";
 case 130:
  return "RDL13 - Not Supported (1893Q)";
 case 129:
  return "18xxQ";
 case 128:
  return "UNTRIMMED";
 default:
  return "UNKNOWN";
 }
}
