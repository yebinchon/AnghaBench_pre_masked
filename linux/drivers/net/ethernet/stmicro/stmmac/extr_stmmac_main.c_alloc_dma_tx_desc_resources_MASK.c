
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_tx_queue {size_t queue_index; void* dma_tx; int dma_tx_phy; void* dma_etx; void* tx_skbuff; void* tx_skbuff_dma; struct stmmac_priv* priv_data; } ;
struct stmmac_priv {int device; scalar_t__ extend_desc; struct stmmac_tx_queue* tx_queue; TYPE_1__* plat; } ;
struct sk_buff {int dummy; } ;
struct dma_extended_desc {int dummy; } ;
struct dma_desc {int dummy; } ;
struct TYPE_2__ {size_t tx_queues_to_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (struct stmmac_priv*) ;
 void* FUNC_2 (int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct stmmac_priv *VAR_3)
{
 u32 VAR_4 = VAR_3->plat->tx_queues_to_use;
 int VAR_5 = -VAR_1;
 u32 VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct stmmac_tx_queue *VAR_7 = &VAR_3->tx_queue[VAR_6];

  VAR_7->queue_index = VAR_6;
  VAR_7->priv_data = VAR_3;

  VAR_7->tx_skbuff_dma = FUNC_2(VAR_0,
           sizeof(*VAR_7->tx_skbuff_dma),
           VAR_2);
  if (!VAR_7->tx_skbuff_dma)
   goto err_dma;

  VAR_7->tx_skbuff = FUNC_2(VAR_0,
       sizeof(struct sk_buff *),
       VAR_2);
  if (!VAR_7->tx_skbuff)
   goto err_dma;

  if (VAR_3->extend_desc) {
   VAR_7->dma_etx = FUNC_0(VAR_3->device,
          VAR_0 * sizeof(struct dma_extended_desc),
          &VAR_7->dma_tx_phy,
          VAR_2);
   if (!VAR_7->dma_etx)
    goto err_dma;
  } else {
   VAR_7->dma_tx = FUNC_0(VAR_3->device,
         VAR_0 * sizeof(struct dma_desc),
         &VAR_7->dma_tx_phy,
         VAR_2);
   if (!VAR_7->dma_tx)
    goto err_dma;
  }
 }

 return 0;

err_dma:
 FUNC_1(VAR_3);

 return VAR_5;
}
