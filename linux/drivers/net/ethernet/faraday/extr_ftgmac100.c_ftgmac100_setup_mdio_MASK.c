
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {char* name; int id; TYPE_1__ dev; } ;
struct net_device {int dummy; } ;
struct ftgmac100 {TYPE_2__* mii_bus; int dev; int netdev; scalar_t__ is_aspeed; scalar_t__ base; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {char* name; int * irq; int write; int read; int priv; int parent; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ftgmac100*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 struct ftgmac100* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*,int ) ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct device_node*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ,char*,char*,int) ;
 struct platform_device* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_13)
{
 struct ftgmac100 *VAR_14 = FUNC_8(VAR_13);
 struct platform_device *VAR_15 = FUNC_14(VAR_14->dev);
 int VAR_16 = VAR_4;
 struct device_node *VAR_17 = VAR_15->dev.of_node;
 int VAR_18, VAR_19 = 0;
 u32 VAR_20;


 VAR_14->mii_bus = FUNC_4();
 if (!VAR_14->mii_bus)
  return -VAR_0;

 if (FUNC_10(VAR_17, "aspeed,ast2400-mac") ||
     FUNC_10(VAR_17, "aspeed,ast2500-mac")) {





  VAR_20 = FUNC_2(VAR_14->base + VAR_1);
  VAR_20 &= ~VAR_2;
  FUNC_3(VAR_20, VAR_14->base + VAR_1);
 }


 if (VAR_17) {

  VAR_16 = FUNC_11(VAR_17);
  if (VAR_16 < 0)
   VAR_16 = VAR_4;
  if (VAR_14->is_aspeed &&
      VAR_16 != VAR_8 &&
      VAR_16 != VAR_4 &&
      VAR_16 != VAR_5 &&
      VAR_16 != VAR_6 &&
      VAR_16 != VAR_7) {
   FUNC_9(VAR_13,
       "Unsupported PHY mode %s !\n",
       FUNC_12(VAR_16));
  }
 }

 VAR_14->mii_bus->name = "ftgmac100_mdio";
 FUNC_13(VAR_14->mii_bus->id, VAR_3, "%s-%d",
   VAR_15->name, VAR_15->id);
 VAR_14->mii_bus->parent = VAR_14->dev;
 VAR_14->mii_bus->priv = VAR_14->netdev;
 VAR_14->mii_bus->read = VAR_11;
 VAR_14->mii_bus->write = VAR_12;

 for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++)
  VAR_14->mii_bus->irq[VAR_18] = VAR_10;

 VAR_19 = FUNC_6(VAR_14->mii_bus);
 if (VAR_19) {
  FUNC_0(VAR_14->dev, "Cannot register MDIO bus!\n");
  goto err_register_mdiobus;
 }

 VAR_19 = FUNC_1(VAR_14, VAR_16);
 if (VAR_19) {
  FUNC_0(VAR_14->dev, "MII Probe failed!\n");
  goto err_mii_probe;
 }

 return 0;

err_mii_probe:
 FUNC_7(VAR_14->mii_bus);
err_register_mdiobus:
 FUNC_5(VAR_14->mii_bus);
 return VAR_19;
}
