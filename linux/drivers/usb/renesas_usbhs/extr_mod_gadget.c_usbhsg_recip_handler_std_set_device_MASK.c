
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usb_ctrlrequest {int wIndex; int wValue; } ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usbhs_priv*,int) ;
 int FUNC_3 (struct usbhs_priv*,struct usbhsg_uep*,struct usb_ctrlrequest*) ;

__attribute__((used)) static int FUNC_4(struct usbhs_priv *VAR_0,
       struct usbhsg_uep *VAR_1,
       struct usb_ctrlrequest *VAR_2)
{
 switch (FUNC_0(VAR_2->wValue)) {
 case 128:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  FUNC_1(100);
  FUNC_2(VAR_0, FUNC_0(VAR_2->wIndex) >> 8);
  break;
 default:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  break;
 }

 return 0;
}
