
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mii_bus {char* name; int phy_mask; struct device* parent; struct ixgbe_adapter* priv; int id; int * write; int * read; } ;
struct TYPE_5__ {int mode_support; } ;
struct TYPE_6__ {TYPE_2__ mdio; } ;
struct ixgbe_hw {int device_id; TYPE_3__ phy; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {struct mii_bus* mii_bus; TYPE_1__* netdev; struct pci_dev* pdev; } ;
struct device {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mii_bus* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,struct mii_bus*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct mii_bus*) ;
 char* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ,int ,char*,char*,char*) ;

s32 FUNC_7(struct ixgbe_hw *VAR_10)
{
 struct ixgbe_adapter *VAR_11 = VAR_10->back;
 struct pci_dev *VAR_12 = VAR_11->pdev;
 struct device *VAR_13 = &VAR_11->netdev->dev;
 struct mii_bus *VAR_14;
 int VAR_15 = -VAR_0;

 VAR_14 = FUNC_1(VAR_13);
 if (!VAR_14)
  return -VAR_1;

 switch (VAR_10->device_id) {

 case 133:
 case 132:
 case 130:
 case 129:
 case 128:
 case 136:
 case 131:
 case 135:
 case 134:
  if (!FUNC_3(VAR_10))
   goto ixgbe_no_mii_bus;
  VAR_14->read = &VAR_8;
  VAR_14->write = &VAR_9;
  break;
 default:
  VAR_14->read = &VAR_6;
  VAR_14->write = &VAR_7;
  break;
 }


 FUNC_6(VAR_14->id, VAR_4, "%s-mdio-%s", VAR_5,
   FUNC_5(VAR_12));

 VAR_14->name = "ixgbe-mdio";
 VAR_14->priv = VAR_11;
 VAR_14->parent = VAR_13;
 VAR_14->phy_mask = FUNC_0(31, 0);





 VAR_10->phy.mdio.mode_support = VAR_3 | VAR_2;

 VAR_15 = FUNC_4(VAR_14);
 if (!VAR_15) {
  VAR_11->mii_bus = VAR_14;
  return 0;
 }

ixgbe_no_mii_bus:
 FUNC_2(VAR_13, VAR_14);
 return VAR_15;
}
