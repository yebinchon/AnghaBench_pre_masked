
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {unsigned int fifosize; scalar_t__ membase; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_port*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct uart_port*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_4, unsigned int VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_4->state->xmit;
 unsigned int VAR_7;
 unsigned int VAR_8;

 if (VAR_4->x_char) {
  FUNC_7(VAR_4->x_char, VAR_4->membase + FUNC_0(VAR_4));
  VAR_4->icount.tx++;
  VAR_4->x_char = 0;
  return;
 }

 if (FUNC_4(VAR_6) || FUNC_5(VAR_4)) {
  FUNC_1(VAR_4);
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->fifosize; VAR_7++) {
  FUNC_7(VAR_6->buf[VAR_6->tail], VAR_4->membase + FUNC_0(VAR_4));
  VAR_6->tail = (VAR_6->tail + 1) & (VAR_2 - 1);
  VAR_4->icount.tx++;

  if (FUNC_4(VAR_6))
   break;

  VAR_8 = FUNC_2(VAR_4->membase + VAR_1);
  if (VAR_8 & VAR_0)
   break;
 }

 if (FUNC_3(VAR_6) < VAR_3)
  FUNC_6(VAR_4);

 if (FUNC_4(VAR_6))
  FUNC_1(VAR_4);
}
