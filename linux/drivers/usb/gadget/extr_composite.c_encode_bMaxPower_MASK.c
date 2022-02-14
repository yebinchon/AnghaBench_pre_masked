
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_configuration {int MaxPower; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int) ;


__attribute__((used)) static u8 FUNC_1(enum usb_device_speed VAR_1,
  struct usb_configuration *VAR_2)
{
 unsigned VAR_3;

 if (VAR_2->MaxPower)
  VAR_3 = VAR_2->MaxPower;
 else
  VAR_3 = VAR_0;
 if (!VAR_3)
  return 0;
 switch (VAR_1) {
 case 128:
  return FUNC_0(VAR_3, 8);
 default:
  return FUNC_0(VAR_3, 2);
 }
}
