
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; int dev_flags; int pm_cap; } ;
struct net_device {int hw_features; int dev_addr; int perm_addr; int addr_len; int watchdog_timeo; int irq; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_2__ {int mode_support; int mdio_write; int mdio_read; struct net_device* dev; scalar_t__ mmds; scalar_t__ prtad; } ;
struct alx_hw {int hw_addr; TYPE_1__ mdio; int perm_addr; int mac_addr; int flowctrl; int adv_cfg; struct pci_dev* pdev; int mdio_lock; } ;
struct alx_priv {int msg_enable; int reset_wk; int link_check_wk; struct alx_hw hw; struct net_device* dev; int stats_lock; int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
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
 int VAR_20 ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_4 (struct alx_hw*,int ) ;
 int FUNC_5 (struct alx_hw*) ;
 int FUNC_6 (struct alx_priv*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_7 (struct alx_hw*) ;
 int VAR_27 ;
 int FUNC_8 (struct alx_hw*) ;
 int FUNC_9 (struct alx_hw*) ;
 int FUNC_10 (struct alx_hw*) ;
 int FUNC_11 (struct alx_hw*,int ,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char*,...) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (struct net_device*,char*,int ) ;
 struct alx_priv* FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*,int ) ;
 int FUNC_28 (struct pci_dev*) ;
 int FUNC_29 (struct pci_dev*,int ) ;
 int FUNC_30 (struct pci_dev*,struct alx_priv*) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (struct net_device*) ;
 int FUNC_33 (int *) ;

__attribute__((used)) static int FUNC_34(struct pci_dev *VAR_28, const struct pci_device_id *VAR_29)
{
 struct net_device *VAR_30;
 struct alx_priv *VAR_31;
 struct alx_hw *VAR_32;
 bool VAR_33;
 int VAR_34;

 VAR_34 = FUNC_24(VAR_28);
 if (VAR_34)
  return VAR_34;





 if (!FUNC_15(&VAR_28->dev, FUNC_0(64))) {
  FUNC_12(&VAR_28->dev, "DMA to 64-BIT addresses\n");
 } else {
  VAR_34 = FUNC_15(&VAR_28->dev, FUNC_0(32));
  if (VAR_34) {
   FUNC_13(&VAR_28->dev, "No usable DMA config, aborting\n");
   goto out_pci_disable;
  }
 }

 VAR_34 = FUNC_29(VAR_28, VAR_21);
 if (VAR_34) {
  FUNC_13(&VAR_28->dev,
   "pci_request_mem_regions failed\n");
  goto out_pci_disable;
 }

 FUNC_25(VAR_28);
 FUNC_31(VAR_28);

 if (!VAR_28->pm_cap) {
  FUNC_13(&VAR_28->dev,
   "Can't find power management capability, aborting\n");
  VAR_34 = -VAR_3;
  goto out_pci_release;
 }

 VAR_30 = FUNC_3(sizeof(*VAR_31),
        VAR_1, 1);
 if (!VAR_30) {
  VAR_34 = -VAR_4;
  goto out_pci_release;
 }

 FUNC_2(VAR_30, &VAR_28->dev);
 VAR_31 = FUNC_21(VAR_30);
 FUNC_33(&VAR_31->hw.mdio_lock);
 FUNC_33(&VAR_31->irq_lock);
 FUNC_33(&VAR_31->stats_lock);
 VAR_31->dev = VAR_30;
 VAR_31->hw.pdev = VAR_28;
 VAR_31->msg_enable = VAR_16 | VAR_14 | VAR_15 |
     VAR_18 | VAR_17 | VAR_19;
 VAR_32 = &VAR_31->hw;
 FUNC_30(VAR_28, VAR_31);

 VAR_32->hw_addr = FUNC_26(VAR_28, 0);
 if (!VAR_32->hw_addr) {
  FUNC_13(&VAR_28->dev, "cannot map device registers\n");
  VAR_34 = -VAR_3;
  goto out_free_netdev;
 }

 VAR_30->netdev_ops = &VAR_26;
 VAR_30->ethtool_ops = &VAR_22;
 VAR_30->irq = FUNC_27(VAR_28, 0);
 VAR_30->watchdog_timeo = VAR_2;

 if (VAR_29->driver_data & VAR_0)
  VAR_28->dev_flags |= VAR_20;

 VAR_34 = FUNC_6(VAR_31);
 if (VAR_34) {
  FUNC_13(&VAR_28->dev, "net device private data init failed\n");
  goto out_unmap;
 }

 FUNC_9(VAR_32);

 VAR_33 = FUNC_7(VAR_32);

 if (!VAR_33)
  FUNC_10(VAR_32);

 VAR_34 = FUNC_8(VAR_32);
 if (VAR_34) {
  FUNC_13(&VAR_28->dev, "MAC Reset failed, error = %d\n", VAR_34);
  goto out_unmap;
 }


 if (!VAR_33) {
  VAR_34 = FUNC_11(VAR_32, VAR_32->adv_cfg, VAR_32->flowctrl);
  if (VAR_34) {
   FUNC_13(&VAR_28->dev,
    "failed to configure PHY speed/duplex (err=%d)\n",
    VAR_34);
   goto out_unmap;
  }
 }

 VAR_30->hw_features = VAR_11 |
         VAR_9 |
         VAR_10 |
         VAR_12 |
         VAR_13;

 if (FUNC_4(VAR_32, VAR_32->perm_addr)) {
  FUNC_14(&VAR_28->dev,
    "Invalid permanent address programmed, using random one\n");
  FUNC_16(VAR_30);
  FUNC_19(VAR_32->perm_addr, VAR_30->dev_addr, VAR_30->addr_len);
 }

 FUNC_19(VAR_32->mac_addr, VAR_32->perm_addr, VAR_5);
 FUNC_19(VAR_30->dev_addr, VAR_32->mac_addr, VAR_5);
 FUNC_19(VAR_30->perm_addr, VAR_32->perm_addr, VAR_5);

 VAR_32->mdio.prtad = 0;
 VAR_32->mdio.mmds = 0;
 VAR_32->mdio.dev = VAR_30;
 VAR_32->mdio.mode_support = VAR_8 |
    VAR_7 |
    VAR_6;
 VAR_32->mdio.mdio_read = VAR_24;
 VAR_32->mdio.mdio_write = VAR_25;

 if (!FUNC_5(VAR_32)) {
  FUNC_13(&VAR_28->dev, "failed to identify PHY\n");
  VAR_34 = -VAR_3;
  goto out_unmap;
 }

 FUNC_1(&VAR_31->link_check_wk, VAR_23);
 FUNC_1(&VAR_31->reset_wk, VAR_27);
 FUNC_22(VAR_30);

 VAR_34 = FUNC_32(VAR_30);
 if (VAR_34) {
  FUNC_13(&VAR_28->dev, "register netdevice failed\n");
  goto out_unmap;
 }

 FUNC_20(VAR_30,
      "Qualcomm Atheros AR816x/AR817x Ethernet [%pM]\n",
      VAR_30->dev_addr);

 return 0;

out_unmap:
 FUNC_18(VAR_32->hw_addr);
out_free_netdev:
 FUNC_17(VAR_30);
out_pci_release:
 FUNC_28(VAR_28);
out_pci_disable:
 FUNC_23(VAR_28);
 return VAR_34;
}
