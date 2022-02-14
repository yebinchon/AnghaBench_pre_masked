
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {int pause; int flow_ctrl; int hw; TYPE_1__* plat; } ;
struct TYPE_2__ {int tx_queues_to_use; } ;


 int FUNC_0 (struct stmmac_priv*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->plat->tx_queues_to_use;

 FUNC_0(VAR_0, VAR_0->hw, VAR_1, VAR_0->flow_ctrl,
   VAR_0->pause, VAR_2);
}
