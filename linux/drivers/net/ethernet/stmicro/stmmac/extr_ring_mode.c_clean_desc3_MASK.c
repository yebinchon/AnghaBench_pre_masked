
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_tx_queue {unsigned int dirty_tx; TYPE_1__* tx_skbuff_dma; struct stmmac_priv* priv_data; } ;
struct stmmac_priv {scalar_t__ hwts_tx_en; int extend_desc; } ;
struct dma_desc {scalar_t__ des3; } ;
struct TYPE_2__ {scalar_t__ last_segment; scalar_t__ is_jumbo; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct dma_desc *VAR_1)
{
 struct stmmac_tx_queue *VAR_2 = (struct stmmac_tx_queue *)VAR_0;
 struct stmmac_priv *VAR_3 = VAR_2->priv_data;
 unsigned int VAR_4 = VAR_2->dirty_tx;


 if (FUNC_0(VAR_2->tx_skbuff_dma[VAR_4].is_jumbo ||
       (VAR_2->tx_skbuff_dma[VAR_4].last_segment &&
        !VAR_3->extend_desc && VAR_3->hwts_tx_en)))
  VAR_1->des3 = 0;
}
