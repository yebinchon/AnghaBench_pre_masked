
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucc_geth_private {struct ucc_geth_info* ug_info; } ;
struct ucc_geth_info {int tbi_node; } ;
struct TYPE_2__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct net_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct ucc_geth_private* FUNC_2 (struct net_device*) ;
 struct phy_device* FUNC_3 (int ) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_8)
{
 struct ucc_geth_private *VAR_9 = FUNC_2(VAR_8);
 struct ucc_geth_info *VAR_10 = VAR_9->ug_info;
 struct phy_device *VAR_11;

 if (!VAR_10->tbi_node) {
  FUNC_1(&VAR_8->dev, "SGMII mode requires that the device "
   "tree specify a tbi-handle\n");
  return;
 }

 VAR_11 = FUNC_3(VAR_10->tbi_node);
 if (!VAR_11) {
  FUNC_0(&VAR_8->dev, "error: Could not get TBI device\n");
  return;
 }







 if (FUNC_4(VAR_11, VAR_2) & VAR_7) {
  FUNC_6(&VAR_11->mdio.dev);
  return;
 }


 FUNC_5(VAR_11, VAR_0, VAR_4);

 FUNC_5(VAR_11, VAR_3, VAR_5);

 FUNC_5(VAR_11, VAR_1, VAR_6);

 FUNC_6(&VAR_11->mdio.dev);
}
