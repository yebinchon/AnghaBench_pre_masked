
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf_overrun; } ;
struct uart_port {unsigned int ignore_status_mask; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_port*,unsigned int,unsigned int) ;

void FUNC_1(struct uart_port *VAR_1, unsigned int VAR_2,
   unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 struct tty_port *VAR_6 = &VAR_1->state->port;

 if ((VAR_2 & VAR_1->ignore_status_mask & ~VAR_3) == 0)
  if (FUNC_0(VAR_6, VAR_4, VAR_5) == 0)
   ++VAR_1->icount.buf_overrun;





 if (VAR_2 & ~VAR_1->ignore_status_mask & VAR_3)
  if (FUNC_0(VAR_6, 0, VAR_0) == 0)
   ++VAR_1->icount.buf_overrun;
}
