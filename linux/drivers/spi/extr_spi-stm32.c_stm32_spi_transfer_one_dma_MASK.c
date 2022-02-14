
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stm32_spi {scalar_t__ cur_comm; int cur_usedma; TYPE_6__* cfg; int dev; int lock; scalar_t__ dma_rx; scalar_t__ dma_tx; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct TYPE_8__ {int nents; int sgl; } ;
struct TYPE_7__ {int nents; int sgl; } ;
struct spi_transfer {TYPE_2__ tx_sg; TYPE_1__ rx_sg; } ;
struct dma_slave_config {int direction; } ;
struct dma_async_tx_descriptor {struct stm32_spi* callback_param; int callback; } ;
struct TYPE_12__ {int (* transfer_one_irq ) (struct stm32_spi*) ;TYPE_5__* regs; int (* transfer_one_dma_start ) (struct stm32_spi*) ;int dma_tx_cb; int dma_rx_cb; } ;
struct TYPE_10__ {int mask; int reg; } ;
struct TYPE_9__ {int mask; int reg; } ;
struct TYPE_11__ {TYPE_4__ dma_rx_en; TYPE_3__ dma_tx_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (scalar_t__,int ,int ,int ,int ) ;
 int FUNC_5 (scalar_t__,struct dma_slave_config*) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct stm32_spi*,int ,int ) ;
 int FUNC_11 (struct stm32_spi*,struct dma_slave_config*,int ) ;
 int FUNC_12 (struct stm32_spi*,int ,int ) ;
 int FUNC_13 (struct stm32_spi*) ;
 int FUNC_14 (struct stm32_spi*) ;

__attribute__((used)) static int FUNC_15(struct stm32_spi *VAR_6,
          struct spi_transfer *VAR_7)
{
 struct dma_slave_config VAR_8, VAR_9;
 struct dma_async_tx_descriptor *VAR_10, *VAR_11;
 unsigned long VAR_12;

 FUNC_8(&VAR_6->lock, VAR_12);

 VAR_11 = ((void*)0);
 if (VAR_6->rx_buf && VAR_6->dma_rx) {
  FUNC_11(VAR_6, &VAR_9, VAR_0);
  FUNC_5(VAR_6->dma_rx, &VAR_9);


  FUNC_12(VAR_6, VAR_6->cfg->regs->dma_rx_en.reg,
       VAR_6->cfg->regs->dma_rx_en.mask);

  VAR_11 = FUNC_4(
     VAR_6->dma_rx, VAR_7->rx_sg.sgl,
     VAR_7->rx_sg.nents,
     VAR_9.direction,
     VAR_2);
 }

 VAR_10 = ((void*)0);
 if (VAR_6->tx_buf && VAR_6->dma_tx) {
  FUNC_11(VAR_6, &VAR_8, VAR_1);
  FUNC_5(VAR_6->dma_tx, &VAR_8);

  VAR_10 = FUNC_4(
     VAR_6->dma_tx, VAR_7->tx_sg.sgl,
     VAR_7->tx_sg.nents,
     VAR_8.direction,
     VAR_2);
 }

 if ((VAR_6->tx_buf && VAR_6->dma_tx && !VAR_10) ||
     (VAR_6->rx_buf && VAR_6->dma_rx && !VAR_11))
  goto dma_desc_error;

 if (VAR_6->cur_comm == VAR_4 && (!VAR_10 || !VAR_11))
  goto dma_desc_error;

 if (VAR_11) {
  VAR_11->callback = VAR_6->cfg->dma_rx_cb;
  VAR_11->callback_param = VAR_6;

  if (FUNC_3(FUNC_6(VAR_11))) {
   FUNC_0(VAR_6->dev, "Rx DMA submit failed\n");
   goto dma_desc_error;
  }

  FUNC_2(VAR_6->dma_rx);
 }

 if (VAR_10) {
  if (VAR_6->cur_comm == VAR_5 ||
      VAR_6->cur_comm == VAR_3) {
   VAR_10->callback = VAR_6->cfg->dma_tx_cb;
   VAR_10->callback_param = VAR_6;
  }

  if (FUNC_3(FUNC_6(VAR_10))) {
   FUNC_0(VAR_6->dev, "Tx DMA submit failed\n");
   goto dma_submit_error;
  }

  FUNC_2(VAR_6->dma_tx);


  FUNC_12(VAR_6, VAR_6->cfg->regs->dma_tx_en.reg,
       VAR_6->cfg->regs->dma_tx_en.mask);
 }

 VAR_6->cfg->transfer_one_dma_start(VAR_6);

 FUNC_9(&VAR_6->lock, VAR_12);

 return 1;

dma_submit_error:
 if (VAR_6->dma_rx)
  FUNC_7(VAR_6->dma_rx);

dma_desc_error:
 FUNC_10(VAR_6, VAR_6->cfg->regs->dma_rx_en.reg,
      VAR_6->cfg->regs->dma_rx_en.mask);

 FUNC_9(&VAR_6->lock, VAR_12);

 FUNC_1(VAR_6->dev, "DMA issue: fall back to irq transfer\n");

 VAR_6->cur_usedma = 0;
 return VAR_6->cfg->transfer_one_irq(VAR_6);
}
