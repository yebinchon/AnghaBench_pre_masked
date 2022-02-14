
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_controller {TYPE_2__* dma_tx; TYPE_2__* dma_rx; } ;
struct sh_msiof_spi_priv {void* tx_dma_page; void* rx_dma_page; void* tx_dma_addr; void* rx_dma_addr; struct spi_controller* ctlr; struct sh_msiof_spi_info* info; struct platform_device* pdev; } ;
struct sh_msiof_spi_info {unsigned int dma_tx_id; unsigned int dma_rx_id; } ;
struct resource {scalar_t__ start; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,void*,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,void*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct device*,void*,int ,int ) ;
 int FUNC_6 (unsigned long) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int) ;
 void* FUNC_8 (struct device*,int ,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct sh_msiof_spi_priv *VAR_11)
{
 struct platform_device *VAR_12 = VAR_11->pdev;
 struct device *VAR_13 = &VAR_12->dev;
 const struct sh_msiof_spi_info *VAR_14 = VAR_11->info;
 unsigned int VAR_15, VAR_16;
 const struct resource *VAR_17;
 struct spi_controller *VAR_18;
 struct device *VAR_19, *VAR_20;

 if (VAR_13->of_node) {

  VAR_15 = 0;
  VAR_16 = 0;
 } else if (VAR_14 && VAR_14->dma_tx_id && VAR_14->dma_rx_id) {
  VAR_15 = VAR_14->dma_tx_id;
  VAR_16 = VAR_14->dma_rx_id;
 } else {

  return 0;
 }


 VAR_17 = FUNC_7(VAR_12, VAR_7, 1);
 if (!VAR_17)
  VAR_17 = FUNC_7(VAR_12, VAR_7, 0);

 VAR_18 = VAR_11->ctlr;
 VAR_18->dma_tx = FUNC_8(VAR_13, VAR_2,
       VAR_15, VAR_17->start + VAR_10);
 if (!VAR_18->dma_tx)
  return -VAR_4;

 VAR_18->dma_rx = FUNC_8(VAR_13, VAR_0,
       VAR_16, VAR_17->start + VAR_9);
 if (!VAR_18->dma_rx)
  goto free_tx_chan;

 VAR_11->tx_dma_page = (void *)FUNC_0(VAR_6 | VAR_5);
 if (!VAR_11->tx_dma_page)
  goto free_rx_chan;

 VAR_11->rx_dma_page = (void *)FUNC_0(VAR_6 | VAR_5);
 if (!VAR_11->rx_dma_page)
  goto free_tx_page;

 VAR_19 = VAR_18->dma_tx->device->dev;
 VAR_11->tx_dma_addr = FUNC_2(VAR_19, VAR_11->tx_dma_page, VAR_8,
     VAR_3);
 if (FUNC_3(VAR_19, VAR_11->tx_dma_addr))
  goto free_rx_page;

 VAR_20 = VAR_18->dma_rx->device->dev;
 VAR_11->rx_dma_addr = FUNC_2(VAR_20, VAR_11->rx_dma_page, VAR_8,
     VAR_1);
 if (FUNC_3(VAR_20, VAR_11->rx_dma_addr))
  goto unmap_tx_page;

 FUNC_1(VAR_13, "DMA available");
 return 0;

unmap_tx_page:
 FUNC_5(VAR_19, VAR_11->tx_dma_addr, VAR_8, VAR_3);
free_rx_page:
 FUNC_6((unsigned long)VAR_11->rx_dma_page);
free_tx_page:
 FUNC_6((unsigned long)VAR_11->tx_dma_page);
free_rx_chan:
 FUNC_4(VAR_18->dma_rx);
free_tx_chan:
 FUNC_4(VAR_18->dma_tx);
 VAR_18->dma_tx = ((void*)0);
 return -VAR_4;
}
