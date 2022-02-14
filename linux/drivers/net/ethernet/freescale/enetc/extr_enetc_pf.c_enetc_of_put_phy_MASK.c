
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_ndev_priv {scalar_t__ phy_node; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device_node*) ;
 scalar_t__ FUNC_2 (struct device_node*) ;

__attribute__((used)) static void FUNC_3(struct enetc_ndev_priv *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev->of_node;

 if (VAR_1 && FUNC_2(VAR_1))
  FUNC_1(VAR_1);
 if (VAR_0->phy_node)
  FUNC_0(VAR_0->phy_node);
}
