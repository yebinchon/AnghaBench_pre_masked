
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct symbol_private {int throttled; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct symbol_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->driver_data;
 struct symbol_private *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->lock);
 VAR_2->throttled = 1;
 FUNC_1(&VAR_2->lock);
}
