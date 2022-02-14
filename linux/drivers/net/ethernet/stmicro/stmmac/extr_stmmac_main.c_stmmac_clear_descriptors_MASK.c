
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stmmac_priv {TYPE_1__* plat; } ;
struct TYPE_2__ {scalar_t__ rx_queues_to_use; scalar_t__ tx_queues_to_use; } ;


 int FUNC_0 (struct stmmac_priv*,scalar_t__) ;
 int FUNC_1 (struct stmmac_priv*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_0)
{
 u32 VAR_1 = VAR_0->plat->rx_queues_to_use;
 u32 VAR_2 = VAR_0->plat->tx_queues_to_use;
 u32 VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(VAR_0, VAR_3);


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_1(VAR_0, VAR_3);
}
