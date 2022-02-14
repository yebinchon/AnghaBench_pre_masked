
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_tx_queue {TYPE_1__* tx_skbuff_dma; int ** tx_skbuff; } ;
struct stmmac_priv {int device; struct stmmac_tx_queue* tx_queue; } ;
struct TYPE_2__ {int map_as_page; scalar_t__ buf; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct stmmac_priv *VAR_1, u32 VAR_2, int VAR_3)
{
 struct stmmac_tx_queue *VAR_4 = &VAR_1->tx_queue[VAR_2];

 if (VAR_4->tx_skbuff_dma[VAR_3].buf) {
  if (VAR_4->tx_skbuff_dma[VAR_3].map_as_page)
   FUNC_1(VAR_1->device,
           VAR_4->tx_skbuff_dma[VAR_3].buf,
           VAR_4->tx_skbuff_dma[VAR_3].len,
           VAR_0);
  else
   FUNC_2(VAR_1->device,
      VAR_4->tx_skbuff_dma[VAR_3].buf,
      VAR_4->tx_skbuff_dma[VAR_3].len,
      VAR_0);
 }

 if (VAR_4->tx_skbuff[VAR_3]) {
  FUNC_0(VAR_4->tx_skbuff[VAR_3]);
  VAR_4->tx_skbuff[VAR_3] = ((void*)0);
  VAR_4->tx_skbuff_dma[VAR_3].buf = 0;
  VAR_4->tx_skbuff_dma[VAR_3].map_as_page = 0;
 }
}
