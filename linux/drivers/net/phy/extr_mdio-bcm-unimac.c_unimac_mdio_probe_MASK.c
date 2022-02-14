
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct unimac_mdio_priv {int * clk; int wait_func; struct unimac_mdio_priv* wait_func_data; struct mii_bus* mii_bus; scalar_t__ clk_freq; int base; } ;
struct unimac_mdio_pdata {char* bus_name; int phy_mask; struct unimac_mdio_priv* wait_func_data; int wait_func; } ;
struct resource {int start; } ;
struct TYPE_6__ {struct device_node* of_node; struct unimac_mdio_pdata* platform_data; } ;
struct platform_device {char* name; int id; TYPE_1__ dev; } ;
struct mii_bus {char* name; int id; int reset; int write; int read; TYPE_1__* parent; int phy_mask; struct unimac_mdio_priv* priv; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 struct unimac_mdio_priv* FUNC_7 (TYPE_1__*,int,int ) ;
 struct mii_bus* FUNC_8 () ;
 int FUNC_9 (struct mii_bus*) ;
 int FUNC_10 (struct mii_bus*,struct device_node*) ;
 scalar_t__ FUNC_11 (struct device_node*,char*,scalar_t__*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct unimac_mdio_priv*) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (int ,int ,char*,char*,int) ;
 int FUNC_16 (struct unimac_mdio_priv*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_10)
{
 struct unimac_mdio_pdata *VAR_11 = VAR_10->dev.platform_data;
 struct unimac_mdio_priv *VAR_12;
 struct device_node *VAR_13;
 struct mii_bus *VAR_14;
 struct resource *VAR_15;
 int VAR_16;

 VAR_13 = VAR_10->dev.of_node;

 VAR_12 = FUNC_7(&VAR_10->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_1;

 VAR_15 = FUNC_12(VAR_10, VAR_4, 0);
 if (!VAR_15)
  return -VAR_0;




 VAR_12->base = FUNC_6(&VAR_10->dev, VAR_15->start, FUNC_14(VAR_15));
 if (!VAR_12->base) {
  FUNC_3(&VAR_10->dev, "failed to remap register\n");
  return -VAR_1;
 }

 VAR_12->clk = FUNC_5(&VAR_10->dev, ((void*)0));
 if (FUNC_0(VAR_12->clk) == -VAR_2)
  return FUNC_0(VAR_12->clk);
 else
  VAR_12->clk = ((void*)0);

 VAR_16 = FUNC_2(VAR_12->clk);
 if (VAR_16)
  return VAR_16;

 if (FUNC_11(VAR_13, "clock-frequency", &VAR_12->clk_freq))
  VAR_12->clk_freq = 0;

 FUNC_16(VAR_12);

 VAR_12->mii_bus = FUNC_8();
 if (!VAR_12->mii_bus) {
  VAR_16 = -VAR_1;
  goto out_clk_disable;
 }

 VAR_14 = VAR_12->mii_bus;
 VAR_14->priv = VAR_12;
 if (VAR_11) {
  VAR_14->name = VAR_11->bus_name;
  VAR_12->wait_func = VAR_11->wait_func;
  VAR_12->wait_func_data = VAR_11->wait_func_data;
  VAR_14->phy_mask = ~VAR_11->phy_mask;
 } else {
  VAR_14->name = "unimac MII bus";
  VAR_12->wait_func_data = VAR_12;
  VAR_12->wait_func = VAR_6;
 }
 VAR_14->parent = &VAR_10->dev;
 VAR_14->read = VAR_7;
 VAR_14->write = VAR_9;
 VAR_14->reset = VAR_8;
 FUNC_15(VAR_14->id, VAR_5, "%s-%d", VAR_10->name, VAR_10->id);

 VAR_16 = FUNC_10(VAR_14, VAR_13);
 if (VAR_16) {
  FUNC_3(&VAR_10->dev, "MDIO bus registration failed\n");
  goto out_mdio_free;
 }

 FUNC_13(VAR_10, VAR_12);

 FUNC_4(&VAR_10->dev, "Broadcom UniMAC MDIO bus\n");

 return 0;

out_mdio_free:
 FUNC_9(VAR_14);
out_clk_disable:
 FUNC_1(VAR_12->clk);
 return VAR_16;
}
