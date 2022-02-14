
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dev; } ;
struct TYPE_2__ {int speed; } ;
struct dummy {TYPE_1__ gadget; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 int FUNC_0 (struct dummy*) ;
 struct dummy* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct usb_gadget *VAR_0,
  enum usb_device_speed VAR_1)
{
 struct dummy *VAR_2;

 VAR_2 = FUNC_1(&VAR_0->dev);
 VAR_2->gadget.speed = VAR_1;
 FUNC_0(VAR_2);
}
