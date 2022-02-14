
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {char* name; TYPE_1__ dev; } ;
struct net_device {int dummy; } ;
struct mii_bus {char* name; TYPE_1__* parent; struct fec_enet_private* priv; int id; int write; int read; } ;
struct fec_enet_private {int quirks; scalar_t__ dev_id; int phy_speed; struct mii_bus* mii_bus; scalar_t__ hwp; int clk_ipg; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct mii_bus* FUNC_3 () ;
 int FUNC_4 (struct mii_bus*) ;
 scalar_t__ VAR_10 ;
 struct fec_enet_private* FUNC_5 (struct net_device*) ;
 struct device_node* FUNC_6 (int ,char*) ;
 int FUNC_7 (struct mii_bus*,struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 struct net_device* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (int ,int ,char*,char*,scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11)
{
 static struct mii_bus *VAR_12;
 struct net_device *VAR_13 = FUNC_9(VAR_11);
 struct fec_enet_private *VAR_14 = FUNC_5(VAR_13);
 struct device_node *VAR_15;
 int VAR_16 = -VAR_3;
 u32 VAR_17, VAR_18;
 if ((VAR_14->quirks & VAR_6) && VAR_14->dev_id > 0) {

  if (VAR_10 && VAR_12) {
   VAR_14->mii_bus = VAR_12;
   VAR_10++;
   return 0;
  }
  return -VAR_1;
 }
 VAR_17 = FUNC_0(FUNC_1(VAR_14->clk_ipg), 5000000);
 if (VAR_14->quirks & VAR_5)
  VAR_17--;
 if (VAR_17 > 63) {
  FUNC_2(&VAR_11->dev,
   "fec clock (%lu) too fast to get right mii speed\n",
   FUNC_1(VAR_14->clk_ipg));
  VAR_16 = -VAR_0;
  goto err_out;
 }
 VAR_18 = FUNC_0(FUNC_1(VAR_14->clk_ipg), 100000000) - 1;

 VAR_14->phy_speed = VAR_17 << 1 | VAR_18 << 8;

 FUNC_11(VAR_14->phy_speed, VAR_14->hwp + VAR_4);

 VAR_14->mii_bus = FUNC_3();
 if (VAR_14->mii_bus == ((void*)0)) {
  VAR_16 = -VAR_2;
  goto err_out;
 }

 VAR_14->mii_bus->name = "fec_enet_mii_bus";
 VAR_14->mii_bus->read = VAR_8;
 VAR_14->mii_bus->write = VAR_9;
 FUNC_10(VAR_14->mii_bus->id, VAR_7, "%s-%x",
  VAR_11->name, VAR_14->dev_id + 1);
 VAR_14->mii_bus->priv = VAR_14;
 VAR_14->mii_bus->parent = &VAR_11->dev;

 VAR_15 = FUNC_6(VAR_11->dev.of_node, "mdio");
 VAR_16 = FUNC_7(VAR_14->mii_bus, VAR_15);
 FUNC_8(VAR_15);
 if (VAR_16)
  goto err_out_free_mdiobus;

 VAR_10++;


 if (VAR_14->quirks & VAR_6)
  VAR_12 = VAR_14->mii_bus;

 return 0;

err_out_free_mdiobus:
 FUNC_4(VAR_14->mii_bus);
err_out:
 return VAR_16;
}
