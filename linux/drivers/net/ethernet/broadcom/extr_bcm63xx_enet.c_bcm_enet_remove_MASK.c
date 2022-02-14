
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct net_device {int dummy; } ;
struct bcm_enet_priv {int mac_clk; int phy_clk; int mii_bus; scalar_t__ has_phy; } ;
struct bcm63xx_enet_platform_data {int (* mii_config ) (struct net_device*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct bcm63xx_enet_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (struct bcm_enet_priv*,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct bcm_enet_priv* FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct net_device*,int ,int ,int ) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 struct bcm_enet_priv *VAR_4;
 struct net_device *VAR_5;


 VAR_5 = FUNC_7(VAR_3);
 VAR_4 = FUNC_6(VAR_5);
 FUNC_9(VAR_5);


 FUNC_2(VAR_4, 0, VAR_0);

 if (VAR_4->has_phy) {
  FUNC_5(VAR_4->mii_bus);
  FUNC_4(VAR_4->mii_bus);
 } else {
  struct bcm63xx_enet_platform_data *VAR_6;

  VAR_6 = FUNC_1(&VAR_3->dev);
  if (VAR_6 && VAR_6->mii_config)
   VAR_6->mii_config(VAR_5, 0, VAR_1,
           VAR_2);
 }


 FUNC_0(VAR_4->phy_clk);
 FUNC_0(VAR_4->mac_clk);

 FUNC_3(VAR_5);
 return 0;
}
