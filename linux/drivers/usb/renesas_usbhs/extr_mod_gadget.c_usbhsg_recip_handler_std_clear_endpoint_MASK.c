
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usb_ctrlrequest {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_pipe*) ;
 int FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct usbhs_pipe*) ;
 int FUNC_3 (struct usbhs_pipe*) ;
 int FUNC_4 (struct usbhs_priv*,struct usbhsg_uep*,struct usb_ctrlrequest*) ;
 int FUNC_5 (struct usbhsg_gpriv*,int ) ;
 struct usbhsg_gpriv* FUNC_6 (struct usbhsg_uep*) ;
 struct usbhs_pipe* FUNC_7 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_8(struct usbhs_priv *VAR_1,
         struct usbhsg_uep *VAR_2,
         struct usb_ctrlrequest *VAR_3)
{
 struct usbhsg_gpriv *VAR_4 = FUNC_6(VAR_2);
 struct usbhs_pipe *VAR_5 = FUNC_7(VAR_2);

 if (!FUNC_5(VAR_4, VAR_0)) {
  FUNC_0(VAR_5);
  FUNC_2(VAR_5);
  FUNC_1(VAR_5);
 }

 FUNC_4(VAR_1, VAR_2, VAR_3);

 FUNC_3(VAR_5);

 return 0;
}
