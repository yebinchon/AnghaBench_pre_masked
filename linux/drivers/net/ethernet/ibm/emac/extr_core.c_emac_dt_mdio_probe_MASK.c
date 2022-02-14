
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct emac_instance {TYPE_4__* mii_bus; TYPE_3__* ofdev; TYPE_2__* ndev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct TYPE_11__ {char* name; int id; int * reset; int * write; int * read; int parent; TYPE_2__* priv; } ;
struct TYPE_10__ {char* name; TYPE_6__ dev; } ;
struct TYPE_8__ {int parent; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,char*,...) ;
 TYPE_4__* FUNC_1 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_4__*,struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_7(struct emac_instance *VAR_6)
{
 struct device_node *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6->ofdev->dev.of_node, "mdio");
 if (!VAR_7) {
  FUNC_0(&VAR_6->ofdev->dev, "no mdio definition found.");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_7)) {
  VAR_8 = -VAR_0;
  goto put_node;
 }

 VAR_6->mii_bus = FUNC_1(&VAR_6->ofdev->dev);
 if (!VAR_6->mii_bus) {
  VAR_8 = -VAR_1;
  goto put_node;
 }

 VAR_6->mii_bus->priv = VAR_6->ndev;
 VAR_6->mii_bus->parent = VAR_6->ndev->dev.parent;
 VAR_6->mii_bus->name = "emac_mdio";
 VAR_6->mii_bus->read = &VAR_3;
 VAR_6->mii_bus->write = &VAR_5;
 VAR_6->mii_bus->reset = &VAR_4;
 FUNC_6(VAR_6->mii_bus->id, VAR_2, "%s", VAR_6->ofdev->name);
 VAR_8 = FUNC_4(VAR_6->mii_bus, VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_6->ofdev->dev, "cannot register MDIO bus %s (%d)",
   VAR_6->mii_bus->name, VAR_8);
 }

 put_node:
 FUNC_5(VAR_7);
 return VAR_8;
}
