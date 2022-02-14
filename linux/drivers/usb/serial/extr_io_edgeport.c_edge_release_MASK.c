
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct edgeport_serial {struct edgeport_serial* bulk_in_buffer; int read_urb; struct edgeport_serial* interrupt_in_buffer; int interrupt_read_urb; scalar_t__ is_epic; } ;


 int FUNC_0 (struct edgeport_serial*) ;
 int FUNC_1 (int ) ;
 struct edgeport_serial* FUNC_2 (struct usb_serial*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct usb_serial *VAR_0)
{
 struct edgeport_serial *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->is_epic) {
  FUNC_3(VAR_1->interrupt_read_urb);
  FUNC_1(VAR_1->interrupt_read_urb);
  FUNC_0(VAR_1->interrupt_in_buffer);

  FUNC_3(VAR_1->read_urb);
  FUNC_1(VAR_1->read_urb);
  FUNC_0(VAR_1->bulk_in_buffer);
 }

 FUNC_0(VAR_1);
}
