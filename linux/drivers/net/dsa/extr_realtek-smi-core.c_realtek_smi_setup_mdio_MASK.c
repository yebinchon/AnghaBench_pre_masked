
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct realtek_smi {TYPE_3__* slave_mii_bus; TYPE_5__* dev; TYPE_2__* ds; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {int of_node; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct TYPE_9__ {char* name; int id; TYPE_5__* parent; TYPE_1__ dev; int write; int read; struct realtek_smi* priv; } ;
struct TYPE_8__ {int index; TYPE_3__* slave_mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,char*,...) ;
 TYPE_3__* FUNC_1 (TYPE_5__*) ;
 struct device_node* FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__*,struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,char*,int) ;

int FUNC_6(struct realtek_smi *VAR_5)
{
 struct device_node *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5->dev->of_node, "realtek,smi-mdio");
 if (!VAR_6) {
  FUNC_0(VAR_5->dev, "no MDIO bus node\n");
  return -VAR_0;
 }

 VAR_5->slave_mii_bus = FUNC_1(VAR_5->dev);
 if (!VAR_5->slave_mii_bus) {
  VAR_7 = -VAR_1;
  goto err_put_node;
 }
 VAR_5->slave_mii_bus->priv = VAR_5;
 VAR_5->slave_mii_bus->name = "SMI slave MII";
 VAR_5->slave_mii_bus->read = VAR_3;
 VAR_5->slave_mii_bus->write = VAR_4;
 FUNC_5(VAR_5->slave_mii_bus->id, VAR_2, "SMI-%d",
   VAR_5->ds->index);
 VAR_5->slave_mii_bus->dev.of_node = VAR_6;
 VAR_5->slave_mii_bus->parent = VAR_5->dev;
 VAR_5->ds->slave_mii_bus = VAR_5->slave_mii_bus;

 VAR_7 = FUNC_3(VAR_5->slave_mii_bus, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_5->dev, "unable to register MDIO bus %s\n",
   VAR_5->slave_mii_bus->id);
  goto err_put_node;
 }

 return 0;

err_put_node:
 FUNC_4(VAR_6);

 return VAR_7;
}
