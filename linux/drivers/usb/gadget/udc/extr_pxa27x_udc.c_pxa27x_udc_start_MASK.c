
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int dummy; } ;
struct usb_gadget {int dummy; } ;
struct pxa_udc {struct usb_gadget_driver* driver; int dev; int gadget; TYPE_1__* transceiver; } ;
struct TYPE_2__ {int otg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct pxa_udc*) ;
 struct pxa_udc* FUNC_4 (struct usb_gadget*) ;
 int FUNC_5 (struct pxa_udc*) ;

__attribute__((used)) static int FUNC_6(struct usb_gadget *VAR_0,
  struct usb_gadget_driver *VAR_1)
{
 struct pxa_udc *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;


 VAR_2->driver = VAR_1;

 if (!FUNC_0(VAR_2->transceiver)) {
  VAR_3 = FUNC_2(VAR_2->transceiver->otg,
      &VAR_2->gadget);
  if (VAR_3) {
   FUNC_1(VAR_2->dev, "can't bind to transceiver\n");
   goto fail;
  }
 }

 if (FUNC_3(VAR_2))
  FUNC_5(VAR_2);
 return 0;

fail:
 VAR_2->driver = ((void*)0);
 return VAR_3;
}
