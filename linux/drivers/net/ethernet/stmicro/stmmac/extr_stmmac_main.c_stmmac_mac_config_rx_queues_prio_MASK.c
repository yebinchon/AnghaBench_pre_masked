
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_priv {int hw; TYPE_2__* plat; } ;
struct TYPE_4__ {size_t rx_queues_to_use; TYPE_1__* rx_queues_cfg; } ;
struct TYPE_3__ {size_t prio; int use_prio; } ;


 int FUNC_0 (struct stmmac_priv*,int ,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_0)
{
 u32 VAR_1 = VAR_0->plat->rx_queues_to_use;
 u32 VAR_2;
 u32 VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (!VAR_0->plat->rx_queues_cfg[VAR_2].use_prio)
   continue;

  VAR_3 = VAR_0->plat->rx_queues_cfg[VAR_2].prio;
  FUNC_0(VAR_0, VAR_0->hw, VAR_3, VAR_2);
 }
}
