
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; } ;
struct f81232_private {int lsr_work; int interrupt_work; } ;


 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (int *) ;
 struct f81232_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_5(struct usb_serial_port *VAR_0)
{
 struct f81232_private *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_0);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0->interrupt_in_urb);
 FUNC_1(&VAR_1->interrupt_work);
 FUNC_1(&VAR_1->lsr_work);
}
