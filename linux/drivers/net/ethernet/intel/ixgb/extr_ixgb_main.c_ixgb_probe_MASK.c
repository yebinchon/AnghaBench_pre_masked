
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int watchdog_timeo; int hw_features; int features; int vlan_features; int name; int dev_addr; scalar_t__ max_mtu; int min_mtu; int * netdev_ops; } ;
struct TYPE_4__ {int hw_addr; int io_base; struct ixgb_adapter* back; } ;
struct ixgb_adapter {int bd_number; TYPE_1__ hw; struct net_device* netdev; int tx_timeout_task; int watchdog_timer; int part_num; scalar_t__ link_duplex; scalar_t__ link_speed; int napi; int msg_enable; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int) ;
 int VAR_19 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ixgb_adapter*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_22 ;
 int FUNC_11 (struct ixgb_adapter*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct ixgb_adapter*) ;
 int VAR_23 ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_24 ;
 struct ixgb_adapter* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct ixgb_adapter*,int ,struct net_device*,char*) ;
 int FUNC_18 (struct ixgb_adapter*,int ,struct net_device*,char*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct net_device*,int *,int ,int) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*,int ) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*,int) ;
 scalar_t__ FUNC_28 (struct pci_dev*,int) ;
 int FUNC_29 (struct pci_dev*,int) ;
 int FUNC_30 (struct pci_dev*,struct net_device*) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (char*) ;
 int VAR_25 ;
 int FUNC_33 (struct net_device*) ;
 int FUNC_34 (int ,char*) ;
 int FUNC_35 (int ,int ,int) ;
 int FUNC_36 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_37(struct pci_dev *VAR_26, const struct pci_device_id *VAR_27)
{
 struct net_device *VAR_28 = ((void*)0);
 struct ixgb_adapter *VAR_29;
 static int VAR_30 = 0;
 int VAR_31;
 int VAR_32;
 int VAR_33;

 VAR_33 = FUNC_22(VAR_26);
 if (VAR_33)
  return VAR_33;

 VAR_31 = 0;
 VAR_33 = FUNC_4(&VAR_26->dev, FUNC_0(64));
 if (!VAR_33) {
  VAR_31 = 1;
 } else {
  VAR_33 = FUNC_4(&VAR_26->dev, FUNC_0(32));
  if (VAR_33) {
   FUNC_32("No usable DMA configuration, aborting\n");
   goto err_dma_mask;
  }
 }

 VAR_33 = FUNC_26(VAR_26, VAR_21);
 if (VAR_33)
  goto err_request_regions;

 FUNC_31(VAR_26);

 VAR_28 = FUNC_3(sizeof(struct ixgb_adapter));
 if (!VAR_28) {
  VAR_33 = -VAR_5;
  goto err_alloc_etherdev;
 }

 FUNC_2(VAR_28, &VAR_26->dev);

 FUNC_30(VAR_26, VAR_28);
 VAR_29 = FUNC_15(VAR_28);
 VAR_29->netdev = VAR_28;
 VAR_29->pdev = VAR_26;
 VAR_29->hw.back = VAR_29;
 VAR_29->msg_enable = FUNC_19(VAR_19, VAR_3);

 VAR_29->hw.hw_addr = FUNC_23(VAR_26, VAR_0);
 if (!VAR_29->hw.hw_addr) {
  VAR_33 = -VAR_4;
  goto err_ioremap;
 }

 for (VAR_32 = VAR_1; VAR_32 <= VAR_2; VAR_32++) {
  if (FUNC_28(VAR_26, VAR_32) == 0)
   continue;
  if (FUNC_27(VAR_26, VAR_32) & VAR_9) {
   VAR_29->hw.io_base = FUNC_29(VAR_26, VAR_32);
   break;
  }
 }

 VAR_28->netdev_ops = &VAR_22;
 FUNC_12(VAR_28);
 VAR_28->watchdog_timeo = 5 * VAR_8;
 FUNC_20(VAR_28, &VAR_29->napi, VAR_20, 64);

 FUNC_35(VAR_28->name, FUNC_24(VAR_26), sizeof(VAR_28->name) - 1);

 VAR_29->bd_number = VAR_30;
 VAR_29->link_speed = 0;
 VAR_29->link_duplex = 0;



 VAR_33 = FUNC_13(VAR_29);
 if (VAR_33)
  goto err_sw_init;

 VAR_28->hw_features = VAR_17 |
      VAR_18 |
      VAR_12 |
      VAR_15 |
      VAR_14;
 VAR_28->features = VAR_28->hw_features |
      VAR_13;
 VAR_28->hw_features |= VAR_16;

 if (VAR_31) {
  VAR_28->features |= VAR_11;
  VAR_28->vlan_features |= VAR_11;
 }


 VAR_28->min_mtu = VAR_7;
 VAR_28->max_mtu = VAR_10 - VAR_6;



 if (!FUNC_14(&VAR_29->hw)) {
  FUNC_17(VAR_29, VAR_25, VAR_29->netdev,
     "The EEPROM Checksum Is Not Valid\n");
  VAR_33 = -VAR_4;
  goto err_eeprom;
 }

 FUNC_9(&VAR_29->hw, VAR_28->dev_addr);

 if (!FUNC_7(VAR_28->dev_addr)) {
  FUNC_17(VAR_29, VAR_25, VAR_29->netdev, "Invalid MAC Address\n");
  VAR_33 = -VAR_4;
  goto err_eeprom;
 }

 VAR_29->part_num = FUNC_10(&VAR_29->hw);

 FUNC_36(&VAR_29->watchdog_timer, VAR_24, 0);

 FUNC_1(&VAR_29->tx_timeout_task, VAR_23);

 FUNC_34(VAR_28->name, "eth%d");
 VAR_33 = FUNC_33(VAR_28);
 if (VAR_33)
  goto err_register;


 FUNC_16(VAR_28);

 FUNC_18(VAR_29, VAR_25, VAR_29->netdev,
     "Intel(R) PRO/10GbE Network Connection\n");
 FUNC_8(VAR_29);


 FUNC_11(VAR_29);

 VAR_30++;
 return 0;

err_register:
err_sw_init:
err_eeprom:
 FUNC_6(VAR_29->hw.hw_addr);
err_ioremap:
 FUNC_5(VAR_28);
err_alloc_etherdev:
 FUNC_25(VAR_26);
err_request_regions:
err_dma_mask:
 FUNC_21(VAR_26);
 return VAR_33;
}
