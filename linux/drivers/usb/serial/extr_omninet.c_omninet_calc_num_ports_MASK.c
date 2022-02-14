
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_endpoints {int num_bulk_out; int * bulk_out; } ;
struct usb_serial {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct usb_serial *VAR_0,
     struct usb_serial_endpoints *VAR_1)
{

 VAR_1->bulk_out[0] = VAR_1->bulk_out[1];
 VAR_1->num_bulk_out = 1;

 return 1;
}
