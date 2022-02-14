
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_6__ {int tx; } ;
struct TYPE_7__ {int fifosize; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct ar933x_uart_port {TYPE_3__ port; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ar933x_uart_port*,scalar_t__) ;
 unsigned int FUNC_1 (struct ar933x_uart_port*,int ) ;
 int FUNC_2 (struct ar933x_uart_port*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(struct ar933x_uart_port *VAR_4)
{
 struct circ_buf *VAR_5 = &VAR_4->port.state->xmit;
 int VAR_6;

 if (FUNC_5(&VAR_4->port))
  return;

 VAR_6 = VAR_4->port.fifosize;
 do {
  unsigned int VAR_7;

  VAR_7 = FUNC_1(VAR_4, VAR_0);
  if ((VAR_7 & VAR_1) == 0)
   break;

  if (VAR_4->port.x_char) {
   FUNC_0(VAR_4, VAR_4->port.x_char);
   VAR_4->port.icount.tx++;
   VAR_4->port.x_char = 0;
   continue;
  }

  if (FUNC_4(VAR_5))
   break;

  FUNC_0(VAR_4, VAR_5->buf[VAR_5->tail]);

  VAR_5->tail = (VAR_5->tail + 1) & (VAR_2 - 1);
  VAR_4->port.icount.tx++;
 } while (--VAR_6 > 0);

 if (FUNC_3(VAR_5) < VAR_3)
  FUNC_6(&VAR_4->port);

 if (!FUNC_4(VAR_5))
  FUNC_2(VAR_4);
}
