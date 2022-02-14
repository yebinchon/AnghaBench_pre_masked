
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int revision; int subsystem_device; int subsystem_vendor; int device; int vendor; } ;
struct atl2_hw {int phy_configured; int preamble_len; int ipgt; int min_ifg; int ipgr1; int ipgr2; int retry_buf; int max_retry; int lcol; int jam_ipg; int max_frame_size; scalar_t__ fc_rxd_lo; scalar_t__ fc_rxd_hi; int pci_cmd_word; int revision_id; int subsystem_id; int subsystem_vendor_id; int device_id; int vendor_id; } ;
struct atl2_adapter {int ict; int flags; int stats_lock; TYPE_1__* netdev; int link_duplex; int link_speed; scalar_t__ wol; struct pci_dev* pdev; struct atl2_hw hw; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct atl2_adapter *VAR_4)
{
 struct atl2_hw *VAR_5 = &VAR_4->hw;
 struct pci_dev *VAR_6 = VAR_4->pdev;


 VAR_5->vendor_id = VAR_6->vendor;
 VAR_5->device_id = VAR_6->device;
 VAR_5->subsystem_vendor_id = VAR_6->subsystem_vendor;
 VAR_5->subsystem_id = VAR_6->subsystem_device;
 VAR_5->revision_id = VAR_6->revision;

 FUNC_0(VAR_6, VAR_1, &VAR_5->pci_cmd_word);

 VAR_4->wol = 0;
 VAR_4->ict = 50000;
 VAR_4->link_speed = VAR_2;
 VAR_4->link_duplex = VAR_0;

 VAR_5->phy_configured = 0;
 VAR_5->preamble_len = 7;
 VAR_5->ipgt = 0x60;
 VAR_5->min_ifg = 0x50;
 VAR_5->ipgr1 = 0x40;
 VAR_5->ipgr2 = 0x60;
 VAR_5->retry_buf = 2;
 VAR_5->max_retry = 0xf;
 VAR_5->lcol = 0x37;
 VAR_5->jam_ipg = 7;
 VAR_5->fc_rxd_hi = 0;
 VAR_5->fc_rxd_lo = 0;
 VAR_5->max_frame_size = VAR_4->netdev->mtu;

 FUNC_2(&VAR_4->stats_lock);

 FUNC_1(VAR_3, &VAR_4->flags);

 return 0;
}
