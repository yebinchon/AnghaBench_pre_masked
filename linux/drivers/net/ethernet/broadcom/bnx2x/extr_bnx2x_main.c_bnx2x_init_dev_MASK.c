
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int needs_freset; int enable_cnt; int devfn; int dev; int irq; int pm_cap; } ;
struct net_device {int hw_features; int hw_enc_features; int gso_partial_features; int vlan_features; int features; int max_mtu; int min_mtu; int * dcbnl_ops; int priv_flags; int * netdev_ops; int watchdog_timeo; int irq; int mem_end; int mem_start; int base_addr; } ;
struct TYPE_2__ {int mode_support; int mdio_write; int mdio_read; struct net_device* dev; scalar_t__ mmds; int prtad; } ;
struct bnx2x {int pf_num; int accept_any_vlan; TYPE_1__ mdio; int flags; struct pci_dev* pdev; int regview; struct net_device* dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
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
 int FUNC_2 (int ) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct net_device*,int *) ;
 int VAR_54 ;
 int FUNC_5 (int *) ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,struct net_device*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ,int*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*,int) ;
 int FUNC_19 (struct pci_dev*,int ) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*,int ,int ) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static int FUNC_24(struct bnx2x *VAR_59, struct pci_dev *VAR_60,
     struct net_device *VAR_61, unsigned long VAR_62)
{
 int VAR_63;
 u32 VAR_64;
 bool VAR_65 = (VAR_62 == VAR_1 ||
       VAR_62 == VAR_2 ||
       VAR_62 == VAR_3);

 FUNC_4(VAR_61, &VAR_60->dev);

 VAR_59->dev = VAR_61;
 VAR_59->pdev = VAR_60;

 VAR_63 = FUNC_10(VAR_60);
 if (VAR_63) {
  FUNC_8(&VAR_59->pdev->dev,
   "Cannot enable PCI device, aborting\n");
  goto err_out;
 }

 if (!(FUNC_18(VAR_60, 0) & VAR_11)) {
  FUNC_8(&VAR_59->pdev->dev,
   "Cannot find PCI device base address, aborting\n");
  VAR_63 = -VAR_6;
  goto err_out_disable;
 }

 if (FUNC_1(VAR_59) && !(FUNC_18(VAR_60, 2) & VAR_11)) {
  FUNC_8(&VAR_59->pdev->dev, "Cannot find second PCI device base address, aborting\n");
  VAR_63 = -VAR_6;
  goto err_out_disable;
 }

 FUNC_14(VAR_60, VAR_43, &VAR_64);
 if ((VAR_64 & VAR_42) ==
     VAR_41) {
  FUNC_23("PCI device error, probably due to fan failure, aborting\n");
  VAR_63 = -VAR_6;
  goto err_out_disable;
 }

 if (FUNC_5(&VAR_60->enable_cnt) == 1) {
  VAR_63 = FUNC_16(VAR_60, VAR_4);
  if (VAR_63) {
   FUNC_8(&VAR_59->pdev->dev,
    "Cannot obtain PCI resources, aborting\n");
   goto err_out_disable;
  }

  FUNC_21(VAR_60);
  FUNC_20(VAR_60);
 }

 if (FUNC_1(VAR_59)) {
  if (!VAR_60->pm_cap) {
   FUNC_8(&VAR_59->pdev->dev,
    "Cannot find power management capability, aborting\n");
   VAR_63 = -VAR_5;
   goto err_out_release;
  }
 }

 if (!FUNC_13(VAR_60)) {
  FUNC_8(&VAR_59->pdev->dev, "Not PCI Express, aborting\n");
  VAR_63 = -VAR_5;
  goto err_out_release;
 }

 VAR_63 = FUNC_6(VAR_59);
 if (VAR_63)
  goto err_out_release;

 VAR_61->mem_start = FUNC_19(VAR_60, 0);
 VAR_61->base_addr = VAR_61->mem_start;
 VAR_61->mem_end = FUNC_17(VAR_60, 0);

 VAR_61->irq = VAR_60->irq;

