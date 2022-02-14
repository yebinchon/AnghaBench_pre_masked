
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct urb {scalar_t__ actual_length; int transfer_buffer; struct usb_serial_port* context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_2->context;

 if (VAR_2->actual_length == VAR_1 &&
  FUNC_0(VAR_2->transfer_buffer, VAR_0,
      VAR_1) == 0) {
  FUNC_2(VAR_3);
  return;
 }

 FUNC_1(VAR_2);
}
