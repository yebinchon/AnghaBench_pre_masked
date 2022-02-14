
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_priv {TYPE_2__* plat; int hw; } ;
struct TYPE_4__ {size_t tx_queues_to_use; TYPE_1__* tx_queues_cfg; } ;
struct TYPE_3__ {size_t mode_to_use; int low_credit; int high_credit; int idle_slope; int send_slope; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,int ,int ,int ,int ,int ,size_t) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_1)
{
 u32 VAR_2 = VAR_1->plat->tx_queues_to_use;
 u32 VAR_3;
 u32 VAR_4;


 for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = VAR_1->plat->tx_queues_cfg[VAR_4].mode_to_use;
  if (VAR_3 == VAR_0)
   continue;

  FUNC_0(VAR_1, VAR_1->hw,
    VAR_1->plat->tx_queues_cfg[VAR_4].send_slope,
    VAR_1->plat->tx_queues_cfg[VAR_4].idle_slope,
    VAR_1->plat->tx_queues_cfg[VAR_4].high_credit,
    VAR_1->plat->tx_queues_cfg[VAR_4].low_credit,
    VAR_4);
 }
}
