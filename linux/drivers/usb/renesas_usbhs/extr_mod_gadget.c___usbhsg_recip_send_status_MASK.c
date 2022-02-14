
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int ep; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_pipe {int * handler; } ;
struct usb_request {int length; scalar_t__ zero; int * buf; int complete; } ;
struct device {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (struct device*,char*) ;
 int * FUNC_2 (int,int ) ;
 struct usb_request* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,struct usb_request*) ;
 int VAR_2 ;
 struct usbhsg_uep* FUNC_5 (struct usbhsg_gpriv*) ;
 struct device* FUNC_6 (struct usbhsg_gpriv*) ;
 int FUNC_7 (struct usbhsg_uep*,int ) ;
 int FUNC_8 (struct usb_request*) ;
 struct usbhs_pipe* FUNC_9 (struct usbhsg_uep*) ;

__attribute__((used)) static void FUNC_10(struct usbhsg_gpriv *VAR_3,
           unsigned short VAR_4)
{
 struct usbhsg_uep *VAR_5 = FUNC_5(VAR_3);
 struct usbhs_pipe *VAR_6 = FUNC_9(VAR_5);
 struct device *VAR_7 = FUNC_6(VAR_3);
 struct usb_request *VAR_8;
 __le16 *VAR_9;


 VAR_8 = FUNC_3(&VAR_5->ep, VAR_0);
 if (!VAR_8) {
  FUNC_1(VAR_7, "recip request allocation fail\n");
  return;
 }


 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0);
 if (!VAR_9) {
  FUNC_4(&VAR_5->ep, VAR_8);
  return;
 }


 *VAR_9 = FUNC_0(VAR_4);


 VAR_8->complete = VAR_1;
 VAR_8->buf = VAR_9;
 VAR_8->length = sizeof(*VAR_9);
 VAR_8->zero = 0;


 VAR_6->handler = &VAR_2;
 FUNC_7(VAR_5, FUNC_8(VAR_8));
}
