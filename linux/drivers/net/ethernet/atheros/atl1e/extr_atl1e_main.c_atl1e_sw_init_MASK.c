
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int revision; int subsystem_device; int subsystem_vendor; int device; int vendor; } ;
struct atl1e_hw {int revision_id; int emi_ca; int phy_configured; int preamble_len; int max_frame_size; int rx_jumbo_th; int ict; int smb_timer; int tpd_burst; int rrd_thresh; int tpd_thresh; int rx_count_down; int tx_count_down; int imt; int dmar_dly_cnt; int dmaw_dly_cnt; void* dmaw_block; void* dmar_block; scalar_t__ base_cpu; scalar_t__ indirect_tab; int rrs_type; int nic_type; int pci_cmd_word; int subsystem_id; int subsystem_vendor_id; int device_id; int vendor_id; } ;
struct TYPE_3__ {int count; } ;
struct atl1e_adapter {int num_rx_queues; int flags; int mdio_lock; int irq_sem; TYPE_2__* netdev; TYPE_1__ tx_ring; int link_duplex; int link_speed; scalar_t__ wol; struct pci_dev* pdev; struct atl1e_hw hw; } ;
struct TYPE_4__ {int mtu; } ;


 int FUNC_0 (struct atl1e_hw*,int ) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct atl1e_adapter*) ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (struct pci_dev*,int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct atl1e_adapter *VAR_16)
{
 struct atl1e_hw *VAR_17 = &VAR_16->hw;
 struct pci_dev *VAR_18 = VAR_16->pdev;
 u32 VAR_19 = 0;

 VAR_16->wol = 0;
 VAR_16->link_speed = VAR_8;
 VAR_16->link_duplex = VAR_3;
 VAR_16->num_rx_queues = 1;


 VAR_17->vendor_id = VAR_18->vendor;
 VAR_17->device_id = VAR_18->device;
 VAR_17->subsystem_vendor_id = VAR_18->subsystem_vendor;
 VAR_17->subsystem_id = VAR_18->subsystem_device;
 VAR_17->revision_id = VAR_18->revision;

 FUNC_4(VAR_18, VAR_4, &VAR_17->pci_cmd_word);

 VAR_19 = FUNC_0(VAR_17, VAR_7);

 if (VAR_17->revision_id >= 0xF0) {
  VAR_17->nic_type = VAR_13;
 } else {
  if (VAR_19 & VAR_5)
   VAR_17->nic_type = VAR_11;
  else
   VAR_17->nic_type = VAR_12;
 }

 VAR_19 = FUNC_0(VAR_17, VAR_7);

 if (VAR_19 & VAR_6)
  VAR_17->emi_ca = 1;
 else
  VAR_17->emi_ca = 0;

 VAR_17->phy_configured = 0;
 VAR_17->preamble_len = 7;
 VAR_17->max_frame_size = VAR_16->netdev->mtu;
 VAR_17->rx_jumbo_th = (VAR_17->max_frame_size + VAR_2 +
    VAR_9 + VAR_1 + 7) >> 3;

 VAR_17->rrs_type = VAR_15;
 VAR_17->indirect_tab = 0;
 VAR_17->base_cpu = 0;



 VAR_17->ict = 50000;
 VAR_17->smb_timer = 200000;
 VAR_17->tpd_burst = 5;
 VAR_17->rrd_thresh = 1;
 VAR_17->tpd_thresh = VAR_16->tx_ring.count / 2;
 VAR_17->rx_count_down = 4;
 VAR_17->tx_count_down = VAR_17->imt * 4 / 3;
 VAR_17->dmar_block = VAR_14;
 VAR_17->dmaw_block = VAR_14;
 VAR_17->dmar_dly_cnt = 15;
 VAR_17->dmaw_dly_cnt = 4;

 if (FUNC_1(VAR_16)) {
  FUNC_3(VAR_16->netdev, "Unable to allocate memory for queues\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_16->irq_sem, 1);
 FUNC_6(&VAR_16->mdio_lock);

 FUNC_5(VAR_10, &VAR_16->flags);

 return 0;
}
