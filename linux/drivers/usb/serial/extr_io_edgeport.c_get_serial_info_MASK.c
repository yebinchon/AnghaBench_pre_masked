
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int baud_base; int close_delay; int closing_wait; int xmit_fifo_size; scalar_t__ irq; int port; int line; int type; } ;
struct edgeport_port {int maxTxCredits; TYPE_1__* port; } ;
struct TYPE_2__ {int port_number; int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct edgeport_port* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2,
    struct serial_struct *VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_2->driver_data;
 struct edgeport_port *VAR_5 = FUNC_0(VAR_4);

 VAR_3->type = VAR_1;
 VAR_3->line = VAR_5->port->minor;
 VAR_3->port = VAR_5->port->port_number;
 VAR_3->irq = 0;
 VAR_3->xmit_fifo_size = VAR_5->maxTxCredits;
 VAR_3->baud_base = 9600;
 VAR_3->close_delay = 5*VAR_0;
 VAR_3->closing_wait = 30*VAR_0;
 return 0;
}
