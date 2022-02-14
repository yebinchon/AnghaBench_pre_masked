
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct keyspan_port_private {int break_on; } ;


 int FUNC_0 (struct usb_serial_port*,int ) ;
 struct keyspan_port_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0, int VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_0->driver_data;
 struct keyspan_port_private *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_1 == -1)
  VAR_3->break_on = 1;
 else
  VAR_3->break_on = 0;

 FUNC_0(VAR_2, 0);
}
