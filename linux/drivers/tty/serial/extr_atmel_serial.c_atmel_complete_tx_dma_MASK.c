
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int lock; TYPE_2__ icount; TYPE_1__* state; } ;
struct dma_chan {int dummy; } ;
struct circ_buf {int tail; } ;
struct atmel_uart_port {int hd_start_rx; int tx_done_mask; int tasklet_tx; int lock_tx; int * desc_tx; int cookie_tx; scalar_t__ tx_len; struct dma_chan* chan_tx; struct uart_port uart; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct atmel_uart_port*,int *) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,int ,int ) ;
 int FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (struct circ_buf*) ;
 int FUNC_10 (struct circ_buf*) ;
 int FUNC_11 (struct uart_port*) ;

__attribute__((used)) static void FUNC_12(void *VAR_4)
{
 struct atmel_uart_port *VAR_5 = VAR_4;
 struct uart_port *VAR_6 = &VAR_5->uart;
 struct circ_buf *VAR_7 = &VAR_6->state->xmit;
 struct dma_chan *VAR_8 = VAR_5->chan_tx;
 unsigned long VAR_9;

 FUNC_6(&VAR_6->lock, VAR_9);

 if (VAR_8)
  FUNC_4(VAR_8);
 VAR_7->tail += VAR_5->tx_len;
 VAR_7->tail &= VAR_2 - 1;

 VAR_6->icount.tx += VAR_5->tx_len;

 FUNC_5(&VAR_5->lock_tx);
 FUNC_0(VAR_5->desc_tx);
 VAR_5->cookie_tx = -VAR_1;
 VAR_5->desc_tx = ((void*)0);
 FUNC_7(&VAR_5->lock_tx);

 if (FUNC_9(VAR_7) < VAR_3)
  FUNC_11(VAR_6);






 if (!FUNC_10(VAR_7))
  FUNC_1(VAR_5, &VAR_5->tasklet_tx);
 else if (FUNC_2(VAR_6)) {




  VAR_5->hd_start_rx = 1;
  FUNC_3(VAR_6, VAR_0,
      VAR_5->tx_done_mask);
 }

 FUNC_8(&VAR_6->lock, VAR_9);
}
