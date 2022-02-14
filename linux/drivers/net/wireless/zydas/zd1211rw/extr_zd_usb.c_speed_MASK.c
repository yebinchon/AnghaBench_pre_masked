
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;






__attribute__((used)) static const char *FUNC_0(enum usb_device_speed VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "low";
 case 130:
  return "full";
 case 129:
  return "high";
 default:
  return "unknown speed";
 }
}
