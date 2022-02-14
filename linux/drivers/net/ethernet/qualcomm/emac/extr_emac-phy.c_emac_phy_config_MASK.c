
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {char* name; TYPE_5__ dev; } ;
struct mii_bus {char* name; struct emac_adapter* priv; TYPE_5__* parent; int write; int read; int id; } ;
struct emac_adapter {TYPE_2__* phydev; struct mii_bus* mii_bus; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_10__ {TYPE_1__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_5__*,char*,int *) ;
 struct mii_bus* FUNC_2 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 TYPE_2__* FUNC_5 (struct mii_bus*,int ) ;
 int FUNC_6 (struct mii_bus*) ;
 int FUNC_7 (struct mii_bus*) ;
 int FUNC_8 (struct mii_bus*,struct device_node*) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (struct device_node*,char*,int ) ;
 TYPE_2__* FUNC_11 (struct device_node*) ;
 TYPE_2__* FUNC_12 (struct mii_bus*) ;
 int FUNC_13 (int ,int ,char*,char*) ;

int FUNC_14(struct platform_device *VAR_5, struct emac_adapter *VAR_6)
{
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 struct mii_bus *VAR_8;
 int VAR_9;


 VAR_6->mii_bus = VAR_8 = FUNC_2(&VAR_5->dev);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->name = "emac-mdio";
 FUNC_13(VAR_8->id, VAR_2, "%s", VAR_5->name);
 VAR_8->read = VAR_3;
 VAR_8->write = VAR_4;
 VAR_8->parent = &VAR_5->dev;
 VAR_8->priv = VAR_6;

 if (FUNC_4(&VAR_5->dev)) {
  u32 VAR_10;

  VAR_9 = FUNC_6(VAR_8);
  if (VAR_9) {
   FUNC_0(&VAR_5->dev, "could not register mdio bus\n");
   return VAR_9;
  }
  VAR_9 = FUNC_1(&VAR_5->dev, "phy-channel",
            &VAR_10);
  if (VAR_9)



   VAR_6->phydev = FUNC_12(VAR_8);
  else
   VAR_6->phydev = FUNC_5(VAR_8, VAR_10);






  if (VAR_6->phydev)
   FUNC_3(&VAR_6->phydev->mdio.dev);
 } else {
  struct device_node *VAR_11;

  VAR_9 = FUNC_8(VAR_8, VAR_7);
  if (VAR_9) {
   FUNC_0(&VAR_5->dev, "could not register mdio bus\n");
   return VAR_9;
  }

  VAR_11 = FUNC_10(VAR_7, "phy-handle", 0);
  VAR_6->phydev = FUNC_11(VAR_11);
  FUNC_9(VAR_11);
 }

 if (!VAR_6->phydev) {
  FUNC_0(&VAR_5->dev, "could not find external phy\n");
  FUNC_7(VAR_8);
  return -VAR_0;
 }

 return 0;
}
