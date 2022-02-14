
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhsg_request {int dummy; } ;
struct usbhsg_gpriv {int driver; } ;
struct usbhs_pipe {int dummy; } ;
struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct usbhsg_uep* FUNC_1 (struct usb_ep*) ;
 scalar_t__ FUNC_2 (struct usbhsg_gpriv*) ;
 int FUNC_3 (struct usbhsg_uep*,struct usbhsg_request*) ;
 struct usbhsg_request* FUNC_4 (struct usb_request*) ;
 struct usbhsg_gpriv* FUNC_5 (struct usbhsg_uep*) ;
 struct usbhs_pipe* FUNC_6 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_7(struct usb_ep *VAR_1, struct usb_request *VAR_2,
     gfp_t VAR_3)
{
 struct usbhsg_uep *VAR_4 = FUNC_1(VAR_1);
 struct usbhsg_gpriv *VAR_5 = FUNC_5(VAR_4);
 struct usbhsg_request *VAR_6 = FUNC_4(VAR_2);
 struct usbhs_pipe *VAR_7 = FUNC_6(VAR_4);


 if (FUNC_2(VAR_5) ||
     FUNC_0(!VAR_5->driver) ||
     FUNC_0(!VAR_7))
  return -VAR_0;

 FUNC_3(VAR_4, VAR_6);

 return 0;
}
