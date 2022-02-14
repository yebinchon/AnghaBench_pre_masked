
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ membase; TYPE_1__* state; scalar_t__ x_char; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct uart_port *VAR_6)
{
 struct circ_buf *VAR_7 = &VAR_6->state->xmit;
 if (FUNC_4(VAR_6)) {
  FUNC_1(VAR_6);
  return;
 }

 while (((FUNC_0(VAR_6->membase + VAR_2) &
  VAR_0) >> VAR_1) != 0) {
  if (VAR_6->x_char) {
   FUNC_6(VAR_6->x_char, VAR_6->membase + VAR_3);
   VAR_6->icount.tx++;
   VAR_6->x_char = 0;
   continue;
  }

  if (FUNC_3(VAR_7))
   break;

  FUNC_6(VAR_6->state->xmit.buf[VAR_6->state->xmit.tail],
   VAR_6->membase + VAR_3);
  VAR_7->tail = (VAR_7->tail + 1) & (VAR_4 - 1);
  VAR_6->icount.tx++;
 }

 if (FUNC_2(VAR_7) < VAR_5)
  FUNC_5(VAR_6);
}
