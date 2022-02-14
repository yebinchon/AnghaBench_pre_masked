
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {int irq; int supported; int advertising; int dev_flags; } ;
struct net_device {struct phy_device* phydev; } ;
struct device_node {int dummy; } ;
struct bcmgenet_priv {int old_link; int old_speed; int old_duplex; int old_pause; scalar_t__ internal_phy; int phy_interface; int phy_dn; int gphy_rev; TYPE_2__* pdev; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcmgenet_priv*) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 struct bcmgenet_priv* FUNC_3 (struct net_device*) ;
 struct phy_device* FUNC_4 (struct net_device*,int ,int ,int ,int ) ;
 int FUNC_5 (struct net_device*,struct phy_device*,int ,int ) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (char*) ;

int FUNC_8(struct net_device *VAR_3)
{
 struct bcmgenet_priv *VAR_4 = FUNC_3(VAR_3);
 struct device_node *VAR_5 = VAR_4->pdev->dev.of_node;
 struct phy_device *VAR_6;
 u32 VAR_7 = 0;
 int VAR_8;


 if (VAR_4->internal_phy)
  VAR_7 = VAR_4->gphy_rev;


 VAR_4->old_link = -1;
 VAR_4->old_speed = -1;
 VAR_4->old_duplex = -1;
 VAR_4->old_pause = -1;

 if (VAR_5) {
  VAR_6 = FUNC_4(VAR_3, VAR_4->phy_dn, VAR_2,
     VAR_7, VAR_4->phy_interface);
  if (!VAR_6) {
   FUNC_7("could not attach to PHY\n");
   return -VAR_0;
  }
 } else {
  VAR_6 = VAR_3->phydev;
  VAR_6->dev_flags = VAR_7;

  VAR_8 = FUNC_5(VAR_3, VAR_6, VAR_2,
      VAR_4->phy_interface);
  if (VAR_8) {
   FUNC_7("could not attach to PHY\n");
   return -VAR_0;
  }
 }






 VAR_8 = FUNC_1(VAR_3, 1);
 if (VAR_8) {
  FUNC_6(VAR_3->phydev);
  return VAR_8;
 }

 FUNC_2(VAR_6->advertising, VAR_6->supported);







 if (VAR_4->internal_phy && !FUNC_0(VAR_4))
  VAR_3->phydev->irq = VAR_1;

 return 0;
}
