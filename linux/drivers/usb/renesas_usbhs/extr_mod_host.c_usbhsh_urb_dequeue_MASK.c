
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_pkt {int pipe; } ;
struct usbhsh_request {struct usbhs_pkt pkt; } ;
struct usbhsh_hpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usb_hcd {int dummy; } ;
struct urb {int dummy; } ;


 int FUNC_0 (int ,struct usbhs_pkt*) ;
 struct usbhsh_hpriv* FUNC_1 (struct usb_hcd*) ;
 struct usbhs_priv* FUNC_2 (struct usbhsh_hpriv*) ;
 int FUNC_3 (struct usbhs_priv*,struct usbhs_pkt*) ;
 struct usbhsh_request* FUNC_4 (struct urb*) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_0, struct urb *VAR_1, int VAR_2)
{
 struct usbhsh_hpriv *VAR_3 = FUNC_1(VAR_0);
 struct usbhsh_request *VAR_4 = FUNC_4(VAR_1);

 if (VAR_4) {
  struct usbhs_priv *VAR_5 = FUNC_2(VAR_3);
  struct usbhs_pkt *VAR_6 = &VAR_4->pkt;

  FUNC_0(VAR_6->pipe, VAR_6);
  FUNC_3(VAR_5, VAR_6);
 }

 return 0;
}
