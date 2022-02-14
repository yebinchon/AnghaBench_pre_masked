
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int fifosize; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int FUNC_0 (struct uart_port*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_2)
{
 struct circ_buf *VAR_3 = &VAR_2->state->xmit;
 int VAR_4;

 if (VAR_2->x_char) {
  FUNC_0(VAR_2, VAR_2->x_char);
  VAR_2->icount.tx++;
  VAR_2->x_char = 0;
  return;
 }

 if (FUNC_3(VAR_3) || FUNC_4(VAR_2)) {
  FUNC_1(VAR_2);
  return;
 }


 VAR_4 = VAR_2->fifosize >> 1;
 do {
  FUNC_0(VAR_2, VAR_3->buf[VAR_3->tail]);
  VAR_3->tail = (VAR_3->tail + 1) & (VAR_0 - 1);
  VAR_2->icount.tx++;
  if (FUNC_3(VAR_3))
   break;
 } while (--VAR_4 > 0);

 if (FUNC_2(VAR_3) < VAR_1)
  FUNC_5(VAR_2);

 if (FUNC_3(VAR_3))
  FUNC_1(VAR_2);
}
