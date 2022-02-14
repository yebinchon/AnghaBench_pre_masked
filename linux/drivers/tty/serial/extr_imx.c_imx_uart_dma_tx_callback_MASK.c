
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int tx; } ;
struct TYPE_9__ {int lock; TYPE_3__ rs485; int dev; TYPE_2__ icount; TYPE_1__* state; } ;
struct imx_port {int tx_bytes; TYPE_4__ port; scalar_t__ dma_is_txing; int dma_tx_nents; struct scatterlist* tx_sgl; } ;
struct circ_buf {int tail; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_2 (struct imx_port*) ;
 int FUNC_3 (struct imx_port*,int ) ;
 int FUNC_4 (struct imx_port*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 int FUNC_8 (struct circ_buf*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_11(void *VAR_8)
{
 struct imx_port *VAR_9 = VAR_8;
 struct scatterlist *VAR_10 = &VAR_9->tx_sgl[0];
 struct circ_buf *VAR_11 = &VAR_9->port.state->xmit;
 unsigned long VAR_12;
 u32 VAR_13;

 FUNC_5(&VAR_9->port.lock, VAR_12);

 FUNC_1(VAR_9->port.dev, VAR_10, VAR_9->dma_tx_nents, VAR_0);

 VAR_13 = FUNC_3(VAR_9, VAR_3);
 VAR_13 &= ~VAR_4;
 FUNC_4(VAR_9, VAR_13, VAR_3);


 VAR_11->tail = (VAR_11->tail + VAR_9->tx_bytes) & (VAR_2 - 1);
 VAR_9->port.icount.tx += VAR_9->tx_bytes;

 FUNC_0(VAR_9->port.dev, "we finish the TX DMA.\n");

 VAR_9->dma_is_txing = 0;

 if (FUNC_7(VAR_11) < VAR_7)
  FUNC_10(&VAR_9->port);

 if (!FUNC_8(VAR_11) && !FUNC_9(&VAR_9->port))
  FUNC_2(VAR_9);
 else if (VAR_9->port.rs485.flags & VAR_1) {
  u32 VAR_14 = FUNC_3(VAR_9, VAR_5);
  VAR_14 |= VAR_6;
  FUNC_4(VAR_9, VAR_14, VAR_5);
 }

 FUNC_6(&VAR_9->port.lock, VAR_12);
}
