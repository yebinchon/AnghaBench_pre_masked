
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_spi_data {void* tx_dma_phys; int * tx_dma_buf; struct dma_chan* tx_dma_chan; void* rx_dma_phys; int * rx_dma_buf; struct dma_chan* rx_dma_chan; int dev; int dma_buf_size; } ;
struct dma_chan {int dummy; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int ,int ,void**,int ) ;
 int FUNC_4 (struct dma_chan*) ;
 struct dma_chan* FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct tegra_spi_data *VAR_3,
   bool VAR_4)
{
 struct dma_chan *VAR_5;
 u32 *VAR_6;
 dma_addr_t VAR_7;
 int VAR_8;

 VAR_5 = FUNC_5(VAR_3->dev,
     VAR_4 ? "rx" : "tx");
 if (FUNC_0(VAR_5)) {
  VAR_8 = FUNC_1(VAR_5);
  if (VAR_8 != -VAR_1)
   FUNC_2(VAR_3->dev,
    "Dma channel is not available: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_6 = FUNC_3(VAR_3->dev, VAR_3->dma_buf_size,
    &VAR_7, VAR_2);
 if (!VAR_6) {
  FUNC_2(VAR_3->dev, " Not able to allocate the dma buffer\n");
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 if (VAR_4) {
  VAR_3->rx_dma_chan = VAR_5;
  VAR_3->rx_dma_buf = VAR_6;
  VAR_3->rx_dma_phys = VAR_7;
 } else {
  VAR_3->tx_dma_chan = VAR_5;
  VAR_3->tx_dma_buf = VAR_6;
  VAR_3->tx_dma_phys = VAR_7;
 }
 return 0;
}
