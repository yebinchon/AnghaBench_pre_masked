
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum media_gobj_type { ____Placeholder_media_gobj_type } media_gobj_type ;







__attribute__((used)) static inline const char *FUNC_0(enum media_gobj_type VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "entity";
 case 128:
  return "pad";
 case 129:
  return "link";
 case 130:
  return "intf-devnode";
 default:
  return "unknown";
 }
}
