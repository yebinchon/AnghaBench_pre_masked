
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int minor; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int xmit_fifo_size; int baud_base; int close_delay; int closing_wait; scalar_t__ irq; int port; int line; int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_2,
      struct serial_struct *VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_2->driver_data;


 VAR_3->type = VAR_1;
 VAR_3->line = VAR_4->minor;
 VAR_3->port = 0;
 VAR_3->irq = 0;
 VAR_3->xmit_fifo_size = 1024;
 VAR_3->baud_base = 9600;
 VAR_3->close_delay = 5*VAR_0;
 VAR_3->closing_wait = 30*VAR_0;
 return 0;
}
