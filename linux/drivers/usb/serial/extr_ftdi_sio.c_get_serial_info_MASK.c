
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int custom_divisor; int baud_base; int flags; } ;
struct ftdi_private {int custom_divisor; int baud_base; int flags; } ;


 struct ftdi_private* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0,
    struct serial_struct *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_0->driver_data;
 struct ftdi_private *VAR_3 = FUNC_0(VAR_2);

 VAR_1->flags = VAR_3->flags;
 VAR_1->baud_base = VAR_3->baud_base;
 VAR_1->custom_divisor = VAR_3->custom_divisor;
 return 0;
}
