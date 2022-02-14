
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int addr_len; int dev_addr; int addr_assign_type; } ;
struct TYPE_9__ {int hw_addr; int mac_addr; struct atl1c_adapter* adapter; } ;
struct TYPE_8__ {int phy_id_mask; int reg_num_mask; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct atl1c_adapter {int bd_number; TYPE_2__ hw; scalar_t__ work_event; int common_task; int phy_config_timer; int napi; TYPE_1__ mii; int msg_enable; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct net_device*,struct pci_dev*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct atl1c_adapter*) ;
 int FUNC_12 (int *,char*,int ) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*,int ) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;
 struct atl1c_adapter* FUNC_19 (struct net_device*) ;
 int FUNC_20 (int,int ) ;
 scalar_t__ FUNC_21 (struct atl1c_adapter*) ;
 int FUNC_22 (struct net_device*,int *,int ,int) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*,int ) ;
 int FUNC_28 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_29 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_30 (struct pci_dev*,int ) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (struct net_device*) ;
 int FUNC_33 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_34(struct pci_dev *VAR_13, const struct pci_device_id *VAR_14)
{
 struct net_device *VAR_15;
 struct atl1c_adapter *VAR_16;
 static int VAR_17;

 int VAR_18 = 0;


 VAR_18 = FUNC_24(VAR_13);
 if (VAR_18) {
  FUNC_13(&VAR_13->dev, "cannot enable PCI device\n");
  return VAR_18;
 }
 if ((FUNC_30(VAR_13, FUNC_0(32)) != 0) ||
     (FUNC_29(VAR_13, FUNC_0(32)) != 0)) {
  FUNC_13(&VAR_13->dev, "No usable DMA configuration,aborting\n");
  goto err_dma;
 }

 VAR_18 = FUNC_26(VAR_13, VAR_9);
 if (VAR_18) {
  FUNC_13(&VAR_13->dev, "cannot obtain PCI resources\n");
  goto err_pci_reg;
 }

 FUNC_31(VAR_13);

 VAR_15 = FUNC_2(sizeof(struct atl1c_adapter));
 if (VAR_15 == ((void*)0)) {
  VAR_18 = -VAR_3;
  goto err_alloc_etherdev;
 }

 VAR_18 = FUNC_4(VAR_15, VAR_13);
 if (VAR_18) {
  FUNC_13(&VAR_13->dev, "init netdevice failed\n");
  goto err_init_netdev;
 }
 VAR_16 = FUNC_19(VAR_15);
 VAR_16->bd_number = VAR_17;
 VAR_16->netdev = VAR_15;
 VAR_16->pdev = VAR_13;
 VAR_16->hw.adapter = VAR_16;
 VAR_16->msg_enable = FUNC_20(-1, VAR_8);
 VAR_16->hw.hw_addr = FUNC_16(FUNC_28(VAR_13, 0), FUNC_27(VAR_13, 0));
 if (!VAR_16->hw.hw_addr) {
  VAR_18 = -VAR_2;
  FUNC_13(&VAR_13->dev, "cannot map device registers\n");
  goto err_ioremap;
 }


 VAR_16->mii.dev = VAR_15;
 VAR_16->mii.mdio_read = VAR_10;
 VAR_16->mii.mdio_write = VAR_11;
 VAR_16->mii.phy_id_mask = 0x1f;
 VAR_16->mii.reg_num_mask = VAR_4;
 FUNC_22(VAR_15, &VAR_16->napi, VAR_6, 64);
 FUNC_33(&VAR_16->phy_config_timer, VAR_12, 0);

 VAR_18 = FUNC_11(VAR_16);
 if (VAR_18) {
  FUNC_13(&VAR_13->dev, "net device private data init failed\n");
  goto err_sw_init;
 }

 FUNC_10(VAR_15);

 FUNC_9(&VAR_16->hw, VAR_1);


 FUNC_6(&VAR_16->hw);

 VAR_18 = FUNC_8(&VAR_16->hw);
 if (VAR_18) {
  VAR_18 = -VAR_2;
  goto err_reset;
 }



 VAR_18 = FUNC_5(&VAR_16->hw);
 if (VAR_18) {
  VAR_18 = -VAR_2;
  goto err_reset;
 }
 if (FUNC_7(&VAR_16->hw)) {

  VAR_15->addr_assign_type = VAR_5;
 }
 FUNC_18(VAR_15->dev_addr, VAR_16->hw.mac_addr, VAR_15->addr_len);
 if (FUNC_21(VAR_16))
  FUNC_12(&VAR_13->dev, "mac address : %pM\n",
   VAR_16->hw.mac_addr);

 FUNC_3(&VAR_16->hw, VAR_16->hw.mac_addr);
 FUNC_1(&VAR_16->common_task, VAR_7);
 VAR_16->work_event = 0;
 VAR_18 = FUNC_32(VAR_15);
 if (VAR_18) {
  FUNC_13(&VAR_13->dev, "register netdevice failed\n");
  goto err_register;
 }

 if (FUNC_21(VAR_16))
  FUNC_14(&VAR_13->dev, "version %s\n", VAR_0);
 VAR_17++;
 return 0;

err_reset:
err_register:
err_sw_init:
 FUNC_17(VAR_16->hw.hw_addr);
err_init_netdev:
err_ioremap:
 FUNC_15(VAR_15);
err_alloc_etherdev:
 FUNC_25(VAR_13);
err_pci_reg:
err_dma:
 FUNC_23(VAR_13);
 return VAR_18;
}
