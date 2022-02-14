
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int state; int work; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;


 int FUNC_0 (int *) ;

void FUNC_1(struct usb_gadget *VAR_0,
  enum usb_device_state VAR_1)
{
 VAR_0->state = VAR_1;
 FUNC_0(&VAR_0->work);
}
