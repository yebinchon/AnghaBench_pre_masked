
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {struct net_device* dev; } ;
struct pci_device_id {int driver_data; } ;
struct pci_dev {int irq; int dev; } ;
struct net_device {int if_port; unsigned long mem_start; unsigned long mem_end; int hw_features; int features; int hard_header_len; int name; scalar_t__ max_mtu; int * ethtool_ops; int * netdev_ops; struct adapter* ml_priv; int irq; } ;
struct cpl_tx_pkt_lso {int dummy; } ;
struct cpl_tx_pkt {int dummy; } ;
struct board_info {int port_number; int board; int desc; } ;
struct TYPE_3__ {int width; int speed; scalar_t__ is_pcix; } ;
struct TYPE_4__ {TYPE_1__ pci; int chip_revision; } ;
struct adapter {unsigned long mmio_len; struct port_info* port; scalar_t__ regs; int t1powersave; TYPE_2__ params; int name; int registered_device_map; int napi; int stats_update_task; int ext_intr_handler_task; int mac_lock; int async_lock; int work_lock; int tpi_lock; int msg_enable; struct pci_dev* pdev; } ;







 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
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
 scalar_t__ VAR_19 ;
 int FUNC_3 (struct net_device*,int *) ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int,int *) ;
 struct net_device* FUNC_5 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct adapter*) ;
 int VAR_24 ;
 struct adapter* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,int *,int ,int) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 unsigned long FUNC_19 (struct pci_dev*,int ) ;
 unsigned long FUNC_20 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 (struct pci_dev*,struct net_device*) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (char*,int ,int ,int ,char*,int ,int ) ;
 int FUNC_27 (char*,int ,int ) ;
 int FUNC_28 (char*,int ,int ) ;
 int FUNC_29 (struct net_device*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (struct adapter*,scalar_t__) ;
 int VAR_25 ;
 int FUNC_32 (struct adapter*) ;
 struct board_info* FUNC_33 (int ) ;
 scalar_t__ FUNC_34 (struct adapter*,struct board_info const*,TYPE_2__*) ;
 scalar_t__ FUNC_35 (struct adapter*,struct board_info const*) ;
 scalar_t__ FUNC_36 (struct adapter*) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ FUNC_37 (struct adapter*) ;

__attribute__((used)) static int FUNC_38(struct pci_dev *VAR_28, const struct pci_device_id *VAR_29)
{
 int VAR_30, VAR_31, VAR_32 = 0;
 unsigned long VAR_33, VAR_34;
 const struct board_info *VAR_35;
 struct adapter *VAR_36 = ((void*)0);
 struct port_info *VAR_37;

 FUNC_27("%s - version %s\n", VAR_0, VAR_2);

 VAR_31 = FUNC_14(VAR_28);
 if (VAR_31)
  return VAR_31;

 if (!(FUNC_18(VAR_28, 0) & VAR_9)) {
  FUNC_25("%s: cannot find PCI device memory base address\n",
         FUNC_15(VAR_28));
  VAR_31 = -VAR_3;
  goto out_disable_pdev;
 }

 if (!FUNC_22(VAR_28, FUNC_0(64))) {
  VAR_32 = 1;

  if (FUNC_21(VAR_28, FUNC_0(64))) {
   FUNC_25("%s: unable to obtain 64-bit DMA for "
          "consistent allocations\n", FUNC_15(VAR_28));
   VAR_31 = -VAR_3;
   goto out_disable_pdev;
  }

 } else if ((VAR_31 = FUNC_22(VAR_28, FUNC_0(32))) != 0) {
  FUNC_25("%s: no usable DMA configuration\n", FUNC_15(VAR_28));
  goto out_disable_pdev;
 }

 VAR_31 = FUNC_17(VAR_28, VAR_1);
 if (VAR_31) {
  FUNC_25("%s: cannot obtain PCI resources\n", FUNC_15(VAR_28));
  goto out_disable_pdev;
 }

 FUNC_24(VAR_28);

 VAR_33 = FUNC_20(VAR_28, 0);
 VAR_34 = FUNC_19(VAR_28, 0);
 VAR_35 = FUNC_33(VAR_29->driver_data);

 for (VAR_30 = 0; VAR_30 < VAR_35->port_number; ++VAR_30) {
  struct net_device *VAR_38;

  VAR_38 = FUNC_5(VAR_36 ? 0 : sizeof(*VAR_36));
  if (!VAR_38) {
   VAR_31 = -VAR_4;
   goto out_free_dev;
  }

  FUNC_3(VAR_38, &VAR_28->dev);

  if (!VAR_36) {
   VAR_36 = FUNC_10(VAR_38);
   VAR_36->pdev = VAR_28;
   VAR_36->port[0].dev = VAR_38;

   VAR_36->regs = FUNC_7(VAR_33, VAR_34);
   if (!VAR_36->regs) {
    FUNC_25("%s: cannot map device registers\n",
           FUNC_15(VAR_28));
    VAR_31 = -VAR_4;
    goto out_free_dev;
   }

   if (FUNC_34(VAR_36, VAR_35, &VAR_36->params)) {
    VAR_31 = -VAR_3;
    goto out_free_dev;
   }

   VAR_36->name = FUNC_15(VAR_28);
   VAR_36->msg_enable = VAR_22;
   VAR_36->mmio_len = VAR_34;

   FUNC_30(&VAR_36->tpi_lock);
   FUNC_30(&VAR_36->work_lock);
   FUNC_30(&VAR_36->async_lock);
   FUNC_30(&VAR_36->mac_lock);

   FUNC_2(&VAR_36->ext_intr_handler_task,
      VAR_23);
   FUNC_1(&VAR_36->stats_update_task,
       VAR_24);

   FUNC_23(VAR_28, VAR_38);
  }

  VAR_37 = &VAR_36->port[VAR_30];
  VAR_37->dev = VAR_38;
  FUNC_11(VAR_38);
  VAR_38->irq = VAR_28->irq;
  VAR_38->if_port = VAR_30;
  VAR_38->mem_start = VAR_33;
  VAR_38->mem_end = VAR_33 + VAR_34 - 1;
  VAR_38->ml_priv = VAR_36;
  VAR_38->hw_features |= VAR_17 | VAR_14 |
   VAR_16;
  VAR_38->features |= VAR_17 | VAR_14 |
   VAR_16 | VAR_15;

  if (VAR_32)
   VAR_38->features |= VAR_11;
  if (FUNC_37(VAR_36)) {
   VAR_38->features |=
    VAR_13 |
    VAR_12;
   VAR_38->hw_features |= VAR_12;


   if (!(FUNC_9(VAR_36)) || VAR_35->port_number != 4) {
    VAR_38->hw_features |= VAR_18;
    VAR_38->features |= VAR_18;
   }
  }

  VAR_38->netdev_ops = &VAR_21;
  VAR_38->hard_header_len += (VAR_38->hw_features & VAR_18) ?
   sizeof(struct cpl_tx_pkt_lso) : sizeof(struct cpl_tx_pkt);

  FUNC_12(VAR_38, &VAR_36->napi, VAR_26, 64);

  VAR_38->ethtool_ops = &VAR_25;

  switch (VAR_35->board) {
  case 131:
  case 129:
  case 128:
  case 130:
   VAR_38->max_mtu = VAR_19 -
       (VAR_7 + VAR_6);
   break;
  case 132:
   VAR_38->max_mtu = VAR_20;
   break;
  default:
   VAR_38->max_mtu = VAR_5;
   break;
  }
 }

 if (FUNC_35(VAR_36, VAR_35) < 0) {
  VAR_31 = -VAR_3;
  goto out_free_dev;
 }







 for (VAR_30 = 0; VAR_30 < VAR_35->port_number; ++VAR_30) {
  VAR_31 = FUNC_29(VAR_36->port[VAR_30].dev);
  if (VAR_31)
   FUNC_28("%s: cannot register net device %s, skipping\n",
    FUNC_15(VAR_28), VAR_36->port[VAR_30].dev->name);
  else {




   if (!VAR_36->registered_device_map)
    VAR_36->name = VAR_36->port[VAR_30].dev->name;

   FUNC_4(VAR_30, &VAR_36->registered_device_map);
  }
 }
 if (!VAR_36->registered_device_map) {
  FUNC_25("%s: could not register any net devices\n",
         FUNC_15(VAR_28));
  goto out_release_adapter_res;
 }

 FUNC_26("%s: %s (rev %d), %s %dMHz/%d-bit\n",
  VAR_36->name, VAR_35->desc, VAR_36->params.chip_revision,
  VAR_36->params.pci.is_pcix ? "PCIX" : "PCI",
  VAR_36->params.pci.speed, VAR_36->params.pci.width);




 if (VAR_27)
  VAR_36->t1powersave = VAR_10;
 else
  VAR_36->t1powersave = VAR_8;
 if (FUNC_36(VAR_36))
  FUNC_31(VAR_36, VAR_27);

 return 0;

out_release_adapter_res:
 FUNC_32(VAR_36);
out_free_dev:
 if (VAR_36) {
  if (VAR_36->regs)
   FUNC_8(VAR_36->regs);
  for (VAR_30 = VAR_35->port_number - 1; VAR_30 >= 0; --VAR_30)
   if (VAR_36->port[VAR_30].dev)
    FUNC_6(VAR_36->port[VAR_30].dev);
 }
 FUNC_16(VAR_28);
out_disable_pdev:
 FUNC_13(VAR_28);
 return VAR_31;
}
