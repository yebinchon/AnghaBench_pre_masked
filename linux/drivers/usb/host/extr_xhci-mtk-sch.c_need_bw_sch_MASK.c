
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int desc; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct usb_host_endpoint *VAR_0,
 enum usb_device_speed VAR_1, int VAR_2)
{

 if (FUNC_2(&VAR_0->desc)
  || FUNC_1(&VAR_0->desc))
  return 0;






 if (FUNC_0(VAR_1) && !VAR_2)
  return 0;

 return 1;
}
