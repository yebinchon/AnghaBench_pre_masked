
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {int ** tx_skbuff; int device; struct xgmac_dma_desc* dma_tx; } ;
struct xgmac_dma_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgmac_dma_desc*) ;
 int FUNC_1 (struct xgmac_dma_desc*) ;
 scalar_t__ FUNC_2 (struct xgmac_dma_desc*) ;
 scalar_t__ FUNC_3 (struct xgmac_dma_desc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct xgmac_priv *VAR_2)
{
 int VAR_3;
 struct xgmac_dma_desc *VAR_4;

 if (!VAR_2->tx_skbuff)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->tx_skbuff[VAR_3] == ((void*)0))
   continue;

  VAR_4 = VAR_2->dma_tx + VAR_3;
  if (FUNC_2(VAR_4))
   FUNC_6(VAR_2->device, FUNC_0(VAR_4),
      FUNC_1(VAR_4), VAR_0);
  else
   FUNC_5(VAR_2->device, FUNC_0(VAR_4),
           FUNC_1(VAR_4), VAR_0);

  if (FUNC_3(VAR_4))
   FUNC_4(VAR_2->tx_skbuff[VAR_3]);
  VAR_2->tx_skbuff[VAR_3] = ((void*)0);
 }
}
