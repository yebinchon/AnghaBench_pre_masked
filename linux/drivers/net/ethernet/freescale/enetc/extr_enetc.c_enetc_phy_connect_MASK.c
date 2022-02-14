
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int dev; } ;
struct enetc_ndev_priv {int if_mode; int phy_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct enetc_ndev_priv* FUNC_1 (struct net_device*) ;
 struct phy_device* FUNC_2 (struct net_device*,int ,int *,int ,int ) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct enetc_ndev_priv *VAR_3 = FUNC_1(VAR_2);
 struct phy_device *VAR_4;

 if (!VAR_3->phy_node)
  return 0;

 VAR_4 = FUNC_2(VAR_2, VAR_3->phy_node, &VAR_1,
    0, VAR_3->if_mode);
 if (!VAR_4) {
  FUNC_0(&VAR_2->dev, "could not attach to PHY\n");
  return -VAR_0;
 }

 FUNC_3(VAR_4);

 return 0;
}
