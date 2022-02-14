
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_endpoints {int * bulk_out; } ;
struct usb_serial {TYPE_1__* type; } ;
struct TYPE_2__ {int num_ports; } ;



__attribute__((used)) static int FUNC_0(struct usb_serial *VAR_0,
     struct usb_serial_endpoints *VAR_1)
{
 VAR_1->bulk_out[0] = VAR_1->bulk_out[1];

 return VAR_0->type->num_ports;
}
