
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {int phylink; int dev; int mii; TYPE_1__* plat; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int phy_addr; struct device_node* phylink_node; } ;


 int VAR_0 ;
 struct phy_device* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct phy_device*) ;
 int FUNC_4 (int ,struct device_node*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct stmmac_priv *VAR_2 = FUNC_2(VAR_1);
 struct device_node *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->plat->phylink_node;

 if (VAR_3)
  VAR_4 = FUNC_4(VAR_2->phylink, VAR_3, 0);




 if (!VAR_3 || VAR_4) {
  int VAR_5 = VAR_2->plat->phy_addr;
  struct phy_device *VAR_6;

  VAR_6 = FUNC_0(VAR_2->mii, VAR_5);
  if (!VAR_6) {
   FUNC_1(VAR_2->dev, "no phy at addr %d\n", VAR_5);
   return -VAR_0;
  }

  VAR_4 = FUNC_3(VAR_2->phylink, VAR_6);
 }

 return VAR_4;
}
