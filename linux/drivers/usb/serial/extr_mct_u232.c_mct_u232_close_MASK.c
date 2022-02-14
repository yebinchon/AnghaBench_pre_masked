
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; } ;
struct mct_u232_private {int read_urb; } ;


 struct mct_u232_private* FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_0)
{
 struct mct_u232_private *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->read_urb);
 FUNC_1(VAR_0->interrupt_in_urb);

 FUNC_2(VAR_0);
}
