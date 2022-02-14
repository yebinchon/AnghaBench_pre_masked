
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int lock; } ;
struct usbhsg_request {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct usbhs_pipe*,int ) ;
 struct usbhsg_uep* FUNC_3 (struct usb_ep*) ;
 int FUNC_4 (struct usbhsg_uep*,struct usbhsg_request*,int ) ;
 struct usbhsg_request* FUNC_5 (struct usb_request*) ;
 struct usbhs_pipe* FUNC_6 (struct usbhsg_uep*) ;
 int FUNC_7 (struct usbhsg_request*) ;

__attribute__((used)) static int FUNC_8(struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct usbhsg_uep *VAR_3 = FUNC_3(VAR_1);
 struct usbhsg_request *VAR_4 = FUNC_5(VAR_2);
 struct usbhs_pipe *VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_3->lock, VAR_6);
 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5)
  FUNC_2(VAR_5, FUNC_7(VAR_4));





 FUNC_4(VAR_3, VAR_4, -VAR_0);
 FUNC_1(&VAR_3->lock, VAR_6);

 return 0;
}
