
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int drain_delay; int closing_wait; } ;
struct usb_serial_port {TYPE_1__ port; TYPE_3__* serial; } ;
struct ti_port {int tp_uart_mode; TYPE_2__* tp_tdev; struct usb_serial_port* tp_port; int tp_uart_base_addr; int tp_lock; } ;
struct TYPE_6__ {struct usb_serial_port** port; } ;
struct TYPE_5__ {scalar_t__ td_rs485_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ti_port* FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct usb_serial_port*,struct ti_port*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_7)
{
 struct ti_port *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_2(&VAR_8->tp_lock);
 if (VAR_7 == VAR_7->serial->port[0])
  VAR_8->tp_uart_base_addr = VAR_2;
 else
  VAR_8->tp_uart_base_addr = VAR_3;
 VAR_7->port.closing_wait = FUNC_1(10 * VAR_6);
 VAR_8->tp_port = VAR_7;
 VAR_8->tp_tdev = FUNC_3(VAR_7->serial);

 if (VAR_8->tp_tdev->td_rs485_only)
  VAR_8->tp_uart_mode = VAR_5;
 else
  VAR_8->tp_uart_mode = VAR_4;

 FUNC_4(VAR_7, VAR_8);

 VAR_7->port.drain_delay = 3;

 return 0;
}
