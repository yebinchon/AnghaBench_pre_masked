
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ device; int subsystem_device; int subsystem_vendor; int vendor; } ;
struct net_device {scalar_t__ mtu; } ;
struct TYPE_2__ {int send_xon; } ;
struct ixgb_hw {scalar_t__ device_id; TYPE_1__ fc; int mac_type; scalar_t__ max_frame_size; int subsystem_id; int subsystem_vendor_id; int vendor_id; } ;
struct ixgb_adapter {int flags; struct net_device* netdev; scalar_t__ rx_buffer_len; struct pci_dev* pdev; struct ixgb_hw hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgb_adapter*,int ,struct net_device*,char*) ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct ixgb_adapter *VAR_9)
{
 struct ixgb_hw *VAR_10 = &VAR_9->hw;
 struct net_device *VAR_11 = VAR_9->netdev;
 struct pci_dev *VAR_12 = VAR_9->pdev;



 VAR_10->vendor_id = VAR_12->vendor;
 VAR_10->device_id = VAR_12->device;
 VAR_10->subsystem_vendor_id = VAR_12->subsystem_vendor;
 VAR_10->subsystem_id = VAR_12->subsystem_device;

 VAR_10->max_frame_size = VAR_11->mtu + VAR_1 + VAR_0;
 VAR_9->rx_buffer_len = VAR_10->max_frame_size + 8;

 if ((VAR_10->device_id == VAR_2) ||
     (VAR_10->device_id == VAR_3) ||
     (VAR_10->device_id == VAR_4) ||
     (VAR_10->device_id == VAR_5))
  VAR_10->mac_type = VAR_7;
 else {

  FUNC_0(VAR_9, VAR_8, VAR_9->netdev, "unsupported device id\n");
 }


 VAR_10->fc.send_xon = 1;

 FUNC_1(VAR_6, &VAR_9->flags);
 return 0;
}
