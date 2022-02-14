
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct uart_8250_port {int tx_loadsz; int capabilities; struct uart_port port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_8250_port*,int ) ;
 int FUNC_3 (struct uart_8250_port*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*) ;

void FUNC_8(struct uart_8250_port *VAR_9)
{
 struct uart_port *VAR_10 = &VAR_9->port;
 struct circ_buf *VAR_11 = &VAR_10->state->xmit;
 int VAR_12;

 if (VAR_10->x_char) {
  FUNC_3(VAR_9, VAR_6, VAR_10->x_char);
  VAR_10->icount.tx++;
  VAR_10->x_char = 0;
  return;
 }
 if (FUNC_6(VAR_10)) {
  FUNC_1(VAR_10);
  return;
 }
 if (FUNC_5(VAR_11)) {
  FUNC_0(VAR_9);
  return;
 }

 VAR_12 = VAR_9->tx_loadsz;
 do {
  FUNC_3(VAR_9, VAR_6, VAR_11->buf[VAR_11->tail]);
  VAR_11->tail = (VAR_11->tail + 1) & (VAR_7 - 1);
  VAR_10->icount.tx++;
  if (FUNC_5(VAR_11))
   break;
  if ((VAR_9->capabilities & VAR_1) &&
      (FUNC_2(VAR_9, VAR_4) & VAR_0) != VAR_0)
   break;

  if ((VAR_9->capabilities & VAR_2) &&
      !(FUNC_2(VAR_9, VAR_4) & VAR_5))
   break;
 } while (--VAR_12 > 0);

 if (FUNC_4(VAR_11) < VAR_8)
  FUNC_7(VAR_10);






 if (FUNC_5(VAR_11) && !(VAR_9->capabilities & VAR_3))
  FUNC_0(VAR_9);
}
