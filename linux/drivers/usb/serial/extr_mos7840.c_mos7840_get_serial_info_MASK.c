
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int xmit_fifo_size; int baud_base; int close_delay; int closing_wait; scalar_t__ irq; int port; int line; int type; } ;
struct moschip_port {TYPE_1__* port; } ;
struct TYPE_2__ {int port_number; int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct moschip_port* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_4,
       struct serial_struct *VAR_5)
{
 struct usb_serial_port *VAR_6 = VAR_4->driver_data;
 struct moschip_port *VAR_7 = FUNC_0(VAR_6);

 VAR_5->type = VAR_2;
 VAR_5->line = VAR_7->port->minor;
 VAR_5->port = VAR_7->port->port_number;
 VAR_5->irq = 0;
 VAR_5->xmit_fifo_size = VAR_1 * VAR_3;
 VAR_5->baud_base = 9600;
 VAR_5->close_delay = 5 * VAR_0;
 VAR_5->closing_wait = 30 * VAR_0;
 return 0;
}
