
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {struct usbhs_pipe* pipe; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int * handler; struct usbhsg_uep* mod_private; } ;
struct usb_ep {int dummy; } ;
struct usb_endpoint_descriptor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor const*) ;
 int FUNC_1 (struct usb_endpoint_descriptor const*) ;
 int FUNC_2 (struct usb_endpoint_descriptor const*) ;
 int FUNC_3 (struct usb_endpoint_descriptor const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct usbhs_priv*,unsigned long) ;
 int FUNC_5 (struct usbhs_pipe*) ;
 int FUNC_6 (struct usbhs_pipe*,int ,int ,int ) ;
 struct usbhs_pipe* FUNC_7 (struct usbhs_priv*,int ,scalar_t__) ;
 int FUNC_8 (struct usbhs_pipe*) ;
 int FUNC_9 (struct usbhs_pipe*) ;
 int FUNC_10 (struct usbhs_priv*,unsigned long) ;
 int FUNC_11 (struct usbhs_priv*,int ,int ) ;
 struct usbhsg_uep* FUNC_12 (struct usb_ep*) ;
 struct usbhs_priv* FUNC_13 (struct usbhsg_gpriv*) ;
 struct usbhsg_gpriv* FUNC_14 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_15(struct usb_ep *VAR_4,
    const struct usb_endpoint_descriptor *VAR_5)
{
 struct usbhsg_uep *VAR_6 = FUNC_12(VAR_4);
 struct usbhsg_gpriv *VAR_7 = FUNC_14(VAR_6);
 struct usbhs_priv *VAR_8 = FUNC_13(VAR_7);
 struct usbhs_pipe *VAR_9;
 int VAR_10 = -VAR_1;
 unsigned long VAR_11;

 FUNC_4(VAR_8, VAR_11);





 if (VAR_6->pipe) {
  FUNC_5(VAR_6->pipe);
  FUNC_9(VAR_6->pipe);
  VAR_10 = 0;
  goto usbhsg_ep_enable_end;
 }

 VAR_9 = FUNC_7(VAR_8,
     FUNC_3(VAR_5),
     FUNC_0(VAR_5));
 if (VAR_9) {
  VAR_6->pipe = VAR_9;
  VAR_9->mod_private = VAR_6;


  FUNC_6(VAR_9, 0,
      FUNC_2(VAR_5),
      FUNC_1(VAR_5));






  if (FUNC_0(VAR_5)) {
   VAR_9->handler = &VAR_3;
  } else {
   VAR_9->handler = &VAR_2;
   FUNC_11(VAR_8, VAR_0,
        FUNC_8(VAR_9));
  }

  VAR_10 = 0;
 }

usbhsg_ep_enable_end:
 FUNC_10(VAR_8, VAR_11);

 return VAR_10;
}
