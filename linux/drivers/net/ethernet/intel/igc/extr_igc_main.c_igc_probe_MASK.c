
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int dev; int subsystem_device; int subsystem_vendor; int revision; int device; int vendor; } ;
struct net_device {int watchdog_timeo; int addr_len; TYPE_7__* dev_addr; int name; int max_mtu; int min_mtu; int features; int hw_features; int mem_end; int mem_start; int * netdev_ops; } ;
struct igc_info {int (* get_invariants ) (struct igc_hw*) ;int phy_ops; int mac_ops; } ;
struct TYPE_10__ {void* current_mode; void* requested_mode; } ;
struct TYPE_16__ {scalar_t__ (* read_mac_addr ) (struct igc_hw*) ;int (* reset_hw ) (struct igc_hw*) ;} ;
struct TYPE_12__ {int autoneg_advertised; TYPE_7__ ops; } ;
struct TYPE_15__ {int autoneg; int addr; TYPE_7__ ops; } ;
struct TYPE_13__ {scalar_t__ (* validate ) (struct igc_hw*) ;} ;
struct TYPE_14__ {TYPE_4__ ops; } ;
struct TYPE_11__ {int func; } ;
struct igc_hw {TYPE_1__ fc; TYPE_3__ phy; TYPE_6__ mac; TYPE_5__ nvm; int subsystem_device_id; int subsystem_vendor_id; int revision_id; int device_id; int vendor_id; scalar_t__ hw_addr; TYPE_2__ bus; struct igc_adapter* back; } ;
struct igc_adapter {int fc_autoneg; scalar_t__ io_addr; struct igc_info ei; int watchdog_task; int reset_task; int phy_info_timer; int watchdog_timer; int msg_enable; int port_num; struct igc_hw hw; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct net_device*,int *) ;
 struct net_device* FUNC_3 (int,int ) ;
 int VAR_15 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct igc_hw*) ;
 int FUNC_10 (struct igc_adapter*) ;
 int VAR_16 ;
 void* VAR_17 ;
 scalar_t__ FUNC_11 (struct igc_hw*) ;
 int FUNC_12 (struct igc_adapter*) ;
 struct igc_info** VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (struct igc_adapter*) ;
 int FUNC_14 (struct igc_adapter*) ;
 int FUNC_15 (struct igc_hw*) ;
 int VAR_20 ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct igc_adapter*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_18 (int ,int ) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (TYPE_7__*) ;
 int FUNC_21 (TYPE_7__*,int ,int) ;
 int FUNC_22 (struct net_device*,char*,TYPE_7__*) ;
 struct igc_adapter* FUNC_23 (struct net_device*) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (struct pci_dev*) ;
 int FUNC_27 (struct pci_dev*) ;
 int FUNC_28 (struct pci_dev*) ;
 int FUNC_29 (struct pci_dev*,int ) ;
 int FUNC_30 (struct pci_dev*,int ,int ) ;
 int FUNC_31 (struct pci_dev*,int ) ;
 int FUNC_32 (struct pci_dev*,int ) ;
 int FUNC_33 (struct pci_dev*,int ) ;
 int FUNC_34 (struct pci_dev*) ;
 int FUNC_35 (struct pci_dev*,int ) ;
 int FUNC_36 (struct pci_dev*,struct net_device*) ;
 int FUNC_37 (struct pci_dev*) ;
 int FUNC_38 (struct pci_dev*) ;
 int FUNC_39 (struct net_device*) ;
 int FUNC_40 (int ,char*,int ) ;
 int FUNC_41 (struct igc_hw*) ;
 int FUNC_42 (struct igc_hw*) ;
 scalar_t__ FUNC_43 (struct igc_hw*) ;
 scalar_t__ FUNC_44 (struct igc_hw*) ;
 int FUNC_45 (int *,int ,int ) ;
 int FUNC_46 (int ,int ) ;

