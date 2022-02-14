
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hdmi_scan_mode { ____Placeholder_hdmi_scan_mode } hdmi_scan_mode ;







__attribute__((used)) static const char *FUNC_0(enum hdmi_scan_mode VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "No Data";
 case 130:
  return "Overscan";
 case 128:
  return "Underscan";
 case 129:
  return "Reserved";
 }
 return "Invalid";
}
