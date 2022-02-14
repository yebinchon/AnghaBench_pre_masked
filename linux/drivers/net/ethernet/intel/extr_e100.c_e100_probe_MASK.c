
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; int dev; } ;
struct TYPE_3__ {int max; } ;
struct TYPE_4__ {TYPE_1__ cbs; } ;
struct nic {int msg_enable; scalar_t__ mac; int* eeprom; int csr; struct net_device* netdev; int cbs_pool; TYPE_2__ params; struct pci_dev* pdev; int flags; int tx_timeout_task; int watchdog; int mdio_lock; int cmd_lock; int cb_lock; int mdio_ctrl; int napi; } ;
struct net_device {int dev_addr; int name; int features; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; int hw_features; int priv_flags; } ;
struct csr {int dummy; } ;
struct cb {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int) ;
 int VAR_12 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int *,int,int,int ) ;
 int FUNC_6 (struct nic*) ;
 int FUNC_7 (struct nic*) ;
 int VAR_13 ;
 int FUNC_8 (struct nic*) ;
 int FUNC_9 (struct nic*) ;
 int FUNC_10 (struct nic*) ;
 int VAR_14 ;
 int FUNC_11 (struct nic*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (struct net_device*) ;
 int VAR_21 ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_14 (int ,int*,int ) ;
 struct nic* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct nic*,int ,struct net_device*,char*) ;
 int FUNC_17 (struct nic*,int ,struct net_device*,char*,...) ;
 int FUNC_18 (struct net_device*,int *,int ,int ) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*,int,int) ;
 int FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*,int) ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_28 (struct pci_dev*,int) ;
 int FUNC_29 (struct pci_dev*,int ) ;
 int FUNC_30 (struct pci_dev*,struct net_device*) ;
 int FUNC_31 (struct pci_dev*) ;
 int VAR_24 ;
 int FUNC_32 (struct net_device*) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int ,char*) ;
 int FUNC_35 (int ,int ,int) ;
 int FUNC_36 (int *,int ,int ) ;
 int FUNC_37 (struct net_device*) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_38(struct pci_dev *VAR_27, const struct pci_device_id *VAR_28)
{
 struct net_device *VAR_29;
 struct nic *VAR_30;
 int VAR_31;

 if (!(VAR_29 = FUNC_3(sizeof(struct nic))))
  return -VAR_5;

 VAR_29->hw_features |= VAR_10;
 VAR_29->priv_flags |= VAR_7;
 VAR_29->hw_features |= VAR_9;

 VAR_29->netdev_ops = &VAR_14;
 VAR_29->ethtool_ops = &VAR_13;
 VAR_29->watchdog_timeo = VAR_2;
 FUNC_35(VAR_29->name, FUNC_23(VAR_27), sizeof(VAR_29->name) - 1);

 VAR_30 = FUNC_15(VAR_29);
 FUNC_18(VAR_29, &VAR_30->napi, VAR_15, VAR_1);
 VAR_30->netdev = VAR_29;
 VAR_30->pdev = VAR_27;
 VAR_30->msg_enable = (1 << VAR_12) - 1;
 VAR_30->mdio_ctrl = VAR_23;
 FUNC_30(VAR_27, VAR_29);

 if ((VAR_31 = FUNC_20(VAR_27))) {
  FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "Cannot enable PCI device, aborting\n");
  goto err_out_free_dev;
 }

 if (!(FUNC_27(VAR_27, 0) & VAR_8)) {
  FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "Cannot find proper PCI device base address, aborting\n");
  VAR_31 = -VAR_4;
  goto err_out_disable_pdev;
 }

 if ((VAR_31 = FUNC_26(VAR_27, VAR_0))) {
  FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "Cannot obtain PCI resources, aborting\n");
  goto err_out_disable_pdev;
 }

 if ((VAR_31 = FUNC_29(VAR_27, FUNC_0(32)))) {
  FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "No usable DMA configuration, aborting\n");
  goto err_out_free_res;
 }

 FUNC_2(VAR_29, &VAR_27->dev);

 if (VAR_25)
  FUNC_17(VAR_30, VAR_24, VAR_30->netdev, "using i/o access mode\n");

 VAR_30->csr = FUNC_21(VAR_27, (VAR_25 ? 1 : 0), sizeof(struct csr));
 if (!VAR_30->csr) {
  FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "Cannot map device registers, aborting\n");
  VAR_31 = -VAR_5;
  goto err_out_free_res;
 }

 if (VAR_28->driver_data)
  VAR_30->flags |= VAR_21;
 else
  VAR_30->flags &= ~VAR_21;

 FUNC_9(VAR_30);


 if (VAR_30->mac < VAR_22)
  VAR_29->features |= VAR_11;


 FUNC_33(&VAR_30->cb_lock);
 FUNC_33(&VAR_30->cmd_lock);
 FUNC_33(&VAR_30->mdio_lock);




 FUNC_10(VAR_30);

 FUNC_31(VAR_27);

 FUNC_36(&VAR_30->watchdog, VAR_17, 0);

 FUNC_1(&VAR_30->tx_timeout_task, VAR_16);

 if ((VAR_31 = FUNC_6(VAR_30))) {
  FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "Cannot alloc driver memory, aborting\n");
  goto err_out_iounmap;
 }

 if ((VAR_31 = FUNC_7(VAR_30)))
  goto err_out_free;

 FUNC_11(VAR_30);

 FUNC_14(VAR_29->dev_addr, VAR_30->eeprom, VAR_6);
 if (!FUNC_13(VAR_29->dev_addr)) {
  if (!VAR_18) {
   FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "Invalid MAC address from EEPROM, aborting\n");
   VAR_31 = -VAR_3;
   goto err_out_free;
  } else {
   FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "Invalid MAC address from EEPROM, you MUST configure one.\n");
  }
 }


 if ((VAR_30->mac >= VAR_22) &&
    (VAR_30->eeprom[VAR_19] & VAR_20)) {
  VAR_30->flags |= VAR_26;
  FUNC_4(&VAR_27->dev, 1);
 }


 FUNC_24(VAR_27, 0);

 FUNC_34(VAR_29->name, "eth%d");
 if ((VAR_31 = FUNC_32(VAR_29))) {
  FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "Cannot register net device, aborting\n");
  goto err_out_free;
 }
 VAR_30->cbs_pool = FUNC_5(VAR_29->name,
      &VAR_30->pdev->dev,
      VAR_30->params.cbs.max * sizeof(struct cb),
      sizeof(u32),
      0);
 if (!VAR_30->cbs_pool) {
  FUNC_16(VAR_30, VAR_24, VAR_30->netdev, "Cannot create DMA pool, aborting\n");
  VAR_31 = -VAR_5;
  goto err_out_pool;
 }
 FUNC_17(VAR_30, VAR_24, VAR_30->netdev,
     "addr 0x%llx, irq %d, MAC addr %pM\n",
     (unsigned long long)FUNC_28(VAR_27, VAR_25 ? 1 : 0),
     VAR_27->irq, VAR_29->dev_addr);

 return 0;

err_out_pool:
 FUNC_37(VAR_29);
err_out_free:
 FUNC_8(VAR_30);
err_out_iounmap:
 FUNC_22(VAR_27, VAR_30->csr);
err_out_free_res:
 FUNC_25(VAR_27);
err_out_disable_pdev:
 FUNC_19(VAR_27);
err_out_free_dev:
 FUNC_12(VAR_29);
 return VAR_31;
}
