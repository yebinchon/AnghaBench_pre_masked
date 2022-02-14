
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usb_request {int length; int zero; int buf; int status; scalar_t__ actual; } ;
struct usbhsg_request {struct usb_request req; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_pkt {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct usbhs_pipe*,struct usbhs_pkt*,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct usbhs_pipe*) ;
 struct device* FUNC_4 (struct usbhsg_gpriv*) ;
 int VAR_1 ;
 struct usbhsg_gpriv* FUNC_5 (struct usbhsg_uep*) ;
 struct usbhs_pipe* FUNC_6 (struct usbhsg_uep*) ;
 struct usbhs_pkt* FUNC_7 (struct usbhsg_request*) ;

__attribute__((used)) static void FUNC_8(struct usbhsg_uep *VAR_2,
         struct usbhsg_request *VAR_3)
{
 struct usbhsg_gpriv *VAR_4 = FUNC_5(VAR_2);
 struct device *VAR_5 = FUNC_4(VAR_4);
 struct usbhs_pipe *VAR_6 = FUNC_6(VAR_2);
 struct usbhs_pkt *VAR_7 = FUNC_7(VAR_3);
 struct usb_request *VAR_8 = &VAR_3->req;

 VAR_8->actual = 0;
 VAR_8->status = -VAR_0;
 FUNC_2(VAR_6, VAR_7, VAR_1,
         VAR_8->buf, VAR_8->length, VAR_8->zero, -1);
 FUNC_3(VAR_6);

 FUNC_0(VAR_5, "pipe %d : queue push (%d)\n",
  FUNC_1(VAR_6),
  VAR_8->length);
}
