
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct ti_port {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct ti_port*,struct tty_struct*) ;
 struct ti_port* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->driver_data;
 struct ti_port *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_1(VAR_0) || FUNC_0(VAR_0))
  FUNC_2(VAR_2, VAR_0);

}
