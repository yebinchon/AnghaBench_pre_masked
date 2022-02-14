
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct statistics_block {int dummy; } ;
struct pci_dev {scalar_t__ pm_cap; scalar_t__ subsystem_vendor; int subsystem_device; int revision; int dev; scalar_t__ msi_cap; scalar_t__ msix_cap; } ;
struct net_device {int features; } ;
struct TYPE_3__ {int max_iscsi_conn; } ;
struct TYPE_4__ {int expires; } ;
struct bnx2 {int flags; int phy_flags; scalar_t__ pm_cap; int chip_id; scalar_t__ pcix_cap; int func; int shmem_base; char* fw_version; int wol; int* mac_addr; int tx_quick_cons_trip_int; int tx_quick_cons_trip; int tx_ticks_int; int tx_ticks; int rx_quick_cons_trip_int; int rx_quick_cons_trip; int rx_ticks_int; int rx_ticks; int stats_ticks; int phy_addr; int req_flow_ctrl; int temp_stats_blk; int * regview; int cnic_probe; TYPE_1__ cnic_eth_dev; TYPE_2__ timer; int cmd_ticks; int cmd_ticks_int; int com_ticks; int com_ticks_int; int comp_prod_trip; int comp_prod_trip_int; struct pci_dev* pdev; int phy_port; int current_interval; int tx_ring_size; int reset_task; int cnic_lock; int indirect_lock; int phy_lock; struct net_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bnx2*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct bnx2*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (struct bnx2*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_4 (struct bnx2*,int ) ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_5 (struct bnx2*,int ,int) ;
 int FUNC_6 (int) ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_7 (int *,int ) ;
 int VAR_70 ;
 int FUNC_8 (scalar_t__) ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 scalar_t__ VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*,int *) ;
 scalar_t__ VAR_81 ;
 scalar_t__ VAR_82 ;
 int VAR_83 ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct net_device*) ;
 int VAR_84 ;
 int FUNC_13 (struct bnx2*) ;
 int FUNC_14 (struct bnx2*) ;
 int FUNC_15 (struct bnx2*) ;
 int FUNC_16 (struct bnx2*) ;
 int FUNC_17 (struct bnx2*) ;
 int FUNC_18 (struct bnx2*,int) ;
 int VAR_85 ;
 int FUNC_19 (struct bnx2*) ;
 int FUNC_20 (struct bnx2*,int) ;
 int FUNC_21 (struct bnx2*,int ) ;
 int VAR_86 ;
 int FUNC_22 (int *,char*) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int VAR_87 ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int,int ) ;
 int FUNC_27 (char*,int*,int) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int *) ;
 struct bnx2* FUNC_30 (struct net_device*) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (struct pci_dev*) ;
 int FUNC_33 (struct pci_dev*) ;
 int FUNC_34 (struct pci_dev*) ;
 int FUNC_35 (struct pci_dev*) ;
 scalar_t__ FUNC_36 (struct pci_dev*,int ) ;
 struct pci_dev* FUNC_37 (int ,int ,struct pci_dev*) ;
 int * FUNC_38 (struct pci_dev*,int ,int ) ;
 int FUNC_39 (struct pci_dev*,int *) ;
 int FUNC_40 (struct pci_dev*) ;
 int FUNC_41 (struct pci_dev*) ;
 int FUNC_42 (struct pci_dev*,int ) ;
 int FUNC_43 (struct pci_dev*,int ) ;
 int FUNC_44 (struct pci_dev*) ;
 int FUNC_45 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_46 (struct pci_dev*,int ) ;
 int FUNC_47 (struct pci_dev*) ;
 int FUNC_48 (int *) ;
 int FUNC_49 (char*) ;
 int FUNC_50 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_51(struct pci_dev *VAR_88, struct net_device *VAR_89)
{
 struct bnx2 *VAR_90;
 int VAR_91, VAR_92, VAR_93;
 u32 VAR_94;
 u64 VAR_95, VAR_96;
 int VAR_97;

 FUNC_10(VAR_89, &VAR_88->dev);
 VAR_90 = FUNC_30(VAR_89);

 VAR_90->flags = 0;
 VAR_90->phy_flags = 0;

 VAR_90->temp_stats_blk =
  FUNC_26(sizeof(struct statistics_block), VAR_68);

 if (!VAR_90->temp_stats_blk) {
  VAR_91 = -VAR_65;
  goto err_out;
 }


 VAR_91 = FUNC_34(VAR_88);
 if (VAR_91) {
  FUNC_22(&VAR_88->dev, "Cannot enable PCI device, aborting\n");
  goto err_out;
 }

 if (!(FUNC_43(VAR_88, 0) & VAR_70)) {
  FUNC_22(&VAR_88->dev,
   "Cannot find PCI device base address, aborting\n");
  VAR_91 = -VAR_64;
  goto err_out_disable;
 }

 VAR_91 = FUNC_42(VAR_88, VAR_62);
 if (VAR_91) {
  FUNC_22(&VAR_88->dev, "Cannot obtain PCI resources, aborting\n");
  goto err_out_disable;
 }

 FUNC_47(VAR_88);

 VAR_90->pm_cap = VAR_88->pm_cap;
 if (VAR_90->pm_cap == 0) {
  FUNC_22(&VAR_88->dev,
   "Cannot find power management capability, aborting\n");
  VAR_91 = -VAR_63;
  goto err_out_release;
 }

 VAR_90->dev = VAR_89;
 VAR_90->pdev = VAR_88;

 FUNC_48(&VAR_90->phy_lock);
 FUNC_48(&VAR_90->indirect_lock);



 FUNC_7(&VAR_90->reset_task, VAR_85);

 VAR_90->regview = FUNC_38(VAR_88, 0, FUNC_8(VAR_82 +
        VAR_81 + 1));
 if (!VAR_90->regview) {
  FUNC_22(&VAR_88->dev, "Cannot map register space, aborting\n");
  VAR_91 = -VAR_65;
  goto err_out_release;
 }





 FUNC_5(VAR_90, VAR_39,
  VAR_40 |
  VAR_41);

 VAR_90->chip_id = FUNC_4(VAR_90, VAR_38);

 if (FUNC_0(VAR_90) == VAR_3) {
  if (!FUNC_40(VAR_88)) {
   FUNC_22(&VAR_88->dev, "Not PCIE, aborting\n");
   VAR_91 = -VAR_63;
   goto err_out_unmap;
  }
  VAR_90->flags |= VAR_26;
  if (FUNC_3(VAR_90) == VAR_10)
   VAR_90->flags |= VAR_22;


  VAR_97 = FUNC_35(VAR_88);
  if (!VAR_97)
   VAR_90->flags |= VAR_19;

 } else {
  VAR_90->pcix_cap = FUNC_36(VAR_88, VAR_72);
  if (VAR_90->pcix_cap == 0) {
   FUNC_22(&VAR_88->dev,
    "Cannot find PCIX capability, aborting\n");
   VAR_91 = -VAR_63;
   goto err_out_unmap;
  }
  VAR_90->flags |= VAR_21;
 }

 if (FUNC_0(VAR_90) == VAR_3 &&
     FUNC_3(VAR_90) != VAR_10) {
  if (VAR_88->msix_cap)
   VAR_90->flags |= VAR_23;
 }

 if (FUNC_2(VAR_90) != VAR_5 &&
     FUNC_2(VAR_90) != VAR_6) {
  if (VAR_88->msi_cap)
   VAR_90->flags |= VAR_24;
 }


 if (FUNC_0(VAR_90) == VAR_2)
  VAR_96 = VAR_95 = FUNC_6(40);
 else
  VAR_96 = VAR_95 = FUNC_6(64);


 if (FUNC_46(VAR_88, VAR_95) == 0) {
  VAR_89->features |= VAR_71;
  VAR_91 = FUNC_45(VAR_88, VAR_96);
  if (VAR_91) {
   FUNC_22(&VAR_88->dev,
    "pci_set_consistent_dma_mask failed, aborting\n");
   goto err_out_unmap;
  }
 } else if ((VAR_91 = FUNC_46(VAR_88, FUNC_6(32))) != 0) {
  FUNC_22(&VAR_88->dev, "System does not support DMA, aborting\n");
  goto err_out_unmap;
 }

 if (!(VAR_90->flags & VAR_26))
  FUNC_14(VAR_90);


 if (FUNC_2(VAR_90) == VAR_5) {
  VAR_94 = FUNC_4(VAR_90, VAR_73);
  VAR_94 &= ~(VAR_75 | VAR_74);
  FUNC_5(VAR_90, VAR_73, VAR_94);
 } else if ((FUNC_2(VAR_90) == VAR_6) &&
  !(VAR_90->flags & VAR_27)) {

  FUNC_22(&VAR_88->dev,
   "5706 A1 can only be used in a PCIX bus, aborting\n");
  goto err_out_unmap;
 }

 FUNC_16(VAR_90);

 VAR_94 = FUNC_18(VAR_90, VAR_58);

 if (FUNC_18(VAR_90, VAR_35) & VAR_36)
  VAR_90->func = 1;

 if ((VAR_94 & VAR_60) ==
     VAR_59) {
  u32 VAR_98 = VAR_90->func << 2;

  VAR_90->shmem_base = FUNC_18(VAR_90, VAR_57 + VAR_98);
 } else
  VAR_90->shmem_base = VAR_69;




 VAR_94 = FUNC_21(VAR_90, VAR_16);

 if ((VAR_94 & VAR_18) !=
     VAR_17) {
  FUNC_22(&VAR_88->dev, "Firmware not running, aborting\n");
  VAR_91 = -VAR_64;
  goto err_out_unmap;
 }

 FUNC_17(VAR_90);

 VAR_93 = FUNC_49(VAR_90->fw_version);
 VAR_94 = FUNC_21(VAR_90, VAR_15);
 for (VAR_92 = 0; VAR_92 < 3 && VAR_93 < 24; VAR_92++) {
  u8 VAR_99, VAR_100, VAR_101;

  if (VAR_92 == 0) {
   VAR_90->fw_version[VAR_93++] = 'b';
   VAR_90->fw_version[VAR_93++] = 'c';
   VAR_90->fw_version[VAR_93++] = ' ';
  }
  VAR_99 = (u8) (VAR_94 >> (24 - (VAR_92 * 8)));
  for (VAR_100 = 100, VAR_101 = 1; VAR_100 >= 1; VAR_99 %= VAR_100, VAR_100 /= 10) {
   if (VAR_99 >= VAR_100 || !VAR_101 || VAR_100 == 1) {
    VAR_90->fw_version[VAR_93++] = (VAR_99 / VAR_100) + '0';
    VAR_101 = 0;
   }
  }
  if (VAR_92 != 2)
   VAR_90->fw_version[VAR_93++] = '.';
 }
 VAR_94 = FUNC_21(VAR_90, VAR_49);
 if (VAR_94 & VAR_51)
  VAR_90->wol = 1;

 if (VAR_94 & VAR_50) {
  VAR_90->flags |= VAR_20;

  for (VAR_92 = 0; VAR_92 < 30; VAR_92++) {
   VAR_94 = FUNC_21(VAR_90, VAR_0);
   if (VAR_94 & VAR_12)
    break;
   FUNC_28(10);
  }
 }
 VAR_94 = FUNC_21(VAR_90, VAR_0);
 VAR_94 &= VAR_12;
 if (VAR_94 != VAR_14 &&
     VAR_94 != VAR_13) {
  u32 VAR_102 = FUNC_21(VAR_90, VAR_37);

  if (VAR_93 < 32)
   VAR_90->fw_version[VAR_93++] = ' ';
  for (VAR_92 = 0; VAR_92 < 3 && VAR_93 < 28; VAR_92++) {
   VAR_94 = FUNC_18(VAR_90, VAR_102 + VAR_92 * 4);
   VAR_94 = FUNC_11(VAR_94);
   FUNC_27(&VAR_90->fw_version[VAR_93], &VAR_94, 4);
   VAR_93 += 4;
  }
 }

 VAR_94 = FUNC_21(VAR_90, VAR_53);
 VAR_90->mac_addr[0] = (u8) (VAR_94 >> 8);
 VAR_90->mac_addr[1] = (u8) VAR_94;

 VAR_94 = FUNC_21(VAR_90, VAR_52);
 VAR_90->mac_addr[2] = (u8) (VAR_94 >> 24);
 VAR_90->mac_addr[3] = (u8) (VAR_94 >> 16);
 VAR_90->mac_addr[4] = (u8) (VAR_94 >> 8);
 VAR_90->mac_addr[5] = (u8) VAR_94;

 VAR_90->tx_ring_size = VAR_34;
 FUNC_20(VAR_90, 255);

 VAR_90->tx_quick_cons_trip_int = 2;
 VAR_90->tx_quick_cons_trip = 20;
 VAR_90->tx_ticks_int = 18;
 VAR_90->tx_ticks = 80;

 VAR_90->rx_quick_cons_trip_int = 2;
 VAR_90->rx_quick_cons_trip = 12;
 VAR_90->rx_ticks_int = 18;
 VAR_90->rx_ticks = 18;

 VAR_90->stats_ticks = VAR_83 & VAR_28;

 VAR_90->current_interval = VAR_61;

 VAR_90->phy_addr = 1;


 VAR_91 = FUNC_12(VAR_89);
 if (VAR_91)
  goto err_out_unmap;


 if (FUNC_0(VAR_90) == VAR_3)
  FUNC_13(VAR_90);
 else if (FUNC_1(VAR_90) & VAR_4)
  VAR_90->phy_flags |= VAR_48;

 VAR_90->phy_port = VAR_80;
 if (VAR_90->phy_flags & VAR_48) {
  VAR_90->phy_port = VAR_79;
  VAR_94 = FUNC_21(VAR_90, VAR_54);
  if (!(VAR_94 & VAR_55)) {
   VAR_90->flags |= VAR_25;
   VAR_90->wol = 0;
  }
  if (FUNC_0(VAR_90) == VAR_1) {




   if (VAR_88->subsystem_vendor == VAR_78 &&
       VAR_88->subsystem_device == 0x310c)
    VAR_90->phy_flags |= VAR_47;
  } else {
   VAR_90->phy_addr = 2;
   if (VAR_94 & VAR_56)
    VAR_90->phy_flags |= VAR_44;
  }
 } else if (FUNC_0(VAR_90) == VAR_1 ||
     FUNC_0(VAR_90) == VAR_2)
  VAR_90->phy_flags |= VAR_45;
 else if (FUNC_0(VAR_90) == VAR_3 &&
   (FUNC_3(VAR_90) == VAR_10 ||
    FUNC_3(VAR_90) == VAR_11))
  VAR_90->phy_flags |= VAR_46;

 FUNC_15(VAR_90);

 if ((FUNC_2(VAR_90) == VAR_7) ||
     (FUNC_2(VAR_90) == VAR_8) ||
     (FUNC_2(VAR_90) == VAR_9) ||
     !(FUNC_4(VAR_90, VAR_42) & VAR_43)) {
  VAR_90->flags |= VAR_25;
  VAR_90->wol = 0;
 }

 if (VAR_90->flags & VAR_25)
  FUNC_23(&VAR_90->pdev->dev, 0);
 else
  FUNC_24(&VAR_90->pdev->dev, VAR_90->wol);

 if (FUNC_2(VAR_90) == VAR_5) {
  VAR_90->tx_quick_cons_trip_int =
   VAR_90->tx_quick_cons_trip;
  VAR_90->tx_ticks_int = VAR_90->tx_ticks;
  VAR_90->rx_quick_cons_trip_int =
   VAR_90->rx_quick_cons_trip;
  VAR_90->rx_ticks_int = VAR_90->rx_ticks;
  VAR_90->comp_prod_trip_int = VAR_90->comp_prod_trip;
  VAR_90->com_ticks_int = VAR_90->com_ticks;
  VAR_90->cmd_ticks_int = VAR_90->cmd_ticks;
 }
 if (FUNC_0(VAR_90) == VAR_1 && VAR_87 == 0) {
  struct pci_dev *VAR_103 = ((void*)0);

  while ((VAR_103 = FUNC_37(VAR_77,
        VAR_76,
        VAR_103))) {

   if (VAR_103->revision >= 0x10 &&
       VAR_103->revision <= 0x13) {
    VAR_87 = 1;
    FUNC_31(VAR_103);
    break;
   }
  }
 }

 FUNC_19(VAR_90);
 VAR_90->req_flow_ctrl = VAR_66 | VAR_67;

 FUNC_50(&VAR_90->timer, VAR_86, 0);
 VAR_90->timer.expires = FUNC_9(VAR_61);
 FUNC_44(VAR_88);

 return 0;

err_out_unmap:
 if (VAR_90->flags & VAR_19) {
  FUNC_33(VAR_88);
  VAR_90->flags &= ~VAR_19;
 }

 FUNC_39(VAR_88, VAR_90->regview);
 VAR_90->regview = ((void*)0);

err_out_release:
 FUNC_41(VAR_88);

err_out_disable:
 FUNC_32(VAR_88);

err_out:
 FUNC_25(VAR_90->temp_stats_blk);

 return VAR_91;
}
