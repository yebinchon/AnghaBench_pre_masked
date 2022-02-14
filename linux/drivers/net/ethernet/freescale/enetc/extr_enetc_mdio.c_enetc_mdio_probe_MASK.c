
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mii_bus {char* name; int id; struct enetc_mdio_priv* priv; struct device* parent; int write; int read; } ;
struct enetc_pf {struct mii_bus* mdio; TYPE_2__* si; } ;
struct enetc_mdio_priv {int * hw; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_4__ {int hw; TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 char* FUNC_1 (struct device*) ;
 struct mii_bus* FUNC_2 (struct device*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mii_bus*,struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (int ,int ,char*,char*) ;

int FUNC_7(struct enetc_pf *VAR_5)
{
 struct device *VAR_6 = &VAR_5->si->pdev->dev;
 struct enetc_mdio_priv *VAR_7;
 struct device_node *VAR_8;
 struct mii_bus *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_6, sizeof(*VAR_7));
 if (!VAR_9)
  return -VAR_1;

 VAR_9->name = "Freescale ENETC MDIO Bus";
 VAR_9->read = VAR_3;
 VAR_9->write = VAR_4;
 VAR_9->parent = VAR_6;
 VAR_7 = VAR_9->priv;
 VAR_7->hw = &VAR_5->si->hw;
 FUNC_6(VAR_9->id, VAR_2, "%s", FUNC_1(VAR_6));

 VAR_8 = FUNC_3(VAR_6->of_node, "mdio");
 if (!VAR_8) {
  FUNC_0(VAR_6, "MDIO node missing\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(VAR_9, VAR_8);
 if (VAR_10) {
  FUNC_5(VAR_8);
  FUNC_0(VAR_6, "cannot register MDIO bus\n");
  return VAR_10;
 }

 FUNC_5(VAR_8);
 VAR_5->mdio = VAR_9;

 return 0;
}
