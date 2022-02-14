
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hdmi_ycc_quantization_range { ____Placeholder_hdmi_ycc_quantization_range } hdmi_ycc_quantization_range ;





__attribute__((used)) static const char *
FUNC_0(enum hdmi_ycc_quantization_range VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "Limited";
 case 129:
  return "Full";
 }
 return "Invalid";
}
