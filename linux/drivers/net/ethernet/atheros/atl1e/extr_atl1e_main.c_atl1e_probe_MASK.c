
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_6__ {int hw_addr; int mac_addr; struct atl1e_adapter* adapter; } ;
struct TYPE_5__ {int phy_id_mask; int reg_num_mask; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct atl1e_adapter {int bd_number; TYPE_2__ hw; int link_chg_task; int reset_task; int phy_config_timer; int napi; TYPE_1__ mii; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (struct atl1e_adapter*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct net_device*,struct pci_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct atl1e_adapter*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct net_device*,char*,int ) ;
 int FUNC_14 (struct net_device*,char*) ;
 struct atl1e_adapter* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*,int *,int ,int) ;
 int FUNC_18 (struct net_device*,int ) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*,int ,int ) ;
 int FUNC_23 (struct pci_dev*,int ) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_26 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_27 (struct pci_dev*,int ) ;
 int FUNC_28 (struct pci_dev*) ;
 int FUNC_29 (struct net_device*) ;
 int FUNC_30 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_31(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
 struct net_device *VAR_14;
 struct atl1e_adapter *VAR_15 = ((void*)0);
 static int VAR_16;

 int VAR_17 = 0;

 VAR_17 = FUNC_21(VAR_12);
 if (VAR_17) {
  FUNC_10(&VAR_12->dev, "cannot enable PCI device\n");
  return VAR_17;
 }
 if ((FUNC_27(VAR_12, FUNC_0(32)) != 0) ||
     (FUNC_26(VAR_12, FUNC_0(32)) != 0)) {
  FUNC_10(&VAR_12->dev, "No usable DMA configuration,aborting\n");
  goto err_dma;
 }

 VAR_17 = FUNC_25(VAR_12, VAR_6);
 if (VAR_17) {
  FUNC_10(&VAR_12->dev, "cannot obtain PCI resources\n");
  goto err_pci_reg;
 }

 FUNC_28(VAR_12);

 VAR_14 = FUNC_2(sizeof(struct atl1e_adapter));
 if (VAR_14 == ((void*)0)) {
  VAR_17 = -VAR_2;
  goto err_alloc_etherdev;
 }

 VAR_17 = FUNC_4(VAR_14, VAR_12);
 if (VAR_17) {
  FUNC_14(VAR_14, "init netdevice failed\n");
  goto err_init_netdev;
 }
 VAR_15 = FUNC_15(VAR_14);
 VAR_15->bd_number = VAR_16;
 VAR_15->netdev = VAR_14;
 VAR_15->pdev = VAR_12;
 VAR_15->hw.adapter = VAR_15;
 VAR_15->hw.hw_addr = FUNC_22(VAR_12, VAR_0, 0);
 if (!VAR_15->hw.hw_addr) {
  VAR_17 = -VAR_1;
  FUNC_14(VAR_14, "cannot map device registers\n");
  goto err_ioremap;
 }


 VAR_15->mii.dev = VAR_14;
 VAR_15->mii.mdio_read = VAR_8;
 VAR_15->mii.mdio_write = VAR_9;
 VAR_15->mii.phy_id_mask = 0x1f;
 VAR_15->mii.reg_num_mask = VAR_4;

 FUNC_17(VAR_14, &VAR_15->napi, VAR_5, 64);

 FUNC_30(&VAR_15->phy_config_timer, VAR_10, 0);


 FUNC_3(VAR_15);






 FUNC_8(VAR_12);

 VAR_17 = FUNC_9(VAR_15);
 if (VAR_17) {
  FUNC_14(VAR_14, "net device private data init failed\n");
  goto err_sw_init;
 }


 FUNC_5(&VAR_15->hw);


 VAR_17 = FUNC_7(&VAR_15->hw);
 if (VAR_17) {
  VAR_17 = -VAR_1;
  goto err_reset;
 }

 if (FUNC_6(&VAR_15->hw) != 0) {
  VAR_17 = -VAR_1;
  FUNC_14(VAR_14, "get mac address failed\n");
  goto err_eeprom;
 }

 FUNC_12(VAR_14->dev_addr, VAR_15->hw.mac_addr, VAR_14->addr_len);
 FUNC_13(VAR_14, "mac address : %pM\n", VAR_15->hw.mac_addr);

 FUNC_1(&VAR_15->reset_task, VAR_11);
 FUNC_1(&VAR_15->link_chg_task, VAR_7);
 FUNC_18(VAR_14, VAR_3);
 VAR_17 = FUNC_29(VAR_14);
 if (VAR_17) {
  FUNC_14(VAR_14, "register netdevice failed\n");
  goto err_register;
 }


 FUNC_19(VAR_14);
 FUNC_16(VAR_14);

 VAR_16++;

 return 0;

err_reset:
err_register:
err_sw_init:
err_eeprom:
 FUNC_23(VAR_12, VAR_15->hw.hw_addr);
err_init_netdev:
err_ioremap:
 FUNC_11(VAR_14);
err_alloc_etherdev:
 FUNC_24(VAR_12);
err_pci_reg:
err_dma:
 FUNC_20(VAR_12);
 return VAR_17;
}
