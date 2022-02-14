
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int phydev; int dev_addr; int * ethtool_ops; int max_mtu; int min_mtu; int * netdev_ops; int watchdog_timeo; } ;
struct et131x_adapter {TYPE_4__* regs; TYPE_5__* mii_bus; scalar_t__ boot_coma; TYPE_3__* pdev; int addr; int napi; } ;
struct TYPE_14__ {char* name; int write; int read; struct net_device* priv; int id; } ;
struct TYPE_10__ {int pm_csr; } ;
struct TYPE_13__ {TYPE_1__ global; } ;
struct TYPE_12__ {int devfn; TYPE_2__* bus; } ;
struct TYPE_11__ {int number; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct net_device*,int *) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct et131x_adapter*) ;
 struct et131x_adapter* FUNC_6 (struct net_device*,struct pci_dev*) ;
 int FUNC_7 (struct et131x_adapter*) ;
 int FUNC_8 (struct et131x_adapter*) ;
 int FUNC_9 (struct et131x_adapter*) ;
 int FUNC_10 (struct et131x_adapter*) ;
 int VAR_10 ;
 int FUNC_11 (struct et131x_adapter*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (struct net_device*) ;
 int VAR_13 ;
 int FUNC_13 (struct et131x_adapter*,struct pci_dev*) ;
 int VAR_14 ;
 int FUNC_14 (struct et131x_adapter*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (TYPE_4__*) ;
 TYPE_5__* FUNC_18 () ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*) ;
 int FUNC_22 (struct net_device*,int *,int ,int) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*) ;
 TYPE_4__* FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*) ;
 int FUNC_28 (struct pci_dev*,int ) ;
 int FUNC_29 (struct pci_dev*,int ) ;
 int FUNC_30 (struct pci_dev*,struct net_device*) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (struct net_device*) ;
 int FUNC_34 (int ,int ,char*,int) ;
 int FUNC_35 (int ,int *) ;

__attribute__((used)) static int FUNC_36(struct pci_dev *VAR_15,
       const struct pci_device_id *VAR_16)
{
 struct net_device *VAR_17;
 struct et131x_adapter *VAR_18;
 int VAR_19;

 VAR_19 = FUNC_25(VAR_15);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_15->dev, "pci_enable_device() failed\n");
  goto out;
 }


 if (!(FUNC_29(VAR_15, 0) & VAR_8)) {
  FUNC_3(&VAR_15->dev, "Can't find PCI device's base address\n");
  VAR_19 = -VAR_2;
  goto err_disable;
 }

 VAR_19 = FUNC_28(VAR_15, VAR_0);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_15->dev, "Can't get PCI resources\n");
  goto err_disable;
 }

 FUNC_31(VAR_15);


 if (FUNC_4(&VAR_15->dev, FUNC_0(64)) &&
     FUNC_4(&VAR_15->dev, FUNC_0(32))) {
  FUNC_3(&VAR_15->dev, "No usable DMA addressing method\n");
  VAR_19 = -VAR_1;
  goto err_release_res;
 }

 VAR_17 = FUNC_2(sizeof(struct et131x_adapter));
 if (!VAR_17) {
  FUNC_3(&VAR_15->dev, "Couldn't alloc netdev struct\n");
  VAR_19 = -VAR_3;
  goto err_release_res;
 }

 VAR_17->watchdog_timeo = VAR_6;
 VAR_17->netdev_ops = &VAR_13;
 VAR_17->min_mtu = VAR_5;
 VAR_17->max_mtu = VAR_4;

 FUNC_1(VAR_17, &VAR_15->dev);
 VAR_17->ethtool_ops = &VAR_10;

 VAR_18 = FUNC_6(VAR_17, VAR_15);

 VAR_19 = FUNC_13(VAR_18, VAR_15);
 if (VAR_19 < 0)
  goto err_free_dev;


 VAR_18->regs = FUNC_26(VAR_15, 0);
 if (!VAR_18->regs) {
  FUNC_3(&VAR_15->dev, "Cannot map device registers\n");
  VAR_19 = -VAR_3;
  goto err_free_dev;
 }


 FUNC_35(VAR_7, &VAR_18->regs->global.pm_csr);

 FUNC_14(VAR_18);
 FUNC_10(VAR_18);

 VAR_19 = FUNC_7(VAR_18);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_15->dev, "Could not alloc adapter memory (DMA)\n");
  goto err_iounmap;
 }

 FUNC_11(VAR_18);

 FUNC_22(VAR_17, &VAR_18->napi, VAR_14, 64);

 FUNC_15(VAR_17->dev_addr, VAR_18->addr);

 VAR_19 = -VAR_3;

 VAR_18->mii_bus = FUNC_18();
 if (!VAR_18->mii_bus) {
  FUNC_3(&VAR_15->dev, "Alloc of mii_bus struct failed\n");
  goto err_mem_free;
 }

 VAR_18->mii_bus->name = "et131x_eth_mii";
 FUNC_34(VAR_18->mii_bus->id, VAR_9, "%x",
   (VAR_18->pdev->bus->number << 8) | VAR_18->pdev->devfn);
 VAR_18->mii_bus->priv = VAR_17;
 VAR_18->mii_bus->read = VAR_11;
 VAR_18->mii_bus->write = VAR_12;

 VAR_19 = FUNC_20(VAR_18->mii_bus);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_15->dev, "failed to register MII bus\n");
  goto err_mdio_free;
 }

 VAR_19 = FUNC_12(VAR_17);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_15->dev, "failed to probe MII bus\n");
  goto err_mdio_unregister;
 }

 FUNC_9(VAR_18);


 VAR_18->boot_coma = 0;
 FUNC_5(VAR_18);
 VAR_19 = FUNC_33(VAR_17);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_15->dev, "register_netdev() failed\n");
  goto err_phy_disconnect;
 }





 FUNC_30(VAR_15, VAR_17);
out:
 return VAR_19;

err_phy_disconnect:
 FUNC_32(VAR_17->phydev);
err_mdio_unregister:
 FUNC_21(VAR_18->mii_bus);
err_mdio_free:
 FUNC_19(VAR_18->mii_bus);
err_mem_free:
 FUNC_8(VAR_18);
err_iounmap:
 FUNC_17(VAR_18->regs);
err_free_dev:
 FUNC_23(VAR_15);
 FUNC_16(VAR_17);
err_release_res:
 FUNC_27(VAR_15);
err_disable:
 FUNC_24(VAR_15);
 goto out;
}
