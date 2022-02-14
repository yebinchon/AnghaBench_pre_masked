
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct phy_device {TYPE_2__ mdio; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct device_node*,char*,int *) ;

void FUNC_3(struct phy_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->mdio.dev.of_node;
 u32 VAR_3;

 if (!FUNC_0(VAR_0))
  return;

 if (!VAR_2)
  return;

 if (!FUNC_2(VAR_2, "max-speed", &VAR_3))
  FUNC_1(VAR_1, VAR_3);
}
