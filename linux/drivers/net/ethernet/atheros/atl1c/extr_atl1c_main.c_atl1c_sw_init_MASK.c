
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; int subsystem_device; int subsystem_vendor; int device; int vendor; } ;
struct atl1c_hw {int revision_id; int hibernate; int phy_configured; int preamble_len; int indirect_tab; int ict; int smb_timer; int rx_imt; int tx_imt; int tpd_burst; int rfd_burst; int dmar_block; int dma_order; scalar_t__ base_cpu; int autoneg_advertised; int max_frame_size; int intr_mask; int media_type; int subsystem_id; int subsystem_vendor_id; int device_id; int vendor_id; } ;
struct TYPE_5__ {int count; } ;
struct atl1c_adapter {int flags; int mdio_lock; int irq_sem; TYPE_3__* netdev; TYPE_2__ rfd_ring; TYPE_1__* tpd_ring; int link_duplex; int link_speed; scalar_t__ wol; struct pci_dev* pdev; struct atl1c_hw hw; } ;
struct TYPE_6__ {int mtu; } ;
struct TYPE_4__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct atl1c_adapter*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct atl1c_hw*) ;
 int FUNC_2 (struct atl1c_adapter*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct atl1c_hw*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct atl1c_adapter *VAR_10)
{
 struct atl1c_hw *VAR_11 = &VAR_10->hw;
 struct pci_dev *VAR_12 = VAR_10->pdev;
 u32 VAR_13;


 VAR_10->wol = 0;
 FUNC_6(&VAR_12->dev, 0);
 VAR_10->link_speed = VAR_6;
 VAR_10->link_duplex = VAR_2;
 VAR_10->tpd_ring[0].count = 1024;
 VAR_10->rfd_ring.count = 512;

 VAR_11->vendor_id = VAR_12->vendor;
 VAR_11->device_id = VAR_12->device;
 VAR_11->subsystem_vendor_id = VAR_12->subsystem_vendor;
 VAR_11->subsystem_id = VAR_12->subsystem_device;
 FUNC_7(VAR_12, VAR_5, &VAR_13);
 VAR_11->revision_id = VAR_13 & 0xFF;

 VAR_11->hibernate = 1;
 VAR_11->media_type = VAR_4;
 if (FUNC_3(VAR_11) != 0) {
  FUNC_5(&VAR_12->dev, "set mac function pointers failed\n");
  return -1;
 }
 FUNC_1(VAR_11);

 VAR_11->intr_mask = VAR_3;
 VAR_11->phy_configured = 0;
 VAR_11->preamble_len = 7;
 VAR_11->max_frame_size = VAR_10->netdev->mtu;
 VAR_11->autoneg_advertised = VAR_0;
 VAR_11->indirect_tab = 0xE4E4E4E4;
 VAR_11->base_cpu = 0;

 VAR_11->ict = 50000;
 VAR_11->smb_timer = 200000;
 VAR_11->rx_imt = 200;
 VAR_11->tx_imt = 1000;

 VAR_11->tpd_burst = 5;
 VAR_11->rfd_burst = 8;
 VAR_11->dma_order = VAR_8;
 VAR_11->dmar_block = VAR_9;

 if (FUNC_0(VAR_10)) {
  FUNC_5(&VAR_12->dev, "Unable to allocate memory for queues\n");
  return -VAR_1;
 }

 FUNC_2(VAR_10, VAR_10->netdev);
 FUNC_4(&VAR_10->irq_sem, 1);
 FUNC_9(&VAR_10->mdio_lock);
 FUNC_8(VAR_7, &VAR_10->flags);

 return 0;
}
