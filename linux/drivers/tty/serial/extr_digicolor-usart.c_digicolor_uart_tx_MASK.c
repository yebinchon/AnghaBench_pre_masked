
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int lock; TYPE_2__ icount; scalar_t__ membase; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; int * buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_3)
{
 struct circ_buf *VAR_4 = &VAR_3->state->xmit;
 unsigned long VAR_5;

 if (FUNC_1(VAR_3))
  return;

 FUNC_2(&VAR_3->lock, VAR_5);

 if (VAR_3->x_char) {
  FUNC_9(VAR_3->x_char, VAR_3->membase + VAR_1);
  VAR_3->icount.tx++;
  VAR_3->x_char = 0;
  goto out;
 }

 if (FUNC_5(VAR_4) || FUNC_6(VAR_3)) {
  FUNC_0(VAR_3);
  goto out;
 }

 while (!FUNC_5(VAR_4)) {
  FUNC_8(VAR_4->buf[VAR_4->tail], VAR_3->membase + VAR_1);
  VAR_4->tail = (VAR_4->tail + 1) & (VAR_0 - 1);
  VAR_3->icount.tx++;

  if (FUNC_1(VAR_3))
   break;
 }

 if (FUNC_4(VAR_4) < VAR_2)
  FUNC_7(VAR_3);

out:
 FUNC_3(&VAR_3->lock, VAR_5);
}
