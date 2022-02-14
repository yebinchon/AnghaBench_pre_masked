
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usb_otg_state { ____Placeholder_usb_otg_state } usb_otg_state ;


 int FUNC_0 (char const* const*) ;
const char *FUNC_1(enum usb_otg_state VAR_0)
{
 static const char *const VAR_1[] = {
  [139] = "a_idle",
  [133] = "a_wait_vrise",
  [135] = "a_wait_bcon",
  [140] = "a_host",
  [137] = "a_suspend",
  [138] = "a_peripheral",
  [134] = "a_wait_vfall",
  [136] = "a_vbus_err",
  [131] = "b_idle",
  [129] = "b_srp_init",
  [130] = "b_peripheral",
  [128] = "b_wait_acon",
  [132] = "b_host",
 };

 if (VAR_0 < 0 || VAR_0 >= FUNC_0(VAR_1))
  return "UNDEFINED";

 return VAR_1[VAR_0];
}