__attribute__((used)) static int FUNC_47(struct pci_dev *VAR_24,
       const struct pci_device_id *VAR_25)
{
 struct igc_adapter *VAR_26;
 struct net_device *VAR_27;
 struct igc_hw *VAR_28;
 const struct igc_info *VAR_29 = VAR_18[VAR_25->driver_data];
 int VAR_30;

 VAR_30 = FUNC_27(VAR_24);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_6(&VAR_24->dev, FUNC_0(64));
 if (!VAR_30) {
  VAR_30 = FUNC_5(&VAR_24->dev,
         FUNC_0(64));
 } else {
  VAR_30 = FUNC_6(&VAR_24->dev, FUNC_0(32));
  if (VAR_30) {
   VAR_30 = FUNC_5(&VAR_24->dev,
          FUNC_0(32));
   if (VAR_30) {
    FUNC_4(&VAR_24->dev, "igc: Wrong DMA config\n");
    goto err_dma;
   }
  }
 }

 VAR_30 = FUNC_30(VAR_24,
        FUNC_35(VAR_24,
          VAR_11),
        VAR_16);
 if (VAR_30)
  goto err_pci_reg;

 FUNC_28(VAR_24);

 FUNC_37(VAR_24);

 VAR_30 = -VAR_2;
 VAR_27 = FUNC_3(sizeof(struct igc_adapter),
       VAR_8);

 if (!VAR_27)
  goto err_alloc_etherdev;

 FUNC_2(VAR_27, &VAR_24->dev);

 FUNC_36(VAR_24, VAR_27);
 VAR_26 = FUNC_23(VAR_27);
 VAR_26->netdev = VAR_27;
 VAR_26->pdev = VAR_24;
 VAR_28 = &VAR_26->hw;
 VAR_28->back = VAR_26;
 VAR_26->port_num = VAR_28->bus.func;
 VAR_26->msg_enable = FUNC_25(VAR_15, VAR_0);

 VAR_30 = FUNC_34(VAR_24);
 if (VAR_30)
  goto err_ioremap;

 VAR_30 = -VAR_1;
 VAR_26->io_addr = FUNC_18(FUNC_33(VAR_24, 0),
       FUNC_32(VAR_24, 0));
 if (!VAR_26->io_addr)
  goto err_ioremap;


 VAR_28->hw_addr = VAR_26->io_addr;

 VAR_27->netdev_ops = &VAR_19;
 FUNC_16(VAR_27);
 VAR_27->watchdog_timeo = 5 * VAR_4;

 VAR_27->mem_start = FUNC_33(VAR_24, 0);
 VAR_27->mem_end = FUNC_31(VAR_24, 0);


 VAR_28->vendor_id = VAR_24->vendor;
 VAR_28->device_id = VAR_24->device;
 VAR_28->revision_id = VAR_24->revision;
 VAR_28->subsystem_vendor_id = VAR_24->subsystem_vendor;
 VAR_28->subsystem_device_id = VAR_24->subsystem_device;


 FUNC_21(&VAR_28->mac.ops, VAR_29->mac_ops, sizeof(VAR_28->mac.ops));
 FUNC_21(&VAR_28->phy.ops, VAR_29->phy_ops, sizeof(VAR_28->phy.ops));


 VAR_30 = VAR_29->get_invariants(VAR_28);
 if (VAR_30)
  goto err_sw_init;


 VAR_27->features |= VAR_13;


 VAR_30 = FUNC_17(VAR_26);
 if (VAR_30)
  goto err_sw_init;


 VAR_27->hw_features |= VAR_14;
 VAR_27->hw_features |= VAR_27->features;


 VAR_27->min_mtu = VAR_3;
 VAR_27->max_mtu = VAR_12;




 VAR_28->mac.ops.reset_hw(VAR_28);

 if (FUNC_11(VAR_28)) {
  if (VAR_28->nvm.ops.validate(VAR_28) < 0) {
   FUNC_4(&VAR_24->dev,
    "The NVM Checksum Is Not Valid\n");
   VAR_30 = -VAR_1;
   goto err_eeprom;
  }
 }

 if (FUNC_7(&VAR_24->dev, VAR_28->mac.addr)) {

  if (VAR_28->mac.ops.read_mac_addr(VAR_28))
   FUNC_4(&VAR_24->dev, "NVM Read Error\n");
 }

 FUNC_21(VAR_27->dev_addr, VAR_28->mac.addr, VAR_27->addr_len);

 if (!FUNC_20(VAR_27->dev_addr)) {
  FUNC_4(&VAR_24->dev, "Invalid MAC Address\n");
  VAR_30 = -VAR_1;
  goto err_eeprom;
 }


 FUNC_46(VAR_9, VAR_5);
 FUNC_46(VAR_10, VAR_6);

 FUNC_45(&VAR_26->watchdog_timer, VAR_22, 0);
 FUNC_45(&VAR_26->phy_info_timer, VAR_21, 0);

 FUNC_1(&VAR_26->reset_task, VAR_20);
 FUNC_1(&VAR_26->watchdog_task, VAR_23);


 VAR_26->fc_autoneg = 1;
 VAR_28->mac.autoneg = 1;
 VAR_28->phy.autoneg_advertised = 0xaf;

 VAR_28->fc.requested_mode = VAR_17;
 VAR_28->fc.current_mode = VAR_17;


 FUNC_14(VAR_26);




 FUNC_12(VAR_26);

 FUNC_40(VAR_27->name, "eth%d", VAR_7);
 VAR_30 = FUNC_39(VAR_27);
 if (VAR_30)
  goto err_register;


 FUNC_24(VAR_27);


 VAR_26->ei = *VAR_29;


 FUNC_38(VAR_24);
 FUNC_22(VAR_27, "MAC: %pM\n", VAR_27->dev_addr);

 return 0;

err_register:
 FUNC_13(VAR_26);
err_eeprom:
 if (!FUNC_9(VAR_28))
  FUNC_15(VAR_28);
err_sw_init:
 FUNC_10(VAR_26);
 FUNC_19(VAR_26->io_addr);
err_ioremap:
 FUNC_8(VAR_27);
err_alloc_etherdev:
 FUNC_29(VAR_24,
         FUNC_35(VAR_24, VAR_11));
err_pci_reg:
err_dma:
 FUNC_26(VAR_24);
 return VAR_30;
}
