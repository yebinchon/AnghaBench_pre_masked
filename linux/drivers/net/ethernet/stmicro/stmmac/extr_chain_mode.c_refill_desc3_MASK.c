
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_rx_queue {int dirty_rx; scalar_t__ dma_rx_phy; struct stmmac_priv* priv_data; } ;
struct stmmac_priv {int extend_desc; scalar_t__ hwts_rx_en; } ;
struct dma_desc {int des3; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, struct dma_desc *VAR_2)
{
 struct stmmac_rx_queue *VAR_3 = (struct stmmac_rx_queue *)VAR_1;
 struct stmmac_priv *VAR_4 = VAR_3->priv_data;

 if (VAR_4->hwts_rx_en && !VAR_4->extend_desc)




  VAR_2->des3 = FUNC_0((unsigned int)(VAR_3->dma_rx_phy +
          (((VAR_3->dirty_rx) + 1) %
           VAR_0) *
          sizeof(struct dma_desc)));
}
