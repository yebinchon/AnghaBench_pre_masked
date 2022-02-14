
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhsg_uep {int dummy; } ;
struct usbhsg_recip_handle {int dummy; } ;
struct usbhsg_gpriv {int gadget; TYPE_1__* driver; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int * handler; } ;
struct usbhs_irq_state {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; int bRequest; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;
 int VAR_0 ;



 int FUNC_0 (struct device*,char*,int) ;
 struct usbhsg_recip_handle VAR_1 ;
 struct usbhsg_recip_handle VAR_2 ;
 struct usbhsg_recip_handle VAR_3 ;
 int FUNC_1 (int *,struct usb_ctrlrequest*) ;
 int VAR_4 ;
 int FUNC_2 (struct usbhs_pipe*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct usbhs_pipe*) ;
 int FUNC_4 (struct usbhs_irq_state*) ;
 int FUNC_5 (struct usbhs_priv*,struct usb_ctrlrequest*) ;
 struct usbhsg_uep* FUNC_6 (struct usbhsg_gpriv*) ;
 struct device* FUNC_7 (struct usbhsg_gpriv*) ;
 struct usbhsg_gpriv* FUNC_8 (struct usbhs_priv*) ;
 int FUNC_9 (struct usbhs_priv*,struct usbhsg_recip_handle*,struct usb_ctrlrequest*) ;
 struct usbhs_pipe* FUNC_10 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_11(struct usbhs_priv *VAR_7,
     struct usbhs_irq_state *VAR_8)
{
 struct usbhsg_gpriv *VAR_9 = FUNC_8(VAR_7);
 struct usbhsg_uep *VAR_10 = FUNC_6(VAR_9);
 struct usbhs_pipe *VAR_11 = FUNC_10(VAR_10);
 struct device *VAR_12 = FUNC_7(VAR_9);
 struct usb_ctrlrequest VAR_13;
 struct usbhsg_recip_handle *VAR_14 = ((void*)0);
 int VAR_15 = FUNC_4(VAR_8);
 int VAR_16 = 0;

 FUNC_0(VAR_12, "stage = %d\n", VAR_15);
 switch (VAR_15) {
 case 135:
  VAR_11->handler = &VAR_6;
  break;
 case 129:
  VAR_11->handler = &VAR_5;
  break;
 case 136:
  VAR_11->handler = &VAR_4;
  break;
 case 134:
 case 128:
  FUNC_2(VAR_11);

 default:
  return VAR_16;
 }




 FUNC_5(VAR_7, &VAR_13);

 switch (VAR_13.bRequestType & VAR_0) {
 case 130:
  switch (VAR_13.bRequest) {
  case 133:
   VAR_14 = &VAR_1;
   break;
  case 131:
   VAR_14 = &VAR_3;
   break;
  case 132:
   VAR_14 = &VAR_2;
   break;
  }
 }




 if (VAR_14)
  VAR_16 = FUNC_9(VAR_7, VAR_14, &VAR_13);
 else
  VAR_16 = VAR_9->driver->setup(&VAR_9->gadget, &VAR_13);

 if (VAR_16 < 0)
  FUNC_3(VAR_11);

 return VAR_16;
}
