
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct temac_local {scalar_t__ phy_node; TYPE_1__* dev; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int kobj; } ;


 struct temac_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 struct net_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (struct temac_local*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_1);
 struct temac_local *VAR_3 = FUNC_0(VAR_2);

 FUNC_5(VAR_2);
 FUNC_3(&VAR_3->dev->kobj, &VAR_0);
 if (VAR_3->phy_node)
  FUNC_1(VAR_3->phy_node);
 FUNC_4(VAR_3);
 return 0;
}
