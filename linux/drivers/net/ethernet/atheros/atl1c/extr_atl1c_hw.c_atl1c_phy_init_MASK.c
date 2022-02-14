
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct atl1c_hw {int media_type; int phy_configured; int phy_id2; int phy_id1; struct atl1c_adapter* adapter; } ;
struct atl1c_adapter {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct atl1c_hw*) ;
 scalar_t__ FUNC_1 (struct atl1c_hw*,int ,int *) ;
 int FUNC_2 (struct atl1c_hw*,int ,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct atl1c_adapter*) ;

int FUNC_5(struct atl1c_hw *VAR_8)
{
 struct atl1c_adapter *VAR_9 = VAR_8->adapter;
 struct pci_dev *VAR_10 = VAR_9->pdev;
 int VAR_11;
 u16 VAR_12 = VAR_3;

 if ((FUNC_1(VAR_8, VAR_6, &VAR_8->phy_id1) != 0) ||
  (FUNC_1(VAR_8, VAR_7, &VAR_8->phy_id2) != 0)) {
  FUNC_3(&VAR_10->dev, "Error get phy ID\n");
  return -1;
 }
 switch (VAR_8->media_type) {
 case 128:
  VAR_11 = FUNC_0(VAR_8);
  if (VAR_11) {
   if (FUNC_4(VAR_9))
    FUNC_3(&VAR_10->dev,
     "Error Setting up Auto-Negotiation\n");
   return VAR_11;
  }
  VAR_12 |= VAR_0 | VAR_1;
  break;
 case 132:
  VAR_12 |= VAR_4 | VAR_2;
  break;
 case 131:
  VAR_12 |= VAR_4;
  break;
 case 130:
  VAR_12 |= VAR_2;
  break;
 case 129:
  break;
 default:
  if (FUNC_4(VAR_9))
   FUNC_3(&VAR_10->dev, "Wrong Media type %d\n",
    VAR_8->media_type);
  return -1;
 }

 VAR_11 = FUNC_2(VAR_8, VAR_5, VAR_12);
 if (VAR_11)
  return VAR_11;
 VAR_8->phy_configured = 1;

 return 0;
}
