
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usb_ctrlrequest {int dummy; } ;


 int FUNC_0 (struct usbhs_pipe*) ;
 int FUNC_1 (struct usbhs_priv*,struct usbhsg_uep*,struct usb_ctrlrequest*) ;
 struct usbhs_pipe* FUNC_2 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_3(struct usbhs_priv *VAR_0,
       struct usbhsg_uep *VAR_1,
       struct usb_ctrlrequest *VAR_2)
{
 struct usbhs_pipe *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_3);

 FUNC_1(VAR_0, VAR_1, VAR_2);

 return 0;
}
