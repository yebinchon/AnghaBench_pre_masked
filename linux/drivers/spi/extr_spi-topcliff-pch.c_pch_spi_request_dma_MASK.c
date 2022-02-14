
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct pch_dma_slave {int chan_id; unsigned int width; scalar_t__ rx_reg; int * dma_dev; scalar_t__ tx_reg; } ;
struct pch_spi_dma_ctrl {struct dma_chan* chan_rx; struct dma_chan* chan_tx; struct pch_dma_slave param_rx; struct pch_dma_slave param_tx; } ;
struct pch_spi_data {int ch; scalar_t__ use_dma; TYPE_3__* master; scalar_t__ io_base_addr; TYPE_2__* board_dat; struct pch_spi_dma_ctrl dma; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int devfn; int bus; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dma_chan*) ;
 struct dma_chan* FUNC_6 (int ,int ,struct pch_dma_slave*) ;
 int VAR_5 ;
 struct pci_dev* FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct pch_spi_data *VAR_6, int VAR_7)
{
 dma_cap_mask_t VAR_8;
 struct dma_chan *VAR_9;
 struct pci_dev *VAR_10;
 struct pch_dma_slave *VAR_11;
 struct pch_spi_dma_ctrl *VAR_12;
 unsigned int VAR_13;

 if (VAR_7 == 8)
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_2;

 VAR_12 = &VAR_6->dma;
 FUNC_4(VAR_8);
 FUNC_3(VAR_0, VAR_8);


 VAR_10 = FUNC_7(VAR_6->board_dat->pdev->bus,
   FUNC_0(FUNC_1(VAR_6->board_dat->pdev->devfn), 0));


 VAR_11 = &VAR_12->param_tx;
 VAR_11->dma_dev = &VAR_10->dev;
 VAR_11->chan_id = VAR_6->ch * 2; ;
 VAR_11->tx_reg = VAR_6->io_base_addr + VAR_4;
 VAR_11->width = VAR_13;
 VAR_9 = FUNC_6(VAR_8, VAR_5, VAR_11);
 if (!VAR_9) {
  FUNC_2(&VAR_6->master->dev,
   "ERROR: dma_request_channel FAILS(Tx)\n");
  VAR_6->use_dma = 0;
  return;
 }
 VAR_12->chan_tx = VAR_9;


 VAR_11 = &VAR_12->param_rx;
 VAR_11->dma_dev = &VAR_10->dev;
 VAR_11->chan_id = VAR_6->ch * 2 + 1; ;
 VAR_11->rx_reg = VAR_6->io_base_addr + VAR_3;
 VAR_11->width = VAR_13;
 VAR_9 = FUNC_6(VAR_8, VAR_5, VAR_11);
 if (!VAR_9) {
  FUNC_2(&VAR_6->master->dev,
   "ERROR: dma_request_channel FAILS(Rx)\n");
  FUNC_5(VAR_12->chan_tx);
  VAR_12->chan_tx = ((void*)0);
  VAR_6->use_dma = 0;
  return;
 }
 VAR_12->chan_rx = VAR_9;
}
