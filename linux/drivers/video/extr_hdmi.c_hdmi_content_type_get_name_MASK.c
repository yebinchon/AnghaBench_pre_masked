
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hdmi_content_type { ____Placeholder_hdmi_content_type } hdmi_content_type ;







__attribute__((used)) static const char *
FUNC_0(enum hdmi_content_type VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "Graphics";
 case 128:
  return "Photo";
 case 131:
  return "Cinema";
 case 130:
  return "Game";
 }
 return "Invalid";
}
