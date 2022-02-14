
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct mii_bus {char* name; int phy_mask; int * parent; struct hclge_dev* priv; int id; int write; int read; } ;
struct hclge_mac {scalar_t__ phy_addr; struct mii_bus* mdio_bus; struct phy_device* phydev; } ;
struct TYPE_3__ {struct hclge_mac mac; } ;
struct hclge_dev {TYPE_2__* pdev; TYPE_1__ hw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *) ;
 struct mii_bus* FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 struct phy_device* FUNC_4 (struct mii_bus*,int) ;
 int FUNC_5 (struct mii_bus*) ;
 int FUNC_6 (struct mii_bus*) ;
 int FUNC_7 (int ,int ,char*,char*,char*) ;

int FUNC_8(struct hclge_dev *VAR_8)
{


 struct hclge_mac *VAR_9 = &VAR_8->hw.mac;
 struct phy_device *VAR_10;
 struct mii_bus *VAR_11;
 int VAR_12;

 if (VAR_8->hw.mac.phy_addr == 255) {
  FUNC_1(&VAR_8->pdev->dev,
    "no phy device is connected to mdio bus\n");
  return 0;
 } else if (VAR_8->hw.mac.phy_addr >= VAR_5) {
  FUNC_0(&VAR_8->pdev->dev, "phy_addr(%d) is too large.\n",
   VAR_8->hw.mac.phy_addr);
  return -VAR_0;
 }

 VAR_11 = FUNC_3(&VAR_8->pdev->dev);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->name = "hisilicon MII bus";
 VAR_11->read = VAR_6;
 VAR_11->write = VAR_7;
 FUNC_7(VAR_11->id, VAR_3, "%s-%s", "mii",
   FUNC_2(&VAR_8->pdev->dev));

 VAR_11->parent = &VAR_8->pdev->dev;
 VAR_11->priv = VAR_8;
 VAR_11->phy_mask = ~(1 << VAR_9->phy_addr);
 VAR_12 = FUNC_5(VAR_11);
 if (VAR_12) {
  FUNC_0(VAR_11->parent,
   "Failed to register MDIO bus ret = %#x\n", VAR_12);
  return VAR_12;
 }

 VAR_10 = FUNC_4(VAR_11, VAR_9->phy_addr);
 if (!VAR_10) {
  FUNC_0(VAR_11->parent, "Failed to get phy device\n");
  FUNC_6(VAR_11);
  return -VAR_1;
 }

 VAR_9->phydev = VAR_10;
 VAR_9->mdio_bus = VAR_11;

 return 0;
}
