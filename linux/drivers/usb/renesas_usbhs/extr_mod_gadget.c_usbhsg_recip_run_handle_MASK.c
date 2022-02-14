
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhsg_recip_handle {int (* device ) (struct usbhs_priv*,struct usbhsg_uep*,struct usb_ctrlrequest*) ;int (* interface ) (struct usbhs_priv*,struct usbhsg_uep*,struct usb_ctrlrequest*) ;int (* endpoint ) (struct usbhs_priv*,struct usbhsg_uep*,struct usb_ctrlrequest*) ;int name; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; int wIndex; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,int,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ) ;
 struct device* FUNC_4 (struct usbhsg_gpriv*) ;
 struct usbhsg_uep* FUNC_5 (struct usbhsg_gpriv*,int) ;
 struct usbhsg_gpriv* FUNC_6 (struct usbhs_priv*) ;
 struct usbhs_pipe* FUNC_7 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_8(struct usbhs_priv *VAR_3,
       struct usbhsg_recip_handle *VAR_4,
       struct usb_ctrlrequest *VAR_5)
{
 struct usbhsg_gpriv *VAR_6 = FUNC_6(VAR_3);
 struct device *VAR_7 = FUNC_4(VAR_6);
 struct usbhsg_uep *VAR_8;
 struct usbhs_pipe *VAR_9;
 int VAR_10 = VAR_5->bRequestType & VAR_2;
 int VAR_11 = FUNC_3(VAR_5->wIndex) & VAR_1;
 int VAR_12 = 0;
 int (*VAR_13)(struct usbhs_priv *VAR_14, struct usbhsg_uep *VAR_15,
      struct usb_ctrlrequest *VAR_16);
 char *VAR_17;

 VAR_8 = FUNC_5(VAR_6, VAR_11);
 VAR_9 = FUNC_7(VAR_8);
 if (!VAR_9) {
  FUNC_1(VAR_7, "wrong recip request\n");
  return -VAR_0;
 }

 switch (VAR_10) {
 case 130:
  VAR_17 = "DEVICE";
  VAR_13 = VAR_4->device;
  break;
 case 128:
  VAR_17 = "INTERFACE";
  VAR_13 = VAR_4->interface;
  break;
 case 129:
  VAR_17 = "ENDPOINT";
  VAR_13 = VAR_4->endpoint;
  break;
 default:
  FUNC_2(VAR_7, "unsupported RECIP(%d)\n", VAR_10);
  VAR_13 = ((void*)0);
  VAR_12 = -VAR_0;
 }

 if (VAR_13) {
  FUNC_0(VAR_7, "%s (pipe %d :%s)\n", VAR_4->name, VAR_11, VAR_17);
  VAR_12 = VAR_13(VAR_3, VAR_8, VAR_5);
 }

 return VAR_12;
}
