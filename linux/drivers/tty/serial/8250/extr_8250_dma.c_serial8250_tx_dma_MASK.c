
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* state; } ;
struct uart_8250_port {TYPE_3__ port; struct uart_8250_dma* dma; } ;
struct uart_8250_dma {int tx_running; int tx_err; TYPE_4__* txchan; scalar_t__ tx_addr; int tx_cookie; int tx_size; } ;
struct dma_async_tx_descriptor {struct uart_8250_port* callback_param; int callback; } ;
struct circ_buf {scalar_t__ tail; int head; } ;
struct TYPE_9__ {TYPE_2__* device; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (TYPE_4__*,scalar_t__,int ,int ,int) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (struct uart_8250_port*) ;
 int FUNC_6 (struct uart_8250_port*) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;

int FUNC_9(struct uart_8250_port *VAR_7)
{
 struct uart_8250_dma *VAR_8 = VAR_7->dma;
 struct circ_buf *VAR_9 = &VAR_7->port.state->xmit;
 struct dma_async_tx_descriptor *VAR_10;
 int VAR_11;

 if (VAR_8->tx_running)
  return 0;

 if (FUNC_8(&VAR_7->port) || FUNC_7(VAR_9)) {

  FUNC_6(VAR_7);
  return 0;
 }

 VAR_8->tx_size = FUNC_0(VAR_9->head, VAR_9->tail, VAR_5);

 VAR_10 = FUNC_3(VAR_8->txchan,
        VAR_8->tx_addr + VAR_9->tail,
        VAR_8->tx_size, VAR_1,
        VAR_2 | VAR_0);
 if (!VAR_10) {
  VAR_11 = -VAR_4;
  goto err;
 }

 VAR_8->tx_running = 1;
 VAR_10->callback = VAR_6;
 VAR_10->callback_param = VAR_7;

 VAR_8->tx_cookie = FUNC_4(VAR_10);

 FUNC_2(VAR_8->txchan->device->dev, VAR_8->tx_addr,
       VAR_5, VAR_3);

 FUNC_1(VAR_8->txchan);
 if (VAR_8->tx_err) {
  VAR_8->tx_err = 0;
  FUNC_5(VAR_7);
 }
 return 0;
err:
 VAR_8->tx_err = 1;
 return VAR_11;
}
