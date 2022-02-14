
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct urb {scalar_t__ transfer_buffer; struct usb_serial_port* context; } ;
struct garmin_data {scalar_t__ mode; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct garmin_data*,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct garmin_data* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_2->context;

 if (VAR_3) {
  struct garmin_data *VAR_4 =
     FUNC_3(VAR_3);

  if (FUNC_0(VAR_2->transfer_buffer) == VAR_0) {

   if (VAR_4->mode == VAR_1) {
    FUNC_1(VAR_4,
     ((__u8 *)VAR_2->transfer_buffer)[4]);
   }
  }
  FUNC_4(VAR_3);
 }





 FUNC_2(VAR_2->transfer_buffer);
}
