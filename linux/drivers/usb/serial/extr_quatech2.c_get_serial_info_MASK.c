
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int bulk_out_size; int minor; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int baud_base; int close_delay; int closing_wait; int xmit_fifo_size; scalar_t__ irq; int port; int line; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_1,
      struct serial_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_1->driver_data;

 VAR_2->line = VAR_3->minor;
 VAR_2->port = 0;
 VAR_2->irq = 0;
 VAR_2->xmit_fifo_size = VAR_3->bulk_out_size;
 VAR_2->baud_base = 9600;
 VAR_2->close_delay = 5*VAR_0;
 VAR_2->closing_wait = 30*VAR_0;
 return 0;
}
