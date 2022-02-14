
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {scalar_t__ x_char; TYPE_2__ icount; TYPE_1__* state; } ;
struct efm32_uart_port {struct uart_port port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct efm32_uart_port*,int ) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct efm32_uart_port*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct efm32_uart_port *VAR_6)
{
 struct uart_port *VAR_7 = &VAR_6->port;
 struct circ_buf *VAR_8 = &VAR_7->state->xmit;

 while (FUNC_0(VAR_6, VAR_1) &
   VAR_2) {
  if (VAR_7->x_char) {
   VAR_7->icount.tx++;
   FUNC_2(VAR_6, VAR_7->x_char,
     VAR_4);
   VAR_7->x_char = 0;
   continue;
  }
  if (!FUNC_4(VAR_8) && !FUNC_5(VAR_7)) {
   VAR_7->icount.tx++;
   FUNC_2(VAR_6, VAR_8->buf[VAR_8->tail],
     VAR_4);
   VAR_8->tail = (VAR_8->tail + 1) & (VAR_0 - 1);
  } else
   break;
 }

 if (FUNC_3(VAR_8) < VAR_5)
  FUNC_6(VAR_7);

 if (!VAR_7->x_char && FUNC_4(VAR_8) &&
   FUNC_0(VAR_6, VAR_1) &
    VAR_3)
  FUNC_1(VAR_7);
}
