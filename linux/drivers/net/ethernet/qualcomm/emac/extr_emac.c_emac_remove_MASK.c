
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {scalar_t__ base; scalar_t__ digital; } ;
struct TYPE_8__ {int napi; } ;
struct emac_adapter {TYPE_3__ phy; int mii_bus; TYPE_2__* phydev; TYPE_4__ rx_q; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_1__ mdio; } ;


 struct net_device* FUNC_0 (int *) ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 struct emac_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(&VAR_0->dev);
 struct emac_adapter *VAR_2 = FUNC_5(VAR_1);

 FUNC_8(VAR_1);
 FUNC_6(&VAR_2->rx_q.napi);

 FUNC_1(VAR_2);

 FUNC_7(&VAR_2->phydev->mdio.dev);
 FUNC_4(VAR_2->mii_bus);
 FUNC_2(VAR_1);

 if (VAR_2->phy.digital)
  FUNC_3(VAR_2->phy.digital);
 FUNC_3(VAR_2->phy.base);

 return 0;
}
