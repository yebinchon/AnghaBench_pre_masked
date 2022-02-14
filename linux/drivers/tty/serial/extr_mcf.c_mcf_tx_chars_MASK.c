
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int tx; } ;
struct uart_port {scalar_t__ membase; TYPE_3__ rs485; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct mcf_uart {scalar_t__ imr; struct uart_port port; } ;
struct circ_buf {size_t head; size_t tail; scalar_t__* buf; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct circ_buf*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mcf_uart *VAR_10)
{
 struct uart_port *VAR_11 = &VAR_10->port;
 struct circ_buf *VAR_12 = &VAR_11->state->xmit;

 if (VAR_11->x_char) {

  FUNC_3(VAR_11->x_char, VAR_11->membase + VAR_6);
  VAR_11->x_char = 0;
  VAR_11->icount.tx++;
  return;
 }

 while (FUNC_0(VAR_11->membase + VAR_4) & VAR_5) {
  if (VAR_12->head == VAR_12->tail)
   break;
  FUNC_3(VAR_12->buf[VAR_12->tail], VAR_11->membase + VAR_6);
  VAR_12->tail = (VAR_12->tail + 1) & (VAR_8 -1);
  VAR_11->icount.tx++;
 }

 if (FUNC_1(VAR_12) < VAR_9)
  FUNC_2(VAR_11);

 if (VAR_12->head == VAR_12->tail) {
  VAR_10->imr &= ~VAR_3;
  FUNC_3(VAR_10->imr, VAR_11->membase + VAR_2);

  if (VAR_11->rs485.flags & VAR_7)
   FUNC_3(VAR_1,
    VAR_11->membase + VAR_0);
 }
}
