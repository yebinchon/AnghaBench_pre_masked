
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct phy_device*) ;
 struct phy_device* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct device_node *VAR_0)
{
 struct phy_device *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return;

 FUNC_0(VAR_1);

 FUNC_3(&VAR_1->mdio.dev);
 FUNC_2(VAR_1);
}
