
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int write_fifo; int port_number; int minor; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int baud_base; void* closing_wait; void* close_delay; scalar_t__ custom_divisor; int xmit_fifo_size; int port; int line; int type; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2,
    struct serial_struct *VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_2->driver_data;

 VAR_3->type = VAR_1;
 VAR_3->line = VAR_4->minor;
 VAR_3->port = VAR_4->port_number;
 VAR_3->xmit_fifo_size = FUNC_0(&VAR_4->write_fifo);
 VAR_3->custom_divisor = 0;
 VAR_3->baud_base = 460800;
 VAR_3->close_delay = VAR_0;
 VAR_3->closing_wait = VAR_0;

 return 0;
}
