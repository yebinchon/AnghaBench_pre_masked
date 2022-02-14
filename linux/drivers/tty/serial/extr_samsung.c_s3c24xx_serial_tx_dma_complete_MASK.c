
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int lock; TYPE_2__ icount; int dev; TYPE_1__* state; } ;
struct s3c24xx_uart_port {scalar_t__ tx_in_progress; struct uart_port port; struct s3c24xx_uart_dma* dma; } ;
struct s3c24xx_uart_dma {int tx_bytes_requested; int tx_size; int tx_transfer_addr; int tx_desc; int tx_cookie; int tx_chan; } ;
struct dma_tx_state {int residue; } ;
struct circ_buf {int tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,struct dma_tx_state*) ;
 int FUNC_3 (struct s3c24xx_uart_port*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 int FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(void *VAR_3)
{
 struct s3c24xx_uart_port *VAR_4 = VAR_3;
 struct uart_port *VAR_5 = &VAR_4->port;
 struct circ_buf *VAR_6 = &VAR_5->state->xmit;
 struct s3c24xx_uart_dma *VAR_7 = VAR_4->dma;
 struct dma_tx_state VAR_8;
 unsigned long VAR_9;
 int VAR_10;


 FUNC_2(VAR_7->tx_chan, VAR_7->tx_cookie, &VAR_8);
 VAR_10 = VAR_7->tx_bytes_requested - VAR_8.residue;
 FUNC_0(VAR_7->tx_desc);

 FUNC_1(VAR_4->port.dev, VAR_7->tx_transfer_addr,
    VAR_7->tx_size, VAR_0);

 FUNC_4(&VAR_5->lock, VAR_9);

 VAR_6->tail = (VAR_6->tail + VAR_10) & (VAR_1 - 1);
 VAR_5->icount.tx += VAR_10;
 VAR_4->tx_in_progress = 0;

 if (FUNC_6(VAR_6) < VAR_2)
  FUNC_7(VAR_5);

 FUNC_3(VAR_4);
 FUNC_5(&VAR_5->lock, VAR_9);
}
