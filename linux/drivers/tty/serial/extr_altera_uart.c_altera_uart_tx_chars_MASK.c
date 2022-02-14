
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t head; size_t tail; scalar_t__* buf; } ;
struct altera_uart {int imr; struct uart_port port; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct altera_uart*) ;
 int FUNC_2 (struct uart_port*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 int FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct altera_uart *VAR_6)
{
 struct uart_port *VAR_7 = &VAR_6->port;
 struct circ_buf *VAR_8 = &VAR_7->state->xmit;

 if (VAR_7->x_char) {

  FUNC_2(VAR_7, VAR_7->x_char, VAR_3);
  VAR_7->x_char = 0;
  VAR_7->icount.tx++;
  return;
 }

 while (FUNC_0(VAR_7, VAR_1) &
        VAR_2) {
  if (VAR_8->head == VAR_8->tail)
   break;
  FUNC_2(VAR_7, VAR_8->buf[VAR_8->tail],
         VAR_3);
  VAR_8->tail = (VAR_8->tail + 1) & (VAR_4 - 1);
  VAR_7->icount.tx++;
 }

 if (FUNC_3(VAR_8) < VAR_5)
  FUNC_4(VAR_7);

 if (VAR_8->head == VAR_8->tail) {
  VAR_6->imr &= ~VAR_0;
  FUNC_1(VAR_6);
 }
}
