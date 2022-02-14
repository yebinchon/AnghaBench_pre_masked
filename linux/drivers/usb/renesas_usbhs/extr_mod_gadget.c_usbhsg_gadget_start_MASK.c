
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct usbhsg_gpriv {struct usb_gadget_driver* driver; TYPE_1__ gadget; TYPE_2__* transceiver; } ;
struct usbhs_priv {int dummy; } ;
struct usb_gadget_driver {scalar_t__ max_speed; int setup; } ;
struct usb_gadget {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int otg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (struct usbhs_priv*) ;
 struct device* FUNC_4 (struct usbhs_priv*) ;
 struct usbhsg_gpriv* FUNC_5 (struct usb_gadget*) ;
 struct usbhs_priv* FUNC_6 (struct usbhsg_gpriv*) ;
 int FUNC_7 (struct usbhs_priv*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_gadget *VAR_3,
  struct usb_gadget_driver *VAR_4)
{
 struct usbhsg_gpriv *VAR_5 = FUNC_5(VAR_3);
 struct usbhs_priv *VAR_6 = FUNC_6(VAR_5);
 struct device *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;

 if (!VAR_4 ||
     !VAR_4->setup ||
     VAR_4->max_speed < VAR_2)
  return -VAR_0;


 if (!FUNC_0(VAR_5->transceiver)) {
  VAR_8 = FUNC_2(VAR_5->transceiver->otg,
     &VAR_5->gadget);
  if (VAR_8) {
   FUNC_1(VAR_7, "%s: can't bind to transceiver\n",
    VAR_5->gadget.name);
   return VAR_8;
  }


  FUNC_3(VAR_6);
 }


 VAR_5->driver = VAR_4;

 return FUNC_7(VAR_6, VAR_1);
}
