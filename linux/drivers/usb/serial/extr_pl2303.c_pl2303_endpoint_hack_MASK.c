
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial_endpoints {scalar_t__ num_interrupt_in; struct usb_endpoint_descriptor** interrupt_in; } ;
struct usb_serial {struct usb_device* dev; struct usb_interface* interface; } ;
struct device {int dummy; } ;
struct usb_interface {struct usb_host_interface* cur_altsetting; struct device dev; } ;
struct TYPE_5__ {unsigned int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device {TYPE_1__* actconfig; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_4__ {struct usb_interface** interface; } ;


 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor**) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial *VAR_0,
     struct usb_serial_endpoints *VAR_1)
{
 struct usb_interface *VAR_2 = VAR_0->interface;
 struct usb_device *VAR_3 = VAR_0->dev;
 struct device *VAR_4 = &VAR_2->dev;
 struct usb_host_interface *VAR_5;
 struct usb_endpoint_descriptor *VAR_6;
 unsigned int VAR_7;

 if (VAR_2 == VAR_3->actconfig->interface[0])
  return 0;


 VAR_5 = VAR_3->actconfig->interface[0]->cur_altsetting;

 for (VAR_7 = 0; VAR_7 < VAR_5->desc.bNumEndpoints; ++VAR_7) {
  VAR_6 = &VAR_5->endpoint[VAR_7].desc;

  if (!FUNC_2(VAR_6))
   continue;

  FUNC_1(VAR_4, "found interrupt in on separate interface\n");
  if (VAR_1->num_interrupt_in < FUNC_0(VAR_1->interrupt_in))
   VAR_1->interrupt_in[VAR_1->num_interrupt_in++] = VAR_6;
 }

 return 0;
}
