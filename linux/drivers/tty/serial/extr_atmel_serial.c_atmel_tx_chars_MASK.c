
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct atmel_uart_port {int tx_done_mask; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,scalar_t__) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 struct atmel_uart_port* FUNC_3 (struct uart_port*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_4)
{
 struct circ_buf *VAR_5 = &VAR_4->state->xmit;
 struct atmel_uart_port *VAR_6 = FUNC_3(VAR_4);

 if (VAR_4->x_char &&
     (FUNC_0(VAR_4, VAR_0) & VAR_6->tx_done_mask)) {
  FUNC_1(VAR_4, VAR_4->x_char);
  VAR_4->icount.tx++;
  VAR_4->x_char = 0;
 }
 if (FUNC_5(VAR_5) || FUNC_6(VAR_4))
  return;

 while (FUNC_0(VAR_4, VAR_0) &
        VAR_6->tx_done_mask) {
  FUNC_1(VAR_4, VAR_5->buf[VAR_5->tail]);
  VAR_5->tail = (VAR_5->tail + 1) & (VAR_2 - 1);
  VAR_4->icount.tx++;
  if (FUNC_5(VAR_5))
   break;
 }

 if (FUNC_4(VAR_5) < VAR_3)
  FUNC_7(VAR_4);

 if (!FUNC_5(VAR_5))

  FUNC_2(VAR_4, VAR_1,
      VAR_6->tx_done_mask);
}
