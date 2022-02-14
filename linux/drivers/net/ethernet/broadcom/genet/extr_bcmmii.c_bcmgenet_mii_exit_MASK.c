
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
struct bcmgenet_priv {int mii_pdev; int phy_dn; TYPE_2__* pdev; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 struct bcmgenet_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*) ;
 scalar_t__ FUNC_3 (struct device_node*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct net_device *VAR_0)
{
 struct bcmgenet_priv *VAR_1 = FUNC_0(VAR_0);
 struct device_node *VAR_2 = VAR_1->pdev->dev.of_node;

 if (FUNC_3(VAR_2))
  FUNC_2(VAR_2);
 FUNC_1(VAR_1->phy_dn);
 FUNC_4(VAR_1->mii_pdev);
}
