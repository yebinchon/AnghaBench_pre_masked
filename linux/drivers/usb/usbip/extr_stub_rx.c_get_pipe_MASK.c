
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ number_of_packets; } ;
struct TYPE_6__ {TYPE_2__ cmd_submit; } ;
struct TYPE_4__ {int ep; int direction; } ;
struct usbip_header {TYPE_3__ u; TYPE_1__ base; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_host_endpoint {struct usb_endpoint_descriptor desc; } ;
struct usb_device {int dev; struct usb_host_endpoint** ep_out; struct usb_host_endpoint** ep_in; } ;
struct stub_device {struct usb_device* udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_2 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_3 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;
 int FUNC_5 (struct usb_device*,int) ;
 int FUNC_6 (struct usb_device*,int) ;
 int FUNC_7 (struct usb_device*,int) ;
 int FUNC_8 (struct usb_device*,int) ;
 int FUNC_9 (struct usb_device*,int) ;
 int FUNC_10 (struct usb_device*,int) ;
 int FUNC_11 (struct usb_device*,int) ;
 int FUNC_12 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_13(struct stub_device *VAR_3, struct usbip_header *VAR_4)
{
 struct usb_device *VAR_5 = VAR_3->udev;
 struct usb_host_endpoint *VAR_6;
 struct usb_endpoint_descriptor *VAR_7 = ((void*)0);
 int VAR_8 = VAR_4->base.ep;
 int VAR_9 = VAR_4->base.direction;

 if (VAR_8 < 0 || VAR_8 > 15)
  goto err_ret;

 if (VAR_9 == VAR_0)
  VAR_6 = VAR_5->ep_in[VAR_8 & 0x7f];
 else
  VAR_6 = VAR_5->ep_out[VAR_8 & 0x7f];
 if (!VAR_6)
  goto err_ret;

 VAR_7 = &VAR_6->desc;

 if (FUNC_2(VAR_7)) {
  if (VAR_9 == VAR_1)
   return FUNC_10(VAR_5, VAR_8);
  else
   return FUNC_6(VAR_5, VAR_8);
 }

 if (FUNC_1(VAR_7)) {
  if (VAR_9 == VAR_1)
   return FUNC_9(VAR_5, VAR_8);
  else
   return FUNC_5(VAR_5, VAR_8);
 }

 if (FUNC_3(VAR_7)) {
  if (VAR_9 == VAR_1)
   return FUNC_11(VAR_5, VAR_8);
  else
   return FUNC_7(VAR_5, VAR_8);
 }

 if (FUNC_4(VAR_7)) {

  if (VAR_4->u.cmd_submit.number_of_packets < 0 ||
      VAR_4->u.cmd_submit.number_of_packets >
      VAR_2) {
   FUNC_0(&VAR_3->udev->dev,
    "CMD_SUBMIT: isoc invalid num packets %d\n",
    VAR_4->u.cmd_submit.number_of_packets);
   return -1;
  }
  if (VAR_9 == VAR_1)
   return FUNC_12(VAR_5, VAR_8);
  else
   return FUNC_8(VAR_5, VAR_8);
 }

err_ret:

 FUNC_0(&VAR_3->udev->dev, "CMD_SUBMIT: invalid epnum %d\n", VAR_8);
 return -1;
}
