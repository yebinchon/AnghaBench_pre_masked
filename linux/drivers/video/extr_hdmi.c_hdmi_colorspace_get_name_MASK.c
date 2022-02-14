
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hdmi_colorspace { ____Placeholder_hdmi_colorspace } hdmi_colorspace ;
__attribute__((used)) static const char *FUNC_0(enum hdmi_colorspace VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "RGB";
 case 129:
  return "YCbCr 4:2:2";
 case 128:
  return "YCbCr 4:4:4";
 case 130:
  return "YCbCr 4:2:0";
 case 134:
  return "Reserved (4)";
 case 133:
  return "Reserved (5)";
 case 132:
  return "Reserved (6)";
 case 135:
  return "IDO Defined";
 }
 return "Invalid";
}
