
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsl_dspi_dma {int curr_xfer_len; int chan_rx; int chan_tx; int cmd_rx_complete; int cmd_tx_complete; TYPE_2__* rx_desc; int rx_dma_phys; TYPE_2__* tx_desc; int tx_dma_phys; int * tx_dma_buf; } ;
struct fsl_dspi {struct fsl_dspi_dma* dma; int ctlr; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct fsl_dspi* callback_param; int callback; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ,int,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fsl_dspi*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct fsl_dspi *VAR_11)
{
 struct device *VAR_12 = &VAR_11->pdev->dev;
 struct fsl_dspi_dma *VAR_13 = VAR_11->dma;
 int VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_13->curr_xfer_len; VAR_15++)
  VAR_11->dma->tx_dma_buf[VAR_15] = FUNC_6(VAR_11);

 VAR_13->tx_desc = FUNC_3(VAR_13->chan_tx,
     VAR_13->tx_dma_phys,
     VAR_13->curr_xfer_len *
     VAR_5,
     VAR_3,
     VAR_4 | VAR_1);
 if (!VAR_13->tx_desc) {
  FUNC_0(VAR_12, "Not able to get desc for DMA xfer\n");
  return -VAR_7;
 }

 VAR_13->tx_desc->callback = VAR_10;
 VAR_13->tx_desc->callback_param = VAR_11;
 if (FUNC_2(FUNC_4(VAR_13->tx_desc))) {
  FUNC_0(VAR_12, "DMA submit failed\n");
  return -VAR_6;
 }

 VAR_13->rx_desc = FUNC_3(VAR_13->chan_rx,
     VAR_13->rx_dma_phys,
     VAR_13->curr_xfer_len *
     VAR_5,
     VAR_2,
     VAR_4 | VAR_1);
 if (!VAR_13->rx_desc) {
  FUNC_0(VAR_12, "Not able to get desc for DMA xfer\n");
  return -VAR_7;
 }

 VAR_13->rx_desc->callback = VAR_9;
 VAR_13->rx_desc->callback_param = VAR_11;
 if (FUNC_2(FUNC_4(VAR_13->rx_desc))) {
  FUNC_0(VAR_12, "DMA submit failed\n");
  return -VAR_6;
 }

 FUNC_7(&VAR_11->dma->cmd_rx_complete);
 FUNC_7(&VAR_11->dma->cmd_tx_complete);

 FUNC_1(VAR_13->chan_rx);
 FUNC_1(VAR_13->chan_tx);

 if (FUNC_8(VAR_11->ctlr)) {
  FUNC_9(&VAR_11->dma->cmd_rx_complete);
  return 0;
 }

 VAR_14 = FUNC_10(&VAR_11->dma->cmd_tx_complete,
      VAR_0);
 if (VAR_14 == 0) {
  FUNC_0(VAR_12, "DMA tx timeout\n");
  FUNC_5(VAR_13->chan_tx);
  FUNC_5(VAR_13->chan_rx);
  return -VAR_8;
 }

 VAR_14 = FUNC_10(&VAR_11->dma->cmd_rx_complete,
      VAR_0);
 if (VAR_14 == 0) {
  FUNC_0(VAR_12, "DMA rx timeout\n");
  FUNC_5(VAR_13->chan_tx);
  FUNC_5(VAR_13->chan_rx);
  return -VAR_8;
 }

 return 0;
}
