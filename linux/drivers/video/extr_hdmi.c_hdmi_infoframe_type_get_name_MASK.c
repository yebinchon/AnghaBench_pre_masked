
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hdmi_infoframe_type { ____Placeholder_hdmi_infoframe_type } hdmi_infoframe_type ;
__attribute__((used)) static const char *FUNC_0(enum hdmi_infoframe_type VAR_0)
{
 if (VAR_0 < 0x80 || VAR_0 > 0x9f)
  return "Invalid";
 switch (VAR_0) {
 case 128:
  return "Vendor";
 case 131:
  return "Auxiliary Video Information (AVI)";
 case 129:
  return "Source Product Description (SPD)";
 case 132:
  return "Audio";
 case 130:
  return "Dynamic Range and Mastering";
 }
 return "Reserved";
}
