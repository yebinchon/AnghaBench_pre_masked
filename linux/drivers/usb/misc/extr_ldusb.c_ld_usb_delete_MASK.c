
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ld_usb {struct ld_usb* interrupt_out_buffer; struct ld_usb* interrupt_in_buffer; struct ld_usb* ring_buffer; int interrupt_out_urb; int interrupt_in_urb; } ;


 int FUNC_0 (struct ld_usb*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ld_usb *VAR_0)
{

 FUNC_1(VAR_0->interrupt_in_urb);
 FUNC_1(VAR_0->interrupt_out_urb);
 FUNC_0(VAR_0->ring_buffer);
 FUNC_0(VAR_0->interrupt_in_buffer);
 FUNC_0(VAR_0->interrupt_out_buffer);
 FUNC_0(VAR_0);
}
