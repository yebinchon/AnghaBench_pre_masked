
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usb_ctrlrequest {int dummy; } ;


 int FUNC_0 (struct usbhs_pipe*) ;
 struct usbhsg_uep* FUNC_1 (struct usbhsg_gpriv*) ;
 struct usbhsg_gpriv* FUNC_2 (struct usbhs_priv*) ;
 struct usbhs_pipe* FUNC_3 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_4(struct usbhs_priv *VAR_0,
       struct usbhsg_uep *VAR_1,
       struct usb_ctrlrequest *VAR_2)
{
 struct usbhsg_gpriv *VAR_3 = FUNC_2(VAR_0);
 struct usbhsg_uep *VAR_4 = FUNC_1(VAR_3);
 struct usbhs_pipe *VAR_5 = FUNC_3(VAR_4);

 FUNC_0(VAR_5);

 return 0;
}
