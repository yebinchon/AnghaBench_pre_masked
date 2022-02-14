
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_tx_queue {int tx_skbuff; int tx_skbuff_dma; int dma_tx_phy; int dma_etx; int dma_tx; } ;
struct stmmac_priv {int device; int extend_desc; struct stmmac_tx_queue* tx_queue; TYPE_1__* plat; } ;
struct dma_extended_desc {int dummy; } ;
struct dma_desc {int dummy; } ;
struct TYPE_2__ {size_t tx_queues_to_use; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct stmmac_priv*,size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct stmmac_priv *VAR_1)
{
 u32 VAR_2 = VAR_1->plat->tx_queues_to_use;
 u32 VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct stmmac_tx_queue *VAR_4 = &VAR_1->tx_queue[VAR_3];


  FUNC_1(VAR_1, VAR_3);


  if (!VAR_1->extend_desc)
   FUNC_0(VAR_1->device,
       VAR_0 * sizeof(struct dma_desc),
       VAR_4->dma_tx, VAR_4->dma_tx_phy);
  else
   FUNC_0(VAR_1->device, VAR_0 *
       sizeof(struct dma_extended_desc),
       VAR_4->dma_etx, VAR_4->dma_tx_phy);

  FUNC_2(VAR_4->tx_skbuff_dma);
  FUNC_2(VAR_4->tx_skbuff);
 }
}
