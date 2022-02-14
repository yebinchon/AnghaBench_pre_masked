
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_controller {TYPE_2__* dma_tx; TYPE_2__* dma_rx; } ;
struct sh_msiof_spi_priv {scalar_t__ tx_dma_page; scalar_t__ rx_dma_page; int tx_dma_addr; int rx_dma_addr; struct spi_controller* ctlr; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(struct sh_msiof_spi_priv *VAR_3)
{
 struct spi_controller *VAR_4 = VAR_3->ctlr;

 if (!VAR_4->dma_tx)
  return;

 FUNC_1(VAR_4->dma_rx->device->dev, VAR_3->rx_dma_addr, VAR_2,
    VAR_0);
 FUNC_1(VAR_4->dma_tx->device->dev, VAR_3->tx_dma_addr, VAR_2,
    VAR_1);
 FUNC_2((unsigned long)VAR_3->rx_dma_page);
 FUNC_2((unsigned long)VAR_3->tx_dma_page);
 FUNC_0(VAR_4->dma_rx);
 FUNC_0(VAR_4->dma_tx);
}
