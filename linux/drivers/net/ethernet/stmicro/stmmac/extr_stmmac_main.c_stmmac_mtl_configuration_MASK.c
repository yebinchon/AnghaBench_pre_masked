
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {TYPE_1__* plat; int hw; } ;
struct TYPE_2__ {int rx_queues_to_use; int tx_queues_to_use; int tx_sched_algorithm; int rx_sched_algorithm; } ;


 int FUNC_0 (struct stmmac_priv*) ;
 int FUNC_1 (struct stmmac_priv*) ;
 int FUNC_2 (struct stmmac_priv*) ;
 int FUNC_3 (struct stmmac_priv*) ;
 int FUNC_4 (struct stmmac_priv*) ;
 int FUNC_5 (struct stmmac_priv*) ;
 int FUNC_6 (struct stmmac_priv*,int ,int ) ;
 int FUNC_7 (struct stmmac_priv*,int ,int ) ;
 int FUNC_8 (struct stmmac_priv*) ;
 int FUNC_9 (struct stmmac_priv*) ;

__attribute__((used)) static void FUNC_10(struct stmmac_priv *VAR_0)
{
 u32 VAR_1 = VAR_0->plat->rx_queues_to_use;
 u32 VAR_2 = VAR_0->plat->tx_queues_to_use;

 if (VAR_2 > 1)
  FUNC_9(VAR_0);


 if (VAR_1 > 1)
  FUNC_6(VAR_0, VAR_0->hw,
    VAR_0->plat->rx_sched_algorithm);


 if (VAR_2 > 1)
  FUNC_7(VAR_0, VAR_0->hw,
    VAR_0->plat->tx_sched_algorithm);


 if (VAR_2 > 1)
  FUNC_0(VAR_0);


 FUNC_8(VAR_0);


 FUNC_5(VAR_0);


 if (VAR_1 > 1)
  FUNC_2(VAR_0);


 if (VAR_2 > 1)
  FUNC_4(VAR_0);


 if (VAR_1 > 1)
  FUNC_3(VAR_0);


 if (VAR_1 > 1)
  FUNC_1(VAR_0);
}
