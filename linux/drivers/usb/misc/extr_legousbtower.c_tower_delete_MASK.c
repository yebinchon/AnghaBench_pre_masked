
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lego_usb_tower {int udev; struct lego_usb_tower* interrupt_out_buffer; struct lego_usb_tower* interrupt_in_buffer; struct lego_usb_tower* read_buffer; int interrupt_out_urb; int interrupt_in_urb; } ;


 int FUNC_0 (struct lego_usb_tower*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3 (struct lego_usb_tower *VAR_0)
{

 FUNC_1(VAR_0->interrupt_in_urb);
 FUNC_1(VAR_0->interrupt_out_urb);
 FUNC_0 (VAR_0->read_buffer);
 FUNC_0 (VAR_0->interrupt_in_buffer);
 FUNC_0 (VAR_0->interrupt_out_buffer);
 FUNC_2(VAR_0->udev);
 FUNC_0 (VAR_0);
}
