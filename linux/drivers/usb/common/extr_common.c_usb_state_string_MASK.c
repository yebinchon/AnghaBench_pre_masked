
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;


 int FUNC_0 (char const* const*) ;
const char *FUNC_1(enum usb_device_state VAR_0)
{
 static const char *const VAR_1[] = {
  [132] = "not attached",
  [135] = "attached",
  [131] = "powered",
  [130] = "reconnecting",
  [128] = "unauthenticated",
  [133] = "default",
  [136] = "addressed",
  [134] = "configured",
  [129] = "suspended",
 };

 if (VAR_0 < 0 || VAR_0 >= FUNC_0(VAR_1))
  return "UNKNOWN";

 return VAR_1[VAR_0];
}
