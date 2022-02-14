
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tx; } ;
struct uart_port {TYPE_3__ icount; TYPE_2__* state; } ;
struct sirfsoc_uart_port {TYPE_1__* uart_reg; struct uart_port port; } ;
struct sirfsoc_register {int sirfsoc_tx_fifo_data; int sirfsoc_tx_fifo_status; } ;
struct sirfsoc_fifo_status {int (* ff_full ) (struct uart_port*) ;} ;
struct circ_buf {size_t tail; int * buf; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;
struct TYPE_4__ {struct sirfsoc_fifo_status fifo_status; struct sirfsoc_register uart_reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 int FUNC_3 (struct circ_buf*) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*,int ,int ) ;

__attribute__((used)) static unsigned int
FUNC_6(struct sirfsoc_uart_port *VAR_2, int VAR_3)
{
 struct uart_port *VAR_4 = &VAR_2->port;
 struct sirfsoc_register *VAR_5 = &VAR_2->uart_reg->uart_reg;
 struct sirfsoc_fifo_status *VAR_6 = &VAR_2->uart_reg->fifo_status;
 struct circ_buf *VAR_7 = &VAR_4->state->xmit;
 unsigned int VAR_8 = 0;
 while (!FUNC_3(VAR_7) &&
  !(FUNC_0(VAR_4, VAR_5->sirfsoc_tx_fifo_status) &
     VAR_6->ff_full(VAR_4)) &&
  VAR_3--) {
  FUNC_5(VAR_4, VAR_5->sirfsoc_tx_fifo_data,
    VAR_7->buf[VAR_7->tail]);
  VAR_7->tail = (VAR_7->tail + 1) & (VAR_0 - 1);
  VAR_4->icount.tx++;
  VAR_8++;
 }
 if (FUNC_2(VAR_7) < VAR_1)
  FUNC_4(VAR_4);
 return VAR_8;
}
