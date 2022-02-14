
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int x_char; int fifosize; scalar_t__ membase; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {int* buf; size_t tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_10)
{
 struct circ_buf *VAR_11 = &VAR_10->state->xmit;
 int VAR_12;

 FUNC_8(FUNC_2(VAR_10->membase + VAR_4) & ~VAR_1,
        VAR_10->membase + VAR_4);
 FUNC_7(FUNC_1(VAR_10->membase + VAR_5) &
        ~(VAR_7 | VAR_6),
        VAR_10->membase + VAR_5);

 if (VAR_10->x_char) {
  FUNC_8(VAR_10->x_char, VAR_10->membase + VAR_2);
  VAR_10->icount.tx++;
  VAR_10->x_char = 0;
  return;
 }
 if (FUNC_4(VAR_11) || FUNC_5(VAR_10)) {
  FUNC_0(VAR_10);
  return;
 }

 VAR_12 = VAR_10->fifosize -
  (FUNC_2(VAR_10->membase + VAR_3) & 0xff);

 do {
  FUNC_8(VAR_11->buf[VAR_11->tail], VAR_10->membase + VAR_2);

  VAR_11->tail = (VAR_11->tail + 1) & (VAR_8 - 1);
  VAR_10->icount.tx++;
  if (FUNC_4(VAR_11))
   break;

 } while (--VAR_12 > 0);

 FUNC_8(FUNC_2(VAR_10->membase + VAR_4) & ~VAR_0,
        VAR_10->membase + VAR_4);

 FUNC_7(FUNC_1(VAR_10->membase + VAR_5) | VAR_6,
        VAR_10->membase + VAR_5);

 if (FUNC_3(VAR_11) < VAR_9)
  FUNC_6(VAR_10);

 if (FUNC_4(VAR_11))
  FUNC_0(VAR_10);
}
