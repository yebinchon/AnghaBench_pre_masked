
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_rx_queue {int * dma_rx; TYPE_1__* dma_erx; } ;
struct stmmac_priv {int dma_buf_sz; int mode; int use_riwt; scalar_t__ extend_desc; struct stmmac_rx_queue* rx_queue; } ;
struct TYPE_2__ {int basic; } ;


 int VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,int *,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_1, u32 VAR_2)
{
 struct stmmac_rx_queue *VAR_3 = &VAR_1->rx_queue[VAR_2];
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1->extend_desc)
   FUNC_0(VAR_1, &VAR_3->dma_erx[VAR_4].basic,
     VAR_1->use_riwt, VAR_1->mode,
     (VAR_4 == VAR_0 - 1),
     VAR_1->dma_buf_sz);
  else
   FUNC_0(VAR_1, &VAR_3->dma_rx[VAR_4],
     VAR_1->use_riwt, VAR_1->mode,
     (VAR_4 == VAR_0 - 1),
     VAR_1->dma_buf_sz);
}
