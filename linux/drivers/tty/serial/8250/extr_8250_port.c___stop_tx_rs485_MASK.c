
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delay_rts_after_send; } ;
struct TYPE_4__ {TYPE_1__ rs485; } ;
struct uart_8250_port {TYPE_2__ port; struct uart_8250_em485* em485; } ;
struct uart_8250_em485 {int stop_tx_timer; int * active_timer; } ;


 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_8250_port *VAR_0)
{
 struct uart_8250_em485 *VAR_1 = VAR_0->em485;





 if (VAR_0->port.rs485.delay_rts_after_send > 0) {
  VAR_1->active_timer = &VAR_1->stop_tx_timer;
  FUNC_1(&VAR_1->stop_tx_timer,
       VAR_0->port.rs485.delay_rts_after_send);
 } else {
  FUNC_0(VAR_0);
 }
}
