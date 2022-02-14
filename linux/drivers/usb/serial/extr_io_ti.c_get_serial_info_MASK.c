
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int baud_base; int close_delay; unsigned int closing_wait; int xmit_fifo_size; scalar_t__ irq; int port; int line; int type; } ;
struct edgeport_port {TYPE_2__* port; } ;
struct TYPE_3__ {unsigned int closing_wait; } ;
struct TYPE_4__ {int bulk_out_size; int port_number; int minor; TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 struct edgeport_port* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_3,
    struct serial_struct *VAR_4)
{
 struct usb_serial_port *VAR_5 = VAR_3->driver_data;
 struct edgeport_port *VAR_6 = FUNC_1(VAR_5);
 unsigned VAR_7;

 VAR_7 = VAR_6->port->port.closing_wait;
 if (VAR_7 != VAR_0)
  VAR_7 = FUNC_0(VAR_7) / 10;

 VAR_4->type = VAR_2;
 VAR_4->line = VAR_6->port->minor;
 VAR_4->port = VAR_6->port->port_number;
 VAR_4->irq = 0;
 VAR_4->xmit_fifo_size = VAR_6->port->bulk_out_size;
 VAR_4->baud_base = 9600;
 VAR_4->close_delay = 5*VAR_1;
 VAR_4->closing_wait = VAR_7;
 return 0;
}
