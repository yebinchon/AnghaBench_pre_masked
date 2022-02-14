
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucc_geth_private {TYPE_2__* ug_info; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int phy_node; int tbi_node; } ;


 int FUNC_0 (struct net_device*) ;
 struct ucc_geth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*) ;
 scalar_t__ FUNC_4 (struct device_node*) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct ucc_geth_private*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device* VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct ucc_geth_private *VAR_2 = FUNC_1(VAR_1);
 struct device_node *VAR_3 = VAR_0->dev.of_node;

 FUNC_7(VAR_1);
 FUNC_0(VAR_1);
 FUNC_6(VAR_2);
 if (FUNC_4(VAR_3))
  FUNC_3(VAR_3);
 FUNC_2(VAR_2->ug_info->tbi_node);
 FUNC_2(VAR_2->ug_info->phy_node);

 return 0;
}
