
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dsa_switch {int phys_mii_mask; TYPE_5__* dev; TYPE_2__* slave_mii_bus; } ;
struct device_node {int dummy; } ;
struct bcm_sf2_priv {int indir_phy_mask; TYPE_2__* slave_mii_bus; struct device_node* master_mii_dn; TYPE_3__* master_mii_bus; } ;
struct TYPE_9__ {int parent; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_7__ {char* name; int phy_mask; int parent; TYPE_1__ dev; int id; int write; int read; struct bcm_sf2_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bcm_sf2_priv* FUNC_0 (struct dsa_switch*) ;
 TYPE_2__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 struct device_node* FUNC_3 (int *,int *,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 TYPE_3__* FUNC_5 (struct device_node*) ;
 int FUNC_6 (TYPE_2__*,struct device_node*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct dsa_switch *VAR_6)
{
 struct bcm_sf2_priv *VAR_7 = FUNC_0(VAR_6);
 struct device_node *VAR_8;
 static int VAR_9;
 int VAR_10;


 VAR_8 = FUNC_3(((void*)0), ((void*)0), "brcm,unimac-mdio");
 VAR_7->master_mii_bus = FUNC_5(VAR_8);
 if (!VAR_7->master_mii_bus)
  return -VAR_2;

 FUNC_2(&VAR_7->master_mii_bus->dev);
 VAR_7->master_mii_dn = VAR_8;

 VAR_7->slave_mii_bus = FUNC_1(VAR_6->dev);
 if (!VAR_7->slave_mii_bus)
  return -VAR_1;

 VAR_7->slave_mii_bus->priv = VAR_7;
 VAR_7->slave_mii_bus->name = "sf2 slave mii";
 VAR_7->slave_mii_bus->read = VAR_4;
 VAR_7->slave_mii_bus->write = VAR_5;
 FUNC_8(VAR_7->slave_mii_bus->id, VAR_3, "sf2-%d",
   VAR_9++);
 VAR_7->slave_mii_bus->dev.of_node = VAR_8;
 if (FUNC_4("brcm,bcm7445d0"))
  VAR_7->indir_phy_mask |= (1 << VAR_0);
 else
  VAR_7->indir_phy_mask = 0;

 VAR_6->phys_mii_mask = VAR_7->indir_phy_mask;
 VAR_6->slave_mii_bus = VAR_7->slave_mii_bus;
 VAR_7->slave_mii_bus->parent = VAR_6->dev->parent;
 VAR_7->slave_mii_bus->phy_mask = ~VAR_7->indir_phy_mask;

 VAR_10 = FUNC_6(VAR_7->slave_mii_bus, VAR_8);
 if (VAR_10 && VAR_8)
  FUNC_7(VAR_8);

 return VAR_10;
}
