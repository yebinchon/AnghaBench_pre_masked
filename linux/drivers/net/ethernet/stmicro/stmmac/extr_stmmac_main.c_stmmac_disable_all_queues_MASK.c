
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_priv {struct stmmac_channel* channel; TYPE_1__* plat; } ;
struct stmmac_channel {int tx_napi; int rx_napi; } ;
struct TYPE_2__ {size_t rx_queues_to_use; size_t tx_queues_to_use; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_0)
{
 u32 VAR_1 = VAR_0->plat->rx_queues_to_use;
 u32 VAR_2 = VAR_0->plat->tx_queues_to_use;
 u32 VAR_3 = FUNC_0(VAR_1, VAR_2);
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct stmmac_channel *VAR_5 = &VAR_0->channel[VAR_4];

  if (VAR_4 < VAR_1)
   FUNC_1(&VAR_5->rx_napi);
  if (VAR_4 < VAR_2)
   FUNC_1(&VAR_5->tx_napi);
 }
}
