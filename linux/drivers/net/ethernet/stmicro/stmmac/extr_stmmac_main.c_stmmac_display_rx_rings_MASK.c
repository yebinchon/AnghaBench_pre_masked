
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_rx_queue {scalar_t__ dma_rx; scalar_t__ dma_erx; } ;
struct stmmac_priv {scalar_t__ extend_desc; struct stmmac_rx_queue* rx_queue; TYPE_1__* plat; } ;
struct TYPE_2__ {size_t rx_queues_to_use; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (struct stmmac_priv*,void*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_1)
{
 u32 VAR_2 = VAR_1->plat->rx_queues_to_use;
 void *VAR_3;
 u32 VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct stmmac_rx_queue *VAR_5 = &VAR_1->rx_queue[VAR_4];

  FUNC_0("\tRX Queue %u rings\n", VAR_4);

  if (VAR_1->extend_desc)
   VAR_3 = (void *)VAR_5->dma_erx;
  else
   VAR_3 = (void *)VAR_5->dma_rx;


  FUNC_1(VAR_1, VAR_3, VAR_0, 1);
 }
}
