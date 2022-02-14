
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhsg_gpriv {int * driver; TYPE_1__* transceiver; } ;
struct usbhs_priv {int dummy; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_2__ {int otg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 struct usbhsg_gpriv* FUNC_2 (struct usb_gadget*) ;
 struct usbhs_priv* FUNC_3 (struct usbhsg_gpriv*) ;
 int FUNC_4 (struct usbhs_priv*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_1)
{
 struct usbhsg_gpriv *VAR_2 = FUNC_2(VAR_1);
 struct usbhs_priv *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(VAR_3, VAR_0);

 if (!FUNC_0(VAR_2->transceiver))
  FUNC_1(VAR_2->transceiver->otg, ((void*)0));

 VAR_2->driver = ((void*)0);

 return 0;
}
