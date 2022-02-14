
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {struct dma_chan* rx_chan; struct dma_chan* tx_chan; } ;
struct mmc_data {int flags; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static struct dma_chan *FUNC_0(struct omap_hsmmc_host *VAR_1,
 struct mmc_data *VAR_2)
{
 return VAR_2->flags & VAR_0 ? VAR_1->tx_chan : VAR_1->rx_chan;
}
