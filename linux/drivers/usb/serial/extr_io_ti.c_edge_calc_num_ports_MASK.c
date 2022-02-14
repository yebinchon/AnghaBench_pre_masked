
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_serial_endpoints {unsigned char num_bulk_in; unsigned char num_bulk_out; int num_interrupt_in; } ;
struct usb_serial {TYPE_4__* interface; TYPE_1__* type; } ;
struct device {int dummy; } ;
struct TYPE_8__ {TYPE_3__* cur_altsetting; struct device dev; } ;
struct TYPE_6__ {int bNumEndpoints; } ;
struct TYPE_7__ {TYPE_2__ desc; } ;
struct TYPE_5__ {unsigned char num_ports; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;

__attribute__((used)) static int FUNC_1(struct usb_serial *VAR_1,
    struct usb_serial_endpoints *VAR_2)
{
 struct device *VAR_3 = &VAR_1->interface->dev;
 unsigned char VAR_4 = VAR_1->type->num_ports;


 if (VAR_1->interface->cur_altsetting->desc.bNumEndpoints > 1) {
  if (VAR_2->num_bulk_in < VAR_4 ||
    VAR_2->num_bulk_out < VAR_4 ||
    VAR_2->num_interrupt_in < 1) {
   FUNC_0(VAR_3, "required endpoints missing\n");
   return -VAR_0;
  }
 }

 return VAR_4;
}
