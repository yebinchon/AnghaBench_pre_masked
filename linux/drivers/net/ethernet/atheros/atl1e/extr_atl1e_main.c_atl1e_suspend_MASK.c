
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct net_device {int features; } ;
struct atl1e_hw {int phy_configured; scalar_t__ preamble_len; } ;
struct atl1e_adapter {int wol; int netdev; struct atl1e_hw hw; int flags; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct atl1e_hw*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct atl1e_hw*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (struct atl1e_adapter*) ;
 int FUNC_5 (struct atl1e_hw*) ;
 int FUNC_6 (struct atl1e_adapter*) ;
 scalar_t__ FUNC_7 (struct atl1e_hw*) ;
 int FUNC_8 (struct atl1e_hw*,int ,int*) ;
 scalar_t__ FUNC_9 (struct atl1e_hw*,int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,...) ;
 struct atl1e_adapter* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*,int ,int) ;
 struct net_device* FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static int FUNC_22(struct pci_dev *VAR_25, pm_message_t VAR_26)
{
 struct net_device *VAR_27 = FUNC_18(VAR_25);
 struct atl1e_adapter *VAR_28 = FUNC_12(VAR_27);
 struct atl1e_hw *VAR_29 = &VAR_28->hw;
 u32 VAR_30 = 0;
 u32 VAR_31 = 0;
 u32 VAR_32 = 0;
 u16 VAR_33 = 0;
 u16 VAR_34 = 0;
 u16 VAR_35 = 0;
 u32 VAR_36 = VAR_28->wol;
 u32 VAR_37;




 if (FUNC_14(VAR_27)) {
  FUNC_2(FUNC_21(VAR_24, &VAR_28->flags));
  FUNC_4(VAR_28);
 }
 FUNC_13(VAR_27);







 if (VAR_36) {

  FUNC_8(VAR_29, VAR_12, &VAR_34);
  FUNC_8(VAR_29, VAR_12, &VAR_34);

  VAR_33 = VAR_0;

  if ((FUNC_9(VAR_29, VAR_13, 0) != 0) ||
      (FUNC_9(VAR_29,
      VAR_11, VAR_33) != 0) ||
      (FUNC_7(VAR_29)) != 0) {
   FUNC_11(VAR_28->netdev, "set phy register failed\n");
   goto wol_dis;
  }

  VAR_29->phy_configured = 0;


  if (VAR_36 & VAR_3)
   VAR_32 |= VAR_22 | VAR_23;

  if (VAR_36 & VAR_2) {

   if (VAR_34 & VAR_4) {
    for (VAR_37 = 0; VAR_37 < VAR_1; VAR_37++) {
     FUNC_10(100);
     FUNC_8(VAR_29, VAR_12,
       &VAR_34);
     if (VAR_34 & VAR_4)
      break;
    }

    if ((VAR_34 & VAR_4) == 0)
     FUNC_11(VAR_28->netdev,
         "Link may change when suspend\n");
   }
   VAR_32 |= VAR_20 | VAR_21;

   if (FUNC_9(VAR_29, VAR_14, 0x400) != 0) {
    FUNC_11(VAR_28->netdev,
        "read write phy register failed\n");
    goto wol_dis;
   }
  }

  FUNC_8(VAR_29, VAR_15, &VAR_35);

  VAR_31 = VAR_8;

  VAR_31 |= VAR_9 << VAR_10;
  VAR_31 |= (((u32)VAR_28->hw.preamble_len &
     VAR_6) <<
     VAR_7);

  FUNC_3(VAR_27->features, &VAR_31);


  if (VAR_36 & VAR_3)
   VAR_31 |= VAR_5;

  FUNC_11(VAR_28->netdev, "suspend MAC=0x%x\n",
      VAR_31);

  FUNC_1(VAR_29, VAR_19, VAR_32);
  FUNC_1(VAR_29, VAR_17, VAR_31);

  VAR_30 = FUNC_0(VAR_29, VAR_18);
  VAR_30 |= VAR_16;
  FUNC_1(VAR_29, VAR_18, VAR_30);
  FUNC_17(VAR_25, FUNC_15(VAR_25, VAR_26), 1);
  goto suspend_exit;
 }
wol_dis:


 FUNC_1(VAR_29, VAR_19, 0);


 VAR_30 = FUNC_0(VAR_29, VAR_18);
 VAR_30 |= VAR_16;
 FUNC_1(VAR_29, VAR_18, VAR_30);

 FUNC_5(VAR_29);
 VAR_29->phy_configured = 0;

 FUNC_17(VAR_25, FUNC_15(VAR_25, VAR_26), 0);

suspend_exit:

 if (FUNC_14(VAR_27))
  FUNC_6(VAR_28);

 FUNC_16(VAR_25);

 FUNC_20(VAR_25, FUNC_15(VAR_25, VAR_26));

 return 0;
}
