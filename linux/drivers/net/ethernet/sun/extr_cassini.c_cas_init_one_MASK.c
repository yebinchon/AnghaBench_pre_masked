
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;
struct net_device {int features; int dev_addr; int max_mtu; int min_mtu; scalar_t__ dma; int irq; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; int name; } ;
struct cas_init_block {int * rxcs; int * rxds; int * txds; } ;
struct cas {unsigned long casreg_len; int cas_flags; scalar_t__ phy_type; int hw_running; scalar_t__ regs; int pm_mutex; int block_dvma; struct cas_init_block* init_block; int napi; int * rx_flows; int * init_rxcs; int * init_rxds; int * init_txds; scalar_t__ timer_ticks; struct net_device* dev; int link_transition; int lstate; int link_cntl; int reset_task; int reset_task_pending_mtu; int reset_task_pending_spare; int reset_task_pending_all; int reset_task_pending; int link_timer; int * stat_lock; int * tx_lock; int rx_spare_lock; int rx_inuse_lock; int lock; scalar_t__ link_transition_jiffies_valid; int of_node; scalar_t__ msg_enable; scalar_t__ orig_cacheline_size; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int ) ;
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
 scalar_t__ VAR_28 ;
 int FUNC_2 (struct net_device*,int *) ;
 scalar_t__ VAR_29 ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct cas*,int *) ;
 scalar_t__ FUNC_6 (struct cas*) ;
 int FUNC_7 (struct cas*) ;
 int FUNC_8 (struct cas*) ;
 int VAR_30 ;
 int FUNC_9 (struct cas*) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_10 (struct cas*) ;
 int VAR_33 ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct cas*,int ) ;
 int VAR_34 ;
 int FUNC_13 (struct cas*) ;
 int FUNC_14 (struct cas*) ;
 scalar_t__ VAR_35 ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (struct net_device*) ;
 int VAR_36 ;
 int VAR_37 ;
 int * VAR_38 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct net_device*,char*,char*,char*,char*,char*,int ,int ) ;
 struct cas* FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct net_device*,int *,int ,int) ;
 scalar_t__ FUNC_24 (struct pci_dev*,int,int *) ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*) ;
 int FUNC_27 (struct pci_dev*) ;
 int FUNC_28 (struct pci_dev*,int,struct cas_init_block*,int ) ;
 scalar_t__ FUNC_29 (struct pci_dev*,int ,unsigned long) ;
 int FUNC_30 (struct pci_dev*,scalar_t__) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_33 (struct pci_dev*,int ,int *) ;
 int FUNC_34 (struct pci_dev*) ;
 int FUNC_35 (struct pci_dev*,int ) ;
 int FUNC_36 (struct pci_dev*,int ) ;
 unsigned long FUNC_37 (struct pci_dev*,int ) ;
 int FUNC_38 (struct pci_dev*) ;
 int FUNC_39 (struct pci_dev*,int ) ;
 int FUNC_40 (struct pci_dev*,int ) ;
 int FUNC_41 (struct pci_dev*,struct net_device*) ;
 int FUNC_42 (struct pci_dev*) ;
 scalar_t__ FUNC_43 (struct pci_dev*) ;
 scalar_t__ FUNC_44 (struct pci_dev*,int ,scalar_t__) ;
 int FUNC_45 (struct pci_dev*,int ,int ) ;
 int FUNC_46 (char*,int ) ;
 int FUNC_47 (char*,int ) ;
 int FUNC_48 (scalar_t__) ;
 scalar_t__ FUNC_49 (struct net_device*) ;
 int FUNC_50 (int *) ;
 int FUNC_51 (int *) ;
 int FUNC_52 (int *,int ,int ) ;
 int VAR_39 ;

