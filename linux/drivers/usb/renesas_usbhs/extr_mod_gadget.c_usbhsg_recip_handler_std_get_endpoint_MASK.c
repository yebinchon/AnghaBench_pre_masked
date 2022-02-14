
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
 int FUNC_0 (struct usbhsg_gpriv*,unsigned short) ;
 scalar_t__ FUNC_1 (struct usbhs_pipe*) ;
 struct usbhsg_gpriv* FUNC_2 (struct usbhsg_uep*) ;
 struct usbhs_pipe* FUNC_3 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_4(struct usbhs_priv *VAR_1,
       struct usbhsg_uep *VAR_2,
       struct usb_ctrlrequest *VAR_3)
{
 struct usbhsg_gpriv *VAR_4 = FUNC_2(VAR_2);
 struct usbhs_pipe *VAR_5 = FUNC_3(VAR_2);
 unsigned short VAR_6 = 0;

 if (FUNC_1(VAR_5))
  VAR_6 = 1 << VAR_0;

 FUNC_0(VAR_4, VAR_6);

 return 0;
}
