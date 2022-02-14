
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_wolinfo {scalar_t__ wolopts; int supported; int cmd; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct ave_private {int nclks; int nrsts; int * clk; int * rst; int mdio; struct phy_device* phydev; int pinmode_val; int pinmode_mask; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,struct ethtool_wolinfo*) ;
 int FUNC_1 (struct net_device*,struct ethtool_wolinfo*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ) ;
 struct ave_private* FUNC_8 (struct net_device*) ;
 struct device_node* FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (int ,struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 struct phy_device* FUNC_12 (struct net_device*,struct device_node*,int ) ;
 int FUNC_13 (struct phy_device*) ;
 int FUNC_14 (struct phy_device*) ;
 int FUNC_15 (struct phy_device*,int ) ;
 int FUNC_16 (struct phy_device*) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_6)
{
 struct ethtool_wolinfo VAR_7 = { .cmd = VAR_2 };
 struct ave_private *VAR_8 = FUNC_8(VAR_6);
 struct device *VAR_9 = VAR_6->dev.parent;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct device_node *VAR_11;
 struct phy_device *VAR_12;
 int VAR_13, VAR_14, VAR_15;


 for (VAR_13 = 0; VAR_13 < VAR_8->nclks; VAR_13++) {
  VAR_15 = FUNC_4(VAR_8->clk[VAR_13]);
  if (VAR_15) {
   FUNC_5(VAR_9, "can't enable clock\n");
   goto out_clk_disable;
  }
 }

 for (VAR_14 = 0; VAR_14 < VAR_8->nrsts; VAR_14++) {
  VAR_15 = FUNC_19(VAR_8->rst[VAR_14]);
  if (VAR_15) {
   FUNC_5(VAR_9, "can't deassert reset\n");
   goto out_reset_assert;
  }
 }

 VAR_15 = FUNC_17(VAR_8->regmap, VAR_3,
     VAR_8->pinmode_mask, VAR_8->pinmode_val);
 if (VAR_15)
  return VAR_15;

 FUNC_2(VAR_6);

 VAR_11 = FUNC_9(VAR_10, "mdio");
 if (!VAR_11) {
  FUNC_5(VAR_9, "mdio node not found\n");
  VAR_15 = -VAR_0;
  goto out_reset_assert;
 }
 VAR_15 = FUNC_10(VAR_8->mdio, VAR_11);
 FUNC_11(VAR_11);
 if (VAR_15) {
  FUNC_5(VAR_9, "failed to register mdiobus\n");
  goto out_reset_assert;
 }

 VAR_12 = FUNC_12(VAR_6, VAR_10, VAR_5);
 if (!VAR_12) {
  FUNC_5(VAR_9, "could not attach to PHY\n");
  VAR_15 = -VAR_1;
  goto out_mdio_unregister;
 }

 VAR_8->phydev = VAR_12;

 FUNC_0(VAR_6, &VAR_7);
 FUNC_6(&VAR_6->dev, !!VAR_7.supported);


 VAR_7.wolopts = 0;
 FUNC_1(VAR_6, &VAR_7);

 if (!FUNC_14(VAR_12))
  FUNC_15(VAR_12, VAR_4);

 FUNC_16(VAR_12);

 FUNC_13(VAR_12);

 return 0;

out_mdio_unregister:
 FUNC_7(VAR_8->mdio);
out_reset_assert:
 while (--VAR_14 >= 0)
  FUNC_18(VAR_8->rst[VAR_14]);
out_clk_disable:
 while (--VAR_13 >= 0)
  FUNC_3(VAR_8->clk[VAR_13]);

 return VAR_15;
}
