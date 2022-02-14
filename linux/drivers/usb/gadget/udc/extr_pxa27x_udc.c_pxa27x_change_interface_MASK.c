
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {int wValue; int wIndex; scalar_t__ wLength; int bRequest; int bRequestType; } ;
struct pxa_udc {int last_interface; int last_alternate; int * pxa_ep; int gadget; TYPE_1__* driver; int dev; } ;
struct TYPE_2__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pxa_udc*,int ) ;
 int FUNC_3 (int *,struct usb_ctrlrequest*) ;

__attribute__((used)) static void FUNC_4(struct pxa_udc *VAR_4, int VAR_5, int VAR_6)
{
 struct usb_ctrlrequest VAR_7;

 FUNC_0(VAR_4->dev, "interface=%d, alternate setting=%d\n", VAR_5, VAR_6);

 VAR_4->last_interface = VAR_5;
 VAR_4->last_alternate = VAR_6;

 VAR_7.bRequestType = VAR_1;
 VAR_7.bRequest = VAR_2;
 VAR_7.wValue = VAR_6;
 VAR_7.wIndex = VAR_5;
 VAR_7.wLength = 0;

 FUNC_2(VAR_4, VAR_3);
 VAR_4->driver->setup(&VAR_4->gadget, &VAR_7);
 FUNC_1(&VAR_4->pxa_ep[0], VAR_0);
}
