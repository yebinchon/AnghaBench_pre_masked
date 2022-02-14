
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int flags; } ;
struct jz4740_mmc_host {struct dma_chan* dma_tx; struct dma_chan* dma_rx; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct dma_chan *FUNC_0(struct jz4740_mmc_host *VAR_1,
             struct mmc_data *VAR_2)
{
 return (VAR_2->flags & VAR_0) ? VAR_1->dma_rx : VAR_1->dma_tx;
}
