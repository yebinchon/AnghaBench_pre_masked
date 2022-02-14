
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int lock; int dev; TYPE_2__ icount; TYPE_1__* state; } ;
struct sirfsoc_uart_port {int transfer_size; int tx_dma_state; scalar_t__ tx_dma_addr; struct uart_port port; } ;
struct circ_buf {int tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct sirfsoc_uart_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 int FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(void *VAR_4)
{
 struct sirfsoc_uart_port *VAR_5 = (struct sirfsoc_uart_port *)VAR_4;
 struct uart_port *VAR_6 = &VAR_5->port;
 struct circ_buf *VAR_7 = &VAR_6->state->xmit;
 unsigned long VAR_8;

 FUNC_2(&VAR_6->lock, VAR_8);
 VAR_7->tail = (VAR_7->tail + VAR_5->transfer_size) &
    (VAR_2 - 1);
 VAR_6->icount.tx += VAR_5->transfer_size;
 if (FUNC_4(VAR_7) < VAR_3)
  FUNC_5(VAR_6);
 if (VAR_5->tx_dma_addr)
  FUNC_0(VAR_6->dev, VAR_5->tx_dma_addr,
    VAR_5->transfer_size, VAR_0);
 VAR_5->tx_dma_state = VAR_1;
 FUNC_1(VAR_5);
 FUNC_3(&VAR_6->lock, VAR_8);
}
