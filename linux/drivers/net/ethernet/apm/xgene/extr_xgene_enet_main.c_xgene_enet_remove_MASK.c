
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {TYPE_1__* port_ops; int phy_mode; scalar_t__ mdio_driver; struct net_device* ndev; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* shutdown ) (struct xgene_enet_pdata*) ;} ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct xgene_enet_pdata* FUNC_4 (struct platform_device*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct xgene_enet_pdata*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct xgene_enet_pdata*) ;
 int FUNC_10 (struct xgene_enet_pdata*) ;
 int FUNC_11 (struct xgene_enet_pdata*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_0)
{
 struct xgene_enet_pdata *VAR_1;
 struct net_device *VAR_2;

 VAR_1 = FUNC_4(VAR_0);
 VAR_2 = VAR_1->ndev;

 FUNC_5();
 if (FUNC_2(VAR_2))
  FUNC_0(VAR_2);
 FUNC_6();

 if (VAR_1->mdio_driver)
  FUNC_11(VAR_1);
 else if (FUNC_3(VAR_1->phy_mode))
  FUNC_10(VAR_1);

 FUNC_8(VAR_2);
 FUNC_9(VAR_1);
 VAR_1->port_ops->shutdown(VAR_1);
 FUNC_1(VAR_2);

 return 0;
}
