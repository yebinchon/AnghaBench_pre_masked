
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stmmac_priv {int dev; TYPE_1__* plat; } ;
struct TYPE_2__ {scalar_t__ tx_queues_to_use; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_0)
{
 u32 VAR_1 = VAR_0->plat->tx_queues_to_use;
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_1(FUNC_0(VAR_0->dev, VAR_2));
}
