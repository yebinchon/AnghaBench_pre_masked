
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_6__ {int tx; } ;
struct TYPE_7__ {int lock; TYPE_2__ icount; int dev; TYPE_1__* state; } ;
struct lpuart_port {int dma_tx_bytes; int dma_tx_in_progress; TYPE_3__ port; int dma_wait; int dma_tx_nents; struct scatterlist* tx_sgl; } ;
struct circ_buf {int tail; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_1 (struct lpuart_port*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_3)
{
 struct lpuart_port *VAR_4 = VAR_3;
 struct scatterlist *VAR_5 = &VAR_4->tx_sgl[0];
 struct circ_buf *VAR_6 = &VAR_4->port.state->xmit;
 unsigned long VAR_7;

 FUNC_3(&VAR_4->port.lock, VAR_7);

 FUNC_0(VAR_4->port.dev, VAR_5, VAR_4->dma_tx_nents, VAR_0);

 VAR_6->tail = (VAR_6->tail + VAR_4->dma_tx_bytes) & (VAR_1 - 1);

 VAR_4->port.icount.tx += VAR_4->dma_tx_bytes;
 VAR_4->dma_tx_in_progress = 0;
 FUNC_4(&VAR_4->port.lock, VAR_7);

 if (FUNC_5(VAR_6) < VAR_2)
  FUNC_6(&VAR_4->port);

 if (FUNC_7(&VAR_4->dma_wait)) {
  FUNC_8(&VAR_4->dma_wait);
  return;
 }

 FUNC_3(&VAR_4->port.lock, VAR_7);

 if (!FUNC_2(&VAR_4->port))
  FUNC_1(VAR_4);

 FUNC_4(&VAR_4->port.lock, VAR_7);
}
