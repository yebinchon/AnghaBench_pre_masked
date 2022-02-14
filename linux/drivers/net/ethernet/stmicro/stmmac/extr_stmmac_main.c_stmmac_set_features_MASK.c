
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stmmac_priv {int ioaddr; TYPE_1__* plat; scalar_t__ sph; TYPE_2__* hw; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {scalar_t__ rx_csum; } ;
struct TYPE_3__ {scalar_t__ rx_coe; scalar_t__ rx_queues_to_use; } ;


 int VAR_0 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct stmmac_priv*,int ,int,scalar_t__) ;
 int FUNC_2 (struct stmmac_priv*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
          netdev_features_t VAR_2)
{
 struct stmmac_priv *VAR_3 = FUNC_0(VAR_1);
 bool VAR_4;
 u32 VAR_5;


 if (VAR_2 & VAR_0)
  VAR_3->hw->rx_csum = VAR_3->plat->rx_coe;
 else
  VAR_3->hw->rx_csum = 0;



 FUNC_2(VAR_3, VAR_3->hw);

 VAR_4 = (VAR_3->hw->rx_csum > 0) && VAR_3->sph;
 for (VAR_5 = 0; VAR_5 < VAR_3->plat->rx_queues_to_use; VAR_5++)
  FUNC_1(VAR_3, VAR_3->ioaddr, VAR_4, VAR_5);

 return 0;
}
