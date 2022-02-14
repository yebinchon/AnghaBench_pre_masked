
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stmmac_priv {int hw; TYPE_2__* plat; } ;
struct TYPE_4__ {int rx_queues_to_use; TYPE_1__* rx_queues_cfg; } ;
struct TYPE_3__ {int mode_to_use; } ;


 int FUNC_0 (struct stmmac_priv*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_0)
{
 u32 VAR_1 = VAR_0->plat->rx_queues_to_use;
 int VAR_2;
 u8 VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = VAR_0->plat->rx_queues_cfg[VAR_2].mode_to_use;
  FUNC_0(VAR_0, VAR_0->hw, VAR_3, VAR_2);
 }
}
