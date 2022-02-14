
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct ti_port {TYPE_2__* tp_port; } ;
struct serial_struct {unsigned int closing_wait; } ;
struct TYPE_3__ {unsigned int closing_wait; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 struct ti_port* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1,
 struct serial_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_1->driver_data;
 struct ti_port *VAR_4 = FUNC_1(VAR_3);
 unsigned VAR_5;

 VAR_5 = VAR_2->closing_wait;
 if (VAR_5 != VAR_0)
  VAR_5 = FUNC_0(10 * VAR_2->closing_wait);

 VAR_4->tp_port->port.closing_wait = VAR_5;

 return 0;
}
