
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_len; int fragmens_len; int width; struct dma_chan** dma_chan; } ;
struct sprd_spi {TYPE_1__ dma; int phy_base; } ;
struct spi_transfer {int rx_sg; } ;
struct dma_slave_config {int dst_maxburst; int dst_addr_width; int src_addr_width; int src_addr; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dma_chan*,struct dma_slave_config*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct sprd_spi *VAR_2, struct spi_transfer *VAR_3)
{
 struct dma_chan *VAR_4 = VAR_2->dma.dma_chan[VAR_1];
 struct dma_slave_config VAR_5 = {
  .src_addr = VAR_2->phy_base,
  .src_addr_width = VAR_2->dma.width,
  .dst_addr_width = VAR_2->dma.width,
  .dst_maxburst = VAR_2->dma.fragmens_len,
 };
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, &VAR_5, &VAR_3->rx_sg, VAR_0);
 if (VAR_6)
  return VAR_6;

 return VAR_2->dma.rx_len;
}
