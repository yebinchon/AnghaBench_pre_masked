
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t rx; } ;
struct uart_port {int lock; int dev; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct dma_tx_state {scalar_t__ residue; } ;
struct dma_chan {int dummy; } ;
struct circ_buf {scalar_t__ head; scalar_t__ tail; scalar_t__ buf; } ;
struct atmel_uart_port {int sg_rx; int tasklet_rx; int cookie_rx; struct dma_chan* chan_rx; struct circ_buf rx_ring; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct atmel_uart_port*,int *) ;
 int FUNC_2 (struct uart_port*,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *,int,int ) ;
 int FUNC_5 (int ,int *,int,int ) ;
 int FUNC_6 (struct dma_chan*,int ,struct dma_tx_state*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct atmel_uart_port* FUNC_10 (struct uart_port*) ;
 int FUNC_11 (struct tty_port*) ;
 int FUNC_12 (struct tty_port*,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_6)
{
 struct atmel_uart_port *VAR_7 = FUNC_10(VAR_6);
 struct tty_port *VAR_8 = &VAR_6->state->port;
 struct circ_buf *VAR_9 = &VAR_7->rx_ring;
 struct dma_chan *VAR_10 = VAR_7->chan_rx;
 struct dma_tx_state VAR_11;
 enum dma_status VAR_12;
 size_t VAR_13;



 FUNC_2(VAR_6, VAR_0, VAR_2);
 VAR_12 = FUNC_6(VAR_10,
    VAR_7->cookie_rx,
    &VAR_11);

 if (VAR_12 == VAR_4) {
  FUNC_3(VAR_6->dev, "Get residue error, restart tasklet\n");
  FUNC_2(VAR_6, VAR_1, VAR_3);
  FUNC_1(VAR_7, &VAR_7->tasklet_rx);
  return;
 }


 FUNC_4(VAR_6->dev,
       &VAR_7->sg_rx,
       1,
       VAR_5);
 VAR_9->head = FUNC_7(&VAR_7->sg_rx) - VAR_11.residue;
 FUNC_0(VAR_9->head > FUNC_7(&VAR_7->sg_rx));
 if (VAR_9->head < VAR_9->tail) {
  VAR_13 = FUNC_7(&VAR_7->sg_rx) - VAR_9->tail;

  FUNC_12(VAR_8, VAR_9->buf + VAR_9->tail, VAR_13);
  VAR_9->tail = 0;
  VAR_6->icount.rx += VAR_13;
 }


 if (VAR_9->tail < VAR_9->head) {
  VAR_13 = VAR_9->head - VAR_9->tail;

  FUNC_12(VAR_8, VAR_9->buf + VAR_9->tail, VAR_13);

  if (VAR_9->head >= FUNC_7(&VAR_7->sg_rx))
   VAR_9->head = 0;
  VAR_9->tail = VAR_9->head;
  VAR_6->icount.rx += VAR_13;
 }


 FUNC_5(VAR_6->dev,
          &VAR_7->sg_rx,
          1,
          VAR_5);





 FUNC_9(&VAR_6->lock);
 FUNC_11(VAR_8);
 FUNC_8(&VAR_6->lock);

 FUNC_2(VAR_6, VAR_1, VAR_3);
}
