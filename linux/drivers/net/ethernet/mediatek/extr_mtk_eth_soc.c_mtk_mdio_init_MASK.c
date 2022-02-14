
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mtk_eth {TYPE_1__* mii_bus; TYPE_3__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_5__ {char* name; int id; TYPE_3__* parent; struct mtk_eth* priv; int write; int read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*,char*) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*,struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (int ,int ,char*,struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct mtk_eth *VAR_5)
{
 struct device_node *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_5->dev->of_node, "mdio-bus");
 if (!VAR_6) {
  FUNC_0(VAR_5->dev, "no %s child node found", "mdio-bus");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_6)) {
  VAR_7 = -VAR_0;
  goto err_put_node;
 }

 VAR_5->mii_bus = FUNC_1(VAR_5->dev);
 if (!VAR_5->mii_bus) {
  VAR_7 = -VAR_1;
  goto err_put_node;
 }

 VAR_5->mii_bus->name = "mdio";
 VAR_5->mii_bus->read = VAR_3;
 VAR_5->mii_bus->write = VAR_4;
 VAR_5->mii_bus->priv = VAR_5;
 VAR_5->mii_bus->parent = VAR_5->dev;

 FUNC_6(VAR_5->mii_bus->id, VAR_2, "%pOFn", VAR_6);
 VAR_7 = FUNC_4(VAR_5->mii_bus, VAR_6);

err_put_node:
 FUNC_5(VAR_6);
 return VAR_7;
}
