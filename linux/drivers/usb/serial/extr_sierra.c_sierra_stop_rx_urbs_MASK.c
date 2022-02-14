
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; } ;
struct sierra_port_private {int num_in_urbs; int * in_urbs; } ;


 struct sierra_port_private* FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_serial_port *VAR_0)
{
 int VAR_1;
 struct sierra_port_private *VAR_2 = FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_2->num_in_urbs; VAR_1++)
  FUNC_1(VAR_2->in_urbs[VAR_1]);

 FUNC_1(VAR_0->interrupt_in_urb);
}
