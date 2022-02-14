
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gswip_priv {int dev; struct dsa_switch* ds; } ;
struct dsa_switch {TYPE_1__* slave_mii_bus; int phys_mii_mask; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {char* name; int phy_mask; int parent; int id; int write; int read; struct gswip_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,struct device_node*) ;
 int FUNC_3 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct gswip_priv *VAR_4, struct device_node *VAR_5)
{
 struct dsa_switch *VAR_6 = VAR_4->ds;

 VAR_6->slave_mii_bus = FUNC_1(VAR_4->dev);
 if (!VAR_6->slave_mii_bus)
  return -VAR_0;

 VAR_6->slave_mii_bus->priv = VAR_4;
 VAR_6->slave_mii_bus->read = VAR_2;
 VAR_6->slave_mii_bus->write = VAR_3;
 VAR_6->slave_mii_bus->name = "lantiq,xrx200-mdio";
 FUNC_3(VAR_6->slave_mii_bus->id, VAR_1, "%s-mii",
   FUNC_0(VAR_4->dev));
 VAR_6->slave_mii_bus->parent = VAR_4->dev;
 VAR_6->slave_mii_bus->phy_mask = ~VAR_6->phys_mii_mask;

 return FUNC_2(VAR_6->slave_mii_bus, VAR_5);
}
