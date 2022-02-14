
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct usb_gadget_driver {TYPE_1__ driver; } ;
struct usb_gadget {int dummy; } ;
struct goku_udc {struct usb_gadget_driver* driver; } ;


 struct goku_udc* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct goku_udc*) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_0,
  struct usb_gadget_driver *VAR_1)
{
 struct goku_udc *VAR_2 = FUNC_0(VAR_0);


 VAR_1->driver.bus = ((void*)0);
 VAR_2->driver = VAR_1;





 FUNC_1(VAR_2);

 return 0;
}
