
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucc_geth_private {int oldduplex; scalar_t__ phy_interface; struct phy_device* phydev; int max_speed; scalar_t__ oldspeed; scalar_t__ oldlink; struct ucc_geth_info* ug_info; } ;
struct ucc_geth_info {int phy_node; } ;
struct phy_device {int dummy; } ;
struct net_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct ucc_geth_private* FUNC_1 (struct net_device*) ;
 struct phy_device* FUNC_2 (struct net_device*,int ,int *,int ,scalar_t__) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3)
{
 struct ucc_geth_private *VAR_4 = FUNC_1(VAR_3);
 struct ucc_geth_info *VAR_5 = VAR_4->ug_info;
 struct phy_device *VAR_6;

 VAR_4->oldlink = 0;
 VAR_4->oldspeed = 0;
 VAR_4->oldduplex = -1;

 VAR_6 = FUNC_2(VAR_3, VAR_5->phy_node, &VAR_2, 0,
    VAR_4->phy_interface);
 if (!VAR_6) {
  FUNC_0(&VAR_3->dev, "Could not attach to PHY\n");
  return -VAR_0;
 }

 if (VAR_4->phy_interface == VAR_1)
  FUNC_4(VAR_3);

 FUNC_3(VAR_6, VAR_4->max_speed);

 VAR_4->phydev = VAR_6;

 return 0;
}
