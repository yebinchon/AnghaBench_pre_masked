
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usb_ctrlrequest {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbhsg_gpriv*,unsigned short) ;
 scalar_t__ FUNC_1 (struct usbhsg_gpriv*,int ) ;
 struct usbhsg_gpriv* FUNC_2 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_3(struct usbhs_priv *VAR_2,
            struct usbhsg_uep *VAR_3,
            struct usb_ctrlrequest *VAR_4)
{
 struct usbhsg_gpriv *VAR_5 = FUNC_2(VAR_3);
 unsigned short VAR_6 = 0;

 if (FUNC_1(VAR_5, VAR_0))
  VAR_6 = 1 << VAR_1;

 FUNC_0(VAR_5, VAR_6);

 return 0;
}
