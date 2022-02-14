
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int close_delay; int closing_wait; int tty; } ;
struct usb_serial_port {TYPE_1__ port; int port_number; int minor; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int close_delay; int closing_wait; int baud_base; int port; int line; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct tty_struct *VAR_1,
      struct serial_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_1->driver_data;

 VAR_2->line = VAR_3->minor;
 VAR_2->port = VAR_3->port_number;
 VAR_2->baud_base = FUNC_0(VAR_3->port.tty);
 VAR_2->close_delay = VAR_3->port.close_delay / 10;
 VAR_2->closing_wait = VAR_3->port.closing_wait == VAR_0 ?
     VAR_0 :
     VAR_3->port.closing_wait / 10;
 return 0;
}
