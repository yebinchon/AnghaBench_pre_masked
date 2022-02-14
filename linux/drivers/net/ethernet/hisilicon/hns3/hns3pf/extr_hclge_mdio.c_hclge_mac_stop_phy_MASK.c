
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct hclge_dev {TYPE_2__* vport; } ;
struct TYPE_3__ {struct net_device* netdev; } ;
struct TYPE_4__ {TYPE_1__ nic; } ;


 int FUNC_0 (struct phy_device*) ;

void FUNC_1(struct hclge_dev *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->vport[0].nic.netdev;
 struct phy_device *VAR_2 = VAR_1->phydev;

 if (!VAR_2)
  return;

 FUNC_0(VAR_2);
}
