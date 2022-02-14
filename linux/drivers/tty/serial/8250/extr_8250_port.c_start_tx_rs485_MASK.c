
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_3__ {int flags; scalar_t__ delay_rts_before_send; } ;
struct TYPE_4__ {TYPE_1__ rs485; } ;
struct uart_8250_port {TYPE_2__ port; struct uart_8250_em485* em485; } ;
struct uart_8250_em485 {int start_tx_timer; int * active_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct uart_port*) ;
 unsigned char FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*,unsigned char) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,scalar_t__) ;
 struct uart_8250_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static inline void FUNC_6(struct uart_port *VAR_3)
{
 struct uart_8250_port *VAR_4 = FUNC_5(VAR_3);
 struct uart_8250_em485 *VAR_5 = VAR_4->em485;
 unsigned char VAR_6;

 if (!(VAR_4->port.rs485.flags & VAR_1))
  FUNC_3(&VAR_4->port);

 VAR_5->active_timer = ((void*)0);

 VAR_6 = FUNC_1(VAR_4);
 if (!!(VAR_4->port.rs485.flags & VAR_0) !=
     !!(VAR_6 & VAR_2)) {
  if (VAR_4->port.rs485.flags & VAR_0)
   VAR_6 |= VAR_2;
  else
   VAR_6 &= ~VAR_2;
  FUNC_2(VAR_4, VAR_6);

  if (VAR_4->port.rs485.delay_rts_before_send > 0) {
   VAR_5->active_timer = &VAR_5->start_tx_timer;
   FUNC_4(&VAR_5->start_tx_timer,
      VAR_4->port.rs485.delay_rts_before_send);
   return;
  }
 }

 FUNC_0(VAR_3);
}
