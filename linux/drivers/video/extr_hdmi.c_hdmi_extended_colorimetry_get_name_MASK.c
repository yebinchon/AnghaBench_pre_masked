
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hdmi_extended_colorimetry { ____Placeholder_hdmi_extended_colorimetry } hdmi_extended_colorimetry ;
__attribute__((used)) static const char *
FUNC_0(enum hdmi_extended_colorimetry VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "xvYCC 601";
 case 128:
  return "xvYCC 709";
 case 130:
  return "sYCC 601";
 case 132:
  return "opYCC 601";
 case 133:
  return "opRGB";
 case 134:
  return "BT.2020 Constant Luminance";
 case 135:
  return "BT.2020";
 case 131:
  return "Reserved";
 }
 return "Invalid";
}
