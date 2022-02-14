
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stmmac_priv {int ioaddr; TYPE_1__* plat; } ;
struct TYPE_2__ {scalar_t__ rx_queues_to_use; scalar_t__ tx_queues_to_use; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct stmmac_priv*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct stmmac_priv*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_2)
{
 u32 VAR_3 = VAR_2->plat->rx_queues_to_use;
 u32 VAR_4 = VAR_2->plat->tx_queues_to_use;
 u32 VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_1(VAR_2, VAR_2->ioaddr,
    (VAR_1 - 1), VAR_5);


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(VAR_2, VAR_2->ioaddr,
    (VAR_0 - 1), VAR_5);
}
