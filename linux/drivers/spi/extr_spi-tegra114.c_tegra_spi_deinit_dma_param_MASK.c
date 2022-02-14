
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_spi_data {int dma_buf_size; int dev; struct dma_chan* tx_dma_chan; int * tx_dma_buf; int tx_dma_phys; int * rx_dma_buf; struct dma_chan* rx_dma_chan; int rx_dma_phys; } ;
struct dma_chan {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_2(struct tegra_spi_data *VAR_0,
 bool VAR_1)
{
 u32 *VAR_2;
 dma_addr_t VAR_3;
 struct dma_chan *VAR_4;

 if (VAR_1) {
  VAR_2 = VAR_0->rx_dma_buf;
  VAR_4 = VAR_0->rx_dma_chan;
  VAR_3 = VAR_0->rx_dma_phys;
  VAR_0->rx_dma_chan = ((void*)0);
  VAR_0->rx_dma_buf = ((void*)0);
 } else {
  VAR_2 = VAR_0->tx_dma_buf;
  VAR_4 = VAR_0->tx_dma_chan;
  VAR_3 = VAR_0->tx_dma_phys;
  VAR_0->tx_dma_buf = ((void*)0);
  VAR_0->tx_dma_chan = ((void*)0);
 }
 if (!VAR_4)
  return;

 FUNC_0(VAR_0->dev, VAR_0->dma_buf_size, VAR_2, VAR_3);
 FUNC_1(VAR_4);
}
