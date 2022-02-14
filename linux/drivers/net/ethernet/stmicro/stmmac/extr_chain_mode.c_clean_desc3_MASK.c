
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_tx_queue {unsigned int dirty_tx; int dma_tx_phy; TYPE_1__* tx_skbuff_dma; struct stmmac_priv* priv_data; } ;
struct stmmac_priv {scalar_t__ hwts_tx_en; int extend_desc; } ;
struct dma_desc {int des3; } ;
struct TYPE_2__ {scalar_t__ last_segment; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, struct dma_desc *VAR_2)
{
 struct stmmac_tx_queue *VAR_3 = (struct stmmac_tx_queue *)VAR_1;
 struct stmmac_priv *VAR_4 = VAR_3->priv_data;
 unsigned int VAR_5 = VAR_3->dirty_tx;

 if (VAR_3->tx_skbuff_dma[VAR_5].last_segment && !VAR_4->extend_desc &&
     VAR_4->hwts_tx_en)




  VAR_2->des3 = FUNC_0((unsigned int)((VAR_3->dma_tx_phy +
          ((VAR_3->dirty_tx + 1) % VAR_0))
          * sizeof(struct dma_desc)));
}
