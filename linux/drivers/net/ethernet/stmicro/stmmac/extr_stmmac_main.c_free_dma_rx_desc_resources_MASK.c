
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_rx_queue {scalar_t__ page_pool; int buf_pool; int dma_rx_phy; int dma_erx; int dma_rx; } ;
struct stmmac_priv {int device; int extend_desc; struct stmmac_rx_queue* rx_queue; TYPE_1__* plat; } ;
struct dma_extended_desc {int dummy; } ;
struct dma_desc {int dummy; } ;
struct TYPE_2__ {size_t rx_queues_to_use; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct stmmac_priv*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct stmmac_priv *VAR_1)
{
 u32 VAR_2 = VAR_1->plat->rx_queues_to_use;
 u32 VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct stmmac_rx_queue *VAR_4 = &VAR_1->rx_queue[VAR_3];


  FUNC_1(VAR_1, VAR_3);


  if (!VAR_1->extend_desc)
   FUNC_0(VAR_1->device,
       VAR_0 * sizeof(struct dma_desc),
       VAR_4->dma_rx, VAR_4->dma_rx_phy);
  else
   FUNC_0(VAR_1->device, VAR_0 *
       sizeof(struct dma_extended_desc),
       VAR_4->dma_erx, VAR_4->dma_rx_phy);

  FUNC_2(VAR_4->buf_pool);
  if (VAR_4->page_pool) {
   FUNC_4(VAR_4->page_pool);
   FUNC_3(VAR_4->page_pool);
  }
 }
}
