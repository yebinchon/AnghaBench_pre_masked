
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev {int dev; } ;
struct net_device {int name; } ;
struct atl1c_hw {int hibernate; } ;
struct atl1c_adapter {scalar_t__ link_speed; scalar_t__ link_duplex; int mdio_lock; struct pci_dev* pdev; struct net_device* netdev; struct atl1c_hw hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct atl1c_adapter*) ;
 int VAR_4 ;
 int FUNC_1 (struct atl1c_hw*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct atl1c_hw*,scalar_t__) ;
 int FUNC_3 (struct atl1c_hw*,int ,scalar_t__*) ;
 int FUNC_4 (struct atl1c_adapter*) ;
 scalar_t__ FUNC_5 (struct atl1c_hw*) ;
 int FUNC_6 (struct atl1c_hw*,scalar_t__) ;
 int FUNC_7 (struct atl1c_adapter*) ;
 int FUNC_8 (int *,char*,int ,int ,scalar_t__,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 scalar_t__ FUNC_13 (struct atl1c_adapter*) ;
 scalar_t__ FUNC_14 (struct atl1c_adapter*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct atl1c_adapter *VAR_5)
{
 struct atl1c_hw *VAR_6 = &VAR_5->hw;
 struct net_device *VAR_7 = VAR_5->netdev;
 struct pci_dev *VAR_8 = VAR_5->pdev;
 int VAR_9;
 unsigned long VAR_10;
 u16 VAR_11, VAR_12, VAR_13;

 FUNC_15(&VAR_5->mdio_lock, VAR_10);

 FUNC_3(VAR_6, VAR_2, &VAR_13);
 FUNC_3(VAR_6, VAR_2, &VAR_13);
 FUNC_16(&VAR_5->mdio_lock, VAR_10);

 if ((VAR_13 & VAR_0) == 0) {

  FUNC_10(VAR_7);
  VAR_6->hibernate = 1;
  if (FUNC_5(VAR_6) != 0)
   if (FUNC_13(VAR_5))
    FUNC_9(&VAR_8->dev, "reset mac failed\n");
  FUNC_6(VAR_6, VAR_3);
  FUNC_2(VAR_6, VAR_3);
  FUNC_4(VAR_5);
  FUNC_0(VAR_5);
 } else {

  VAR_6->hibernate = 0;
  FUNC_15(&VAR_5->mdio_lock, VAR_10);
  VAR_9 = FUNC_1(VAR_6, &VAR_11, &VAR_12);
  FUNC_16(&VAR_5->mdio_lock, VAR_10);
  if (FUNC_17(VAR_9))
   return;

  if (VAR_5->link_speed != VAR_11 ||
      VAR_5->link_duplex != VAR_12) {
   VAR_5->link_speed = VAR_11;
   VAR_5->link_duplex = VAR_12;
   FUNC_6(VAR_6, VAR_11);
   FUNC_2(VAR_6, VAR_11);
   FUNC_7(VAR_5);
   if (FUNC_14(VAR_5))
    FUNC_8(&VAR_8->dev,
     "%s: %s NIC Link is Up<%d Mbps %s>\n",
     VAR_4, VAR_7->name,
     VAR_5->link_speed,
     VAR_5->link_duplex == VAR_1 ?
     "Full Duplex" : "Half Duplex");
  }
  if (!FUNC_11(VAR_7))
   FUNC_12(VAR_7);
 }
}
