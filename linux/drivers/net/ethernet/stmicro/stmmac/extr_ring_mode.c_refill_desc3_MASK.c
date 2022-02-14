
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_rx_queue {struct stmmac_priv* priv_data; } ;
struct stmmac_priv {scalar_t__ dma_buf_sz; } ;
struct dma_desc {int des2; int des3; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, struct dma_desc *VAR_3)
{
 struct stmmac_rx_queue *VAR_4 = VAR_2;
 struct stmmac_priv *VAR_5 = VAR_4->priv_data;


 if (VAR_5->dma_buf_sz == VAR_0)
  VAR_3->des3 = FUNC_0(FUNC_1(VAR_3->des2) + VAR_1);
}
