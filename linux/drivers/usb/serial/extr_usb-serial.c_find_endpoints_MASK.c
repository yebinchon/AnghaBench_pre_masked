
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial_endpoints {int num_interrupt_out; struct usb_endpoint_descriptor** interrupt_out; int num_interrupt_in; struct usb_endpoint_descriptor** interrupt_in; int num_bulk_out; struct usb_endpoint_descriptor** bulk_out; int num_bulk_in; struct usb_endpoint_descriptor** bulk_in; } ;
struct usb_serial {TYPE_1__* interface; } ;
struct TYPE_5__ {unsigned int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_4__ {struct usb_host_interface* cur_altsetting; struct device dev; } ;


 int FUNC_0 (struct usb_endpoint_descriptor**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*,unsigned int) ;
 scalar_t__ FUNC_3 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_5 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_6 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static void FUNC_7(struct usb_serial *VAR_1,
     struct usb_serial_endpoints *VAR_2)
{
 struct device *VAR_3 = &VAR_1->interface->dev;
 struct usb_host_interface *VAR_4;
 struct usb_endpoint_descriptor *VAR_5;
 unsigned int VAR_6;

 FUNC_1(FUNC_0(VAR_2->bulk_in) < VAR_0 / 2);
 FUNC_1(FUNC_0(VAR_2->bulk_out) < VAR_0 / 2);
 FUNC_1(FUNC_0(VAR_2->interrupt_in) < VAR_0 / 2);
 FUNC_1(FUNC_0(VAR_2->interrupt_out) < VAR_0 / 2);

 VAR_4 = VAR_1->interface->cur_altsetting;
 for (VAR_6 = 0; VAR_6 < VAR_4->desc.bNumEndpoints; ++VAR_6) {
  VAR_5 = &VAR_4->endpoint[VAR_6].desc;

  if (FUNC_3(VAR_5)) {
   FUNC_2(VAR_3, "found bulk in on endpoint %u\n", VAR_6);
   VAR_2->bulk_in[VAR_2->num_bulk_in++] = VAR_5;
  } else if (FUNC_4(VAR_5)) {
   FUNC_2(VAR_3, "found bulk out on endpoint %u\n", VAR_6);
   VAR_2->bulk_out[VAR_2->num_bulk_out++] = VAR_5;
  } else if (FUNC_5(VAR_5)) {
   FUNC_2(VAR_3, "found interrupt in on endpoint %u\n", VAR_6);
   VAR_2->interrupt_in[VAR_2->num_interrupt_in++] = VAR_5;
  } else if (FUNC_6(VAR_5)) {
   FUNC_2(VAR_3, "found interrupt out on endpoint %u\n", VAR_6);
   VAR_2->interrupt_out[VAR_2->num_interrupt_out++] = VAR_5;
  }
 }
}