__attribute__((used)) static int FUNC_53(struct pci_dev *VAR_40, const struct pci_device_id *VAR_41)
{
 static int VAR_42 = 0;
 unsigned long VAR_43;
 struct net_device *VAR_44;
 struct cas *VAR_45;
 int VAR_46, VAR_47, VAR_48;
 u16 VAR_49;
 u8 VAR_50 = 0, VAR_51 = 0;

 if (VAR_42++ == 0)
  FUNC_46("%s", VAR_39);

 VAR_47 = FUNC_27(VAR_40);
 if (VAR_47) {
  FUNC_15(&VAR_40->dev, "Cannot enable PCI device, aborting\n");
  return VAR_47;
 }

 if (!(FUNC_36(VAR_40, 0) & VAR_14)) {
  FUNC_15(&VAR_40->dev, "Cannot find proper PCI device "
         "base address, aborting\n");
  VAR_47 = -VAR_12;
  goto err_out_disable_pdev;
 }

 VAR_44 = FUNC_3(sizeof(*VAR_45));
 if (!VAR_44) {
  VAR_47 = -VAR_13;
  goto err_out_disable_pdev;
 }
 FUNC_2(VAR_44, &VAR_40->dev);

 VAR_47 = FUNC_35(VAR_40, VAR_44->name);
 if (VAR_47) {
  FUNC_15(&VAR_40->dev, "Cannot obtain PCI resources, aborting\n");
  goto err_out_free_netdev;
 }
 FUNC_42(VAR_40);





 FUNC_33(VAR_40, VAR_25, &VAR_49);
 VAR_49 &= ~VAR_27;
 VAR_49 |= VAR_26;
 FUNC_45(VAR_40, VAR_25, VAR_49);
 if (FUNC_43(VAR_40))
  FUNC_47("Could not enable MWI for %s\n", FUNC_31(VAR_40));

 FUNC_11(VAR_40);
 FUNC_32(VAR_40, VAR_24,
        &VAR_50);
 if (VAR_50 < VAR_10) {
  VAR_51 =
   (VAR_10 < VAR_29) ?
   VAR_10 : VAR_29;
  if (FUNC_44(VAR_40,
       VAR_24,
       VAR_51)) {
   FUNC_15(&VAR_40->dev, "Could not set PCI cache "
          "line size\n");
   goto err_write_cacheline;
  }
 }




 if (!FUNC_40(VAR_40, FUNC_0(64))) {
  VAR_48 = 1;
  VAR_47 = FUNC_39(VAR_40,
        FUNC_0(64));
  if (VAR_47 < 0) {
   FUNC_15(&VAR_40->dev, "Unable to obtain 64-bit DMA "
          "for consistent allocations\n");
   goto err_out_free_res;
  }

 } else {
  VAR_47 = FUNC_40(VAR_40, FUNC_0(32));
  if (VAR_47) {
   FUNC_15(&VAR_40->dev, "No usable DMA configuration, "
          "aborting\n");
   goto err_out_free_res;
  }
  VAR_48 = 0;
 }

 VAR_43 = FUNC_37(VAR_40, 0);

 VAR_45 = FUNC_21(VAR_44);
 VAR_45->pdev = VAR_40;


 VAR_45->orig_cacheline_size = VAR_51 ? VAR_50: 0;

 VAR_45->dev = VAR_44;
 VAR_45->msg_enable = (VAR_35 < 0) ? VAR_3 :
   VAR_35;





 VAR_45->link_transition = VAR_16;
 VAR_45->link_transition_jiffies_valid = 0;

 FUNC_51(&VAR_45->lock);
 FUNC_51(&VAR_45->rx_inuse_lock);
 FUNC_51(&VAR_45->rx_spare_lock);
 for (VAR_46 = 0; VAR_46 < VAR_23; VAR_46++) {
  FUNC_51(&VAR_45->stat_lock[VAR_46]);
  FUNC_51(&VAR_45->tx_lock[VAR_46]);
 }
 FUNC_51(&VAR_45->stat_lock[VAR_23]);
 FUNC_17(&VAR_45->pm_mutex);

 FUNC_52(&VAR_45->link_timer, VAR_31, 0);





 FUNC_4(&VAR_45->reset_task_pending, 0);
 FUNC_4(&VAR_45->reset_task_pending_all, 0);
 FUNC_4(&VAR_45->reset_task_pending_spare, 0);
 FUNC_4(&VAR_45->reset_task_pending_mtu, 0);

 FUNC_1(&VAR_45->reset_task, VAR_34);


 if (VAR_37 >= 0 && VAR_37 < 6)
  VAR_45->link_cntl = VAR_38[VAR_37];
 else
  VAR_45->link_cntl = VAR_2;
 VAR_45->lstate = VAR_36;
 VAR_45->link_transition = VAR_15;
 FUNC_22(VAR_45->dev);
 VAR_45->timer_ticks = 0;


 VAR_45->regs = FUNC_29(VAR_40, 0, VAR_43);
 if (!VAR_45->regs) {
  FUNC_15(&VAR_40->dev, "Cannot map device registers, aborting\n");
  goto err_out_free_res;
 }
 VAR_45->casreg_len = VAR_43;

 FUNC_38(VAR_40);
 FUNC_7(VAR_45);
 FUNC_9(VAR_45);
 FUNC_12(VAR_45, 0);
 if (FUNC_6(VAR_45))
  goto err_out_iounmap;
 if (VAR_45->cas_flags & VAR_6)
  FUNC_13(VAR_45);

 VAR_45->init_block = (struct cas_init_block *)
  FUNC_24(VAR_40, sizeof(struct cas_init_block),
         &VAR_45->block_dvma);
 if (!VAR_45->init_block) {
  FUNC_15(&VAR_40->dev, "Cannot allocate init block, aborting\n");
  goto err_out_iounmap;
 }

 for (VAR_46 = 0; VAR_46 < VAR_23; VAR_46++)
  VAR_45->init_txds[VAR_46] = VAR_45->init_block->txds[VAR_46];

 for (VAR_46 = 0; VAR_46 < VAR_21; VAR_46++)
  VAR_45->init_rxds[VAR_46] = VAR_45->init_block->rxds[VAR_46];

 for (VAR_46 = 0; VAR_46 < VAR_20; VAR_46++)
  VAR_45->init_rxcs[VAR_46] = VAR_45->init_block->rxcs[VAR_46];

 for (VAR_46 = 0; VAR_46 < VAR_22; VAR_46++)
  FUNC_50(&VAR_45->rx_flows[VAR_46]);

 VAR_44->netdev_ops = &VAR_32;
 VAR_44->ethtool_ops = &VAR_30;
 VAR_44->watchdog_timeo = VAR_11;




 VAR_44->irq = VAR_40->irq;
 VAR_44->dma = 0;


 if ((VAR_45->cas_flags & VAR_4) == 0)
  VAR_44->features |= VAR_18 | VAR_19;

 if (VAR_48)
  VAR_44->features |= VAR_17;


 VAR_44->min_mtu = VAR_8;
 VAR_44->max_mtu = VAR_7;

 if (FUNC_49(VAR_44)) {
  FUNC_15(&VAR_40->dev, "Cannot register net device, aborting\n");
  goto err_out_free_consistent;
 }

 VAR_46 = FUNC_48(VAR_45->regs + VAR_28);
 FUNC_20(VAR_44, "Sun Cassini%s (%sbit/%sMHz PCI/%s) Ethernet[%d] %pM\n",
      (VAR_45->cas_flags & VAR_5) ? "+" : "",
      (VAR_46 & VAR_0) ? "32" : "64",
      (VAR_46 & VAR_1) ? "66" : "33",
      (VAR_45->phy_type == VAR_9) ? "Fi" : "Cu", VAR_40->irq,
      VAR_44->dev_addr);

 FUNC_41(VAR_40, VAR_44);
 VAR_45->hw_running = 1;
 FUNC_8(VAR_45);
 FUNC_10(VAR_45);
 FUNC_5(VAR_45, ((void*)0));
 return 0;

err_out_free_consistent:
 FUNC_28(VAR_40, sizeof(struct cas_init_block),
       VAR_45->init_block, VAR_45->block_dvma);

err_out_iounmap:
 FUNC_18(&VAR_45->pm_mutex);
 if (VAR_45->hw_running)
  FUNC_14(VAR_45);
 FUNC_19(&VAR_45->pm_mutex);

 FUNC_30(VAR_40, VAR_45->regs);


err_out_free_res:
 FUNC_34(VAR_40);

err_write_cacheline:



 FUNC_44(VAR_40, VAR_24, VAR_50);

err_out_free_netdev:
 FUNC_16(VAR_44);

err_out_disable_pdev:
 FUNC_26(VAR_40);
 return -VAR_12;
}
