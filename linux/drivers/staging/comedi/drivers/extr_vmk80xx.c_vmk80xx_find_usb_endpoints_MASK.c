
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmk80xx_private {struct usb_endpoint_descriptor* ep_tx; struct usb_endpoint_descriptor* ep_rx; } ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct comedi_device {struct vmk80xx_private* private; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 struct usb_interface* FUNC_0 (struct comedi_device*) ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_2 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_3 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1)
{
 struct vmk80xx_private *VAR_2 = VAR_1->private;
 struct usb_interface *VAR_3 = FUNC_0(VAR_1);
 struct usb_host_interface *VAR_4 = VAR_3->cur_altsetting;
 struct usb_endpoint_descriptor *VAR_5;
 int VAR_6;

 if (VAR_4->desc.bNumEndpoints != 2)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->desc.bNumEndpoints; VAR_6++) {
  VAR_5 = &VAR_4->endpoint[VAR_6].desc;

  if (FUNC_3(VAR_5) ||
      FUNC_1(VAR_5)) {
   if (!VAR_2->ep_rx)
    VAR_2->ep_rx = VAR_5;
   continue;
  }

  if (FUNC_4(VAR_5) ||
      FUNC_2(VAR_5)) {
   if (!VAR_2->ep_tx)
    VAR_2->ep_tx = VAR_5;
   continue;
  }
 }

 if (!VAR_2->ep_rx || !VAR_2->ep_tx)
  return -VAR_0;

 return 0;
}
