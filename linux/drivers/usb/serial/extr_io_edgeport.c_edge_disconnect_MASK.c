
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct edgeport_serial {int read_urb; int interrupt_read_urb; scalar_t__ is_epic; } ;


 struct edgeport_serial* FUNC_0 (struct usb_serial*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_serial *VAR_0)
{
 struct edgeport_serial *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->is_epic) {
  FUNC_1(VAR_1->interrupt_read_urb);
  FUNC_1(VAR_1->read_urb);
 }
}