 VAR_59->regview = FUNC_12(VAR_60, 0);
 if (!VAR_59->regview) {
  FUNC_8(&VAR_59->pdev->dev,
   "Cannot map register space, aborting\n");
  VAR_63 = -VAR_7;
  goto err_out_release;
 }






 if (VAR_65) {
  VAR_59->pf_num = FUNC_2(VAR_60->devfn);
 } else {

  FUNC_14(VAR_59->pdev,
          VAR_40, &VAR_64);
  VAR_59->pf_num = (u8)((VAR_64 & VAR_15) >>
      VAR_16);
 }
 FUNC_0("me reg PF num: %d\n", VAR_59->pf_num);


 FUNC_22(VAR_59->pdev, VAR_39,
          VAR_44);


 VAR_60->needs_freset = 1;


 VAR_63 = FUNC_11(VAR_60);
 if (!VAR_63)
  VAR_59->flags |= VAR_0;
 else
  FUNC_0("Failed To configure PCIe AER [%d]\n", VAR_63);





 if (FUNC_1(VAR_59)) {
  FUNC_3(VAR_59, VAR_46, 0);
  FUNC_3(VAR_59, VAR_48, 0);
  FUNC_3(VAR_59, VAR_50, 0);
  FUNC_3(VAR_59, VAR_52, 0);

  if (VAR_65) {
   FUNC_3(VAR_59, VAR_47, 0);
   FUNC_3(VAR_59, VAR_49, 0);
   FUNC_3(VAR_59, VAR_51, 0);
   FUNC_3(VAR_59, VAR_53, 0);
  }





  if (!VAR_65)
   FUNC_3(VAR_59,
          VAR_45, 1);
 }

 VAR_61->watchdog_timeo = VAR_54;

 VAR_61->netdev_ops = &VAR_58;
 FUNC_7(VAR_59, VAR_61);

 VAR_61->priv_flags |= VAR_10;

 VAR_61->hw_features = VAR_35 | VAR_30 | VAR_29 |
  VAR_36 | VAR_38 | VAR_37 |
  VAR_33 | VAR_32 | VAR_17 | VAR_18 |
  VAR_34 | VAR_28;
 if (!VAR_65) {
  VAR_61->hw_features |= VAR_19 | VAR_20 |
        VAR_21 |
        VAR_23 |
        VAR_24 |
        VAR_22;

  VAR_61->hw_enc_features =
   VAR_30 | VAR_29 | VAR_35 |
   VAR_36 | VAR_38 | VAR_37 |
   VAR_21 |
   VAR_19 | VAR_20 |
   VAR_23 | VAR_24 |
   VAR_22;

  VAR_61->gso_partial_features = VAR_20 |
         VAR_24;
 }

 VAR_61->vlan_features = VAR_35 | VAR_30 | VAR_29 |
  VAR_36 | VAR_38 | VAR_37 | VAR_25;

 if (FUNC_1(VAR_59)) {
  if (VAR_65)
   VAR_59->accept_any_vlan = 1;
  else
   VAR_61->hw_features |= VAR_26;
 }




 VAR_61->features |= VAR_61->hw_features | VAR_27;
 VAR_61->features |= VAR_25;
 if (VAR_61->features & VAR_32)
  VAR_61->features &= ~VAR_18;


 VAR_61->hw_features |= VAR_31;






 VAR_61->min_mtu = VAR_9;
 VAR_61->max_mtu = VAR_8;


 VAR_59->mdio.prtad = VAR_13;
 VAR_59->mdio.mmds = 0;
 VAR_59->mdio.mode_support = VAR_14 | VAR_12;
 VAR_59->mdio.dev = VAR_61;
 VAR_59->mdio.mdio_read = VAR_56;
 VAR_59->mdio.mdio_write = VAR_57;

 return 0;

err_out_release:
 if (FUNC_5(&VAR_60->enable_cnt) == 1)
  FUNC_15(VAR_60);

err_out_disable:
 FUNC_9(VAR_60);

err_out:
 return VAR_63;
}
