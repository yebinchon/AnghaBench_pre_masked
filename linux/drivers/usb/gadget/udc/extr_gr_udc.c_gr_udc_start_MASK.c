
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct usb_gadget_driver {TYPE_1__ driver; } ;
struct usb_gadget {int dummy; } ;
struct gr_udc {int lock; struct usb_gadget_driver* driver; } ;


 int FUNC_0 (struct gr_udc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct gr_udc* FUNC_3 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_0,
   struct usb_gadget_driver *VAR_1)
{
 struct gr_udc *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->lock);


 VAR_1->driver.bus = ((void*)0);
 VAR_2->driver = VAR_1;


 FUNC_0(VAR_2);

 FUNC_2(&VAR_2->lock);

 return 0;
}
