
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_priv {struct mii_bus* mii; TYPE_2__* plat; int device; } ;
struct stmmac_mdio_bus_data {scalar_t__ probed_phy_irq; scalar_t__ irqs; int phy_mask; scalar_t__ needs_reset; } ;
struct phy_device {scalar_t__ irq; } ;
struct TYPE_3__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct mii_bus {scalar_t__* irq; char* name; int parent; int phy_mask; struct net_device* priv; int id; int * reset; int * write; int * read; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int phy_addr; int bus_id; scalar_t__ phy_node; scalar_t__ has_xgmac; struct device_node* mdio_node; struct stmmac_mdio_bus_data* mdio_bus_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 struct mii_bus* FUNC_2 () ;
 int FUNC_3 (struct mii_bus*) ;
 struct phy_device* FUNC_4 (struct mii_bus*,int) ;
 int FUNC_5 (struct mii_bus*) ;
 int FUNC_6 (scalar_t__*,scalar_t__,int) ;
 struct stmmac_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct mii_bus*,struct device_node*) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (int ,int ,char*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_11(struct net_device *VAR_10)
{
 int VAR_11 = 0;
 struct mii_bus *VAR_12;
 struct stmmac_priv *VAR_13 = FUNC_7(VAR_10);
 struct stmmac_mdio_bus_data *VAR_14 = VAR_13->plat->mdio_bus_data;
 struct device_node *VAR_15 = VAR_13->plat->mdio_node;
 struct device *VAR_16 = VAR_10->dev.parent;
 int VAR_17, VAR_18, VAR_19;

 if (!VAR_14)
  return 0;

 VAR_12 = FUNC_2();
 if (!VAR_12)
  return -VAR_1;

 if (VAR_14->irqs)
  FUNC_6(VAR_12->irq, VAR_14->irqs, sizeof(VAR_12->irq));

 VAR_12->name = "stmmac";

 if (VAR_13->plat->has_xgmac) {
  VAR_12->read = &VAR_8;
  VAR_12->write = &VAR_9;


  VAR_19 = VAR_3 + 1;


  if (VAR_13->plat->phy_addr > VAR_3)
   FUNC_0(VAR_16, "Unsupported phy_addr (max=%d)\n",
     VAR_3);
 } else {
  VAR_12->read = &VAR_5;
  VAR_12->write = &VAR_7;
  VAR_19 = VAR_4;
 }

 if (VAR_14->needs_reset)
  VAR_12->reset = &VAR_6;

 FUNC_10(VAR_12->id, VAR_2, "%s-%x",
   VAR_12->name, VAR_13->plat->bus_id);
 VAR_12->priv = VAR_10;
 VAR_12->phy_mask = VAR_14->phy_mask;
 VAR_12->parent = VAR_13->device;

 VAR_11 = FUNC_8(VAR_12, VAR_15);
 if (VAR_11 != 0) {
  FUNC_0(VAR_16, "Cannot register the MDIO bus\n");
  goto bus_register_fail;
 }

 if (VAR_13->plat->phy_node || VAR_15)
  goto bus_register_done;

 VAR_18 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
  struct phy_device *VAR_20 = FUNC_4(VAR_12, VAR_17);

  if (!VAR_20)
   continue;





  if (!VAR_14->irqs &&
      (VAR_14->probed_phy_irq > 0)) {
   VAR_12->irq[VAR_17] = VAR_14->probed_phy_irq;
   VAR_20->irq = VAR_14->probed_phy_irq;
  }






  if (VAR_13->plat->phy_addr == -1)
   VAR_13->plat->phy_addr = VAR_17;

  FUNC_9(VAR_20);
  VAR_18 = 1;
 }

 if (!VAR_18 && !VAR_15) {
  FUNC_1(VAR_16, "No PHY found\n");
  FUNC_5(VAR_12);
  FUNC_3(VAR_12);
  return -VAR_0;
 }

bus_register_done:
 VAR_13->mii = VAR_12;

 return 0;

bus_register_fail:
 FUNC_3(VAR_12);
 return VAR_11;
}
