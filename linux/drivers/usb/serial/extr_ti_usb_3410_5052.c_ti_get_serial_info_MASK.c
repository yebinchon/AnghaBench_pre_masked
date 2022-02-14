
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int closing_wait; } ;
struct usb_serial_port {int write_fifo; int port_number; int minor; TYPE_1__ port; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct ti_port {TYPE_2__* tp_tdev; } ;
struct serial_struct {int baud_base; unsigned int closing_wait; int xmit_fifo_size; int port; int line; int type; } ;
struct TYPE_4__ {scalar_t__ td_is_3410; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 struct ti_port* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_2,
 struct serial_struct *VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_2->driver_data;
 struct ti_port *VAR_5 = FUNC_2(VAR_4);
 unsigned VAR_6;

 VAR_6 = VAR_4->port.closing_wait;
 if (VAR_6 != VAR_0)
  VAR_6 = FUNC_0(VAR_6) / 10;

 VAR_3->type = VAR_1;
 VAR_3->line = VAR_4->minor;
 VAR_3->port = VAR_4->port_number;
 VAR_3->xmit_fifo_size = FUNC_1(&VAR_4->write_fifo);
 VAR_3->baud_base = VAR_5->tp_tdev->td_is_3410 ? 921600 : 460800;
 VAR_3->closing_wait = VAR_6;
 return 0;
}
