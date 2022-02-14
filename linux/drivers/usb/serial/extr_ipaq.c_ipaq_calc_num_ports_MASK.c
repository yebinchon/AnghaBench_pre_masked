
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_endpoints {int num_bulk_in; int num_bulk_out; int * bulk_out; int * bulk_in; } ;
struct usb_serial {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct usb_serial *VAR_1,
     struct usb_serial_endpoints *VAR_2)
{





 if (VAR_2->num_bulk_in == 0 || VAR_2->num_bulk_out == 0)
  return -VAR_0;





 if (VAR_2->num_bulk_in > 1 && VAR_2->num_bulk_out > 1) {
  VAR_2->bulk_in[0] = VAR_2->bulk_in[1];
  VAR_2->bulk_out[0] = VAR_2->bulk_out[1];
 }





 VAR_2->num_bulk_in = 1;
 VAR_2->num_bulk_out = 1;

 return 1;
}
