
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_pf {int dummy; } ;
struct enetc_ndev_priv {struct device_node* phy_node; TYPE_1__* dev; scalar_t__ if_mode; int si; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct enetc_pf*) ;
 int FUNC_2 (struct enetc_pf*) ;
 struct enetc_pf* FUNC_3 (int ) ;
 struct device_node* FUNC_4 (struct device_node*,char*) ;
 scalar_t__ FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*,char*,int ) ;
 int FUNC_9 (struct device_node*) ;
 scalar_t__ FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*) ;

__attribute__((used)) static int FUNC_12(struct enetc_ndev_priv *VAR_2)
{
 struct enetc_pf *VAR_3 = FUNC_3(VAR_2->si);
 struct device_node *VAR_4 = VAR_2->dev->of_node;
 struct device_node *VAR_5;
 int VAR_6;

 if (!VAR_4) {
  FUNC_0(VAR_2->dev, "missing ENETC port node\n");
  return -VAR_1;
 }

 VAR_2->phy_node = FUNC_8(VAR_4, "phy-handle", 0);
 if (!VAR_2->phy_node) {
  if (!FUNC_10(VAR_4)) {
   FUNC_0(VAR_2->dev, "PHY not specified\n");
   return -VAR_1;
  }

  VAR_6 = FUNC_11(VAR_4);
  if (VAR_6 < 0) {
   FUNC_0(VAR_2->dev, "fixed link registration failed\n");
   return VAR_6;
  }

  VAR_2->phy_node = FUNC_6(VAR_4);
 }

 VAR_5 = FUNC_4(VAR_4, "mdio");
 if (VAR_5) {
  FUNC_7(VAR_5);
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6) {
   FUNC_7(VAR_2->phy_node);
   return VAR_6;
  }
 }

 VAR_2->if_mode = FUNC_5(VAR_4);
 if ((int)VAR_2->if_mode < 0) {
  FUNC_0(VAR_2->dev, "missing phy type\n");
  FUNC_7(VAR_2->phy_node);
  if (FUNC_10(VAR_4))
   FUNC_9(VAR_4);
  else
   FUNC_2(VAR_3);

  return -VAR_0;
 }

 return 0;
}
