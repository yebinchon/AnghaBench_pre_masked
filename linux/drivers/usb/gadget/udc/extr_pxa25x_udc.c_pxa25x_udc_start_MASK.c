
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int dummy; } ;
struct usb_gadget {int dummy; } ;
struct pxa25x_udc {int pullup; int gadget; TYPE_1__* transceiver; struct usb_gadget_driver* driver; } ;
struct TYPE_2__ {int otg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pxa25x_udc*) ;
 int FUNC_2 (int ,int *) ;
 struct pxa25x_udc* FUNC_3 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_0,
  struct usb_gadget_driver *VAR_1)
{
 struct pxa25x_udc *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;


 VAR_2->driver = VAR_1;
 VAR_2->pullup = 1;





 if (!FUNC_0(VAR_2->transceiver)) {
  VAR_3 = FUNC_2(VAR_2->transceiver->otg,
      &VAR_2->gadget);
  if (VAR_3)
   goto bind_fail;
 }

 FUNC_1(VAR_2);
 return 0;
bind_fail:
 return VAR_3;
}
