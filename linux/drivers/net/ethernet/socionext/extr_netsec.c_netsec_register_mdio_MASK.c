
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netsec_priv {int dev; int * phydev; struct mii_bus* mii_bus; } ;
struct mii_bus {char* name; int phy_mask; int parent; int write; int read; struct netsec_priv* priv; int id; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (int ) ;
 struct device_node* FUNC_5 (int ) ;
 struct mii_bus* FUNC_6 (int ) ;
 int * FUNC_7 (struct mii_bus*,int ,int) ;
 int FUNC_8 (struct mii_bus*) ;
 int FUNC_9 (struct mii_bus*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct device_node* FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct mii_bus*,struct device_node*) ;
 int FUNC_12 (struct device_node*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_15(struct netsec_priv *VAR_5, u32 VAR_6)
{
 struct mii_bus *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(VAR_5->dev);
 if (!VAR_7)
  return -VAR_1;

 FUNC_14(VAR_7->id, VAR_2, "%s", FUNC_4(VAR_5->dev));
 VAR_7->priv = VAR_5;
 VAR_7->name = "SNI NETSEC MDIO";
 VAR_7->read = VAR_3;
 VAR_7->write = VAR_4;
 VAR_7->parent = VAR_5->dev;
 VAR_5->mii_bus = VAR_7;

 if (FUNC_5(VAR_5->dev)) {
  struct device_node *VAR_9, *VAR_10 = FUNC_5(VAR_5->dev);

  VAR_9 = FUNC_10(VAR_10, "mdio");
  if (VAR_9) {
   VAR_10 = VAR_9;
  } else {



   FUNC_3(VAR_5->dev, "Upgrade f/w for mdio subnode!\n");
  }

  VAR_8 = FUNC_11(VAR_7, VAR_10);
  FUNC_12(VAR_9);

  if (VAR_8) {
   FUNC_2(VAR_5->dev, "mdiobus register err(%d)\n", VAR_8);
   return VAR_8;
  }
 } else {

  VAR_7->phy_mask = ~0;
  VAR_8 = FUNC_8(VAR_7);
  if (VAR_8) {
   FUNC_2(VAR_5->dev, "mdiobus register err(%d)\n", VAR_8);
   return VAR_8;
  }

  VAR_5->phydev = FUNC_7(VAR_7, VAR_6, 0);
  if (FUNC_0(VAR_5->phydev)) {
   VAR_8 = FUNC_1(VAR_5->phydev);
   FUNC_2(VAR_5->dev, "get_phy_device err(%d)\n", VAR_8);
   VAR_5->phydev = ((void*)0);
   return -VAR_0;
  }

  VAR_8 = FUNC_13(VAR_5->phydev);
  if (VAR_8) {
   FUNC_9(VAR_7);
   FUNC_2(VAR_5->dev,
    "phy_device_register err(%d)\n", VAR_8);
  }
 }

 return VAR_8;
}
