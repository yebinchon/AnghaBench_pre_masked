
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 char const** VAR_1 ;

const char *FUNC_1(enum usb_device_speed VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= FUNC_0(VAR_1))
  VAR_2 = VAR_0;
 return VAR_1[VAR_2];
}
