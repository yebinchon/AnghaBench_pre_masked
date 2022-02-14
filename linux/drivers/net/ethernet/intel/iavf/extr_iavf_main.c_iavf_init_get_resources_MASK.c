
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtchnl_vsi_resource {int dummy; } ;
struct virtchnl_vf_resource {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int watchdog_timeo; int features; int perm_addr; int dev_addr; scalar_t__ max_mtu; int min_mtu; int * netdev_ops; } ;
struct TYPE_4__ {int addr; } ;
struct iavf_hw {TYPE_1__ mac; } ;
struct TYPE_5__ {int state; } ;
struct iavf_adapter {scalar_t__ state; int link_up; int netdev_registered; int rss_key_size; int rss_lut_size; TYPE_3__* vf_res; int aq_required; void* rss_lut; void* rss_key; int down_waitqueue; TYPE_2__ vsi; struct iavf_hw hw; int flags; int rx_desc_count; int tx_desc_count; int current_op; struct pci_dev* pdev; struct net_device* netdev; } ;
struct TYPE_6__ {int vf_cap_flags; } ;


 scalar_t__ FUNC_0 (struct iavf_adapter*) ;
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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct iavf_adapter*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct iavf_adapter*) ;
 int FUNC_8 (struct iavf_adapter*) ;
 int FUNC_9 (struct iavf_adapter*) ;
 int FUNC_10 (struct iavf_adapter*) ;
 int FUNC_11 (struct iavf_adapter*) ;
 int FUNC_12 (struct iavf_adapter*) ;
 int FUNC_13 (struct iavf_adapter*) ;
 int FUNC_14 (struct iavf_adapter*) ;
 int VAR_19 ;
 scalar_t__ FUNC_15 (struct iavf_adapter*) ;
 int FUNC_16 (struct iavf_adapter*) ;
 int FUNC_17 (struct iavf_adapter*) ;
 int FUNC_18 (struct iavf_adapter*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct iavf_hw*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_3__*) ;
 void* FUNC_23 (int,int ) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct net_device*) ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static int FUNC_31(struct iavf_adapter *VAR_20)
{
 struct net_device *VAR_21 = VAR_20->netdev;
 struct pci_dev *VAR_22 = VAR_20->pdev;
 struct iavf_hw *VAR_23 = &VAR_20->hw;
 int VAR_24 = 0, VAR_25;

 FUNC_2(VAR_20->state != VAR_17);

 if (!VAR_20->vf_res) {
  VAR_25 = sizeof(struct virtchnl_vf_resource) +
   (VAR_11 *
   sizeof(struct virtchnl_vsi_resource));
  VAR_20->vf_res = FUNC_23(VAR_25, VAR_1);
  if (!VAR_20->vf_res)
   goto err;
 }
 VAR_24 = FUNC_9(VAR_20);
 if (VAR_24 == VAR_5) {
  VAR_24 = FUNC_18(VAR_20);
  goto err;
 } else if (VAR_24 == VAR_6) {




  FUNC_20(VAR_23);
  FUNC_3(&VAR_22->dev, "Unable to get VF config due to PF error condition, not retrying\n");
  return 0;
 }
 if (VAR_24) {
  FUNC_3(&VAR_22->dev, "Unable to get VF config (%d)\n", VAR_24);
  goto err_alloc;
 }

 if (FUNC_15(VAR_20))
  goto err_alloc;
 VAR_20->current_op = VAR_14;

 VAR_20->flags |= VAR_8;

 VAR_21->netdev_ops = &VAR_19;
 FUNC_19(VAR_21);
 VAR_21->watchdog_timeo = 5 * VAR_2;


 VAR_21->min_mtu = VAR_0;
 VAR_21->max_mtu = VAR_10 - VAR_12;

 if (!FUNC_21(VAR_20->hw.mac.addr)) {
  FUNC_4(&VAR_22->dev, "Invalid MAC address %pM, using random\n",
    VAR_20->hw.mac.addr);
  FUNC_5(VAR_21);
  FUNC_6(VAR_20->hw.mac.addr, VAR_21->dev_addr);
 } else {
  FUNC_6(VAR_21->dev_addr, VAR_20->hw.mac.addr);
  FUNC_6(VAR_21->perm_addr, VAR_20->hw.mac.addr);
 }

 VAR_20->tx_desc_count = VAR_4;
 VAR_20->rx_desc_count = VAR_3;
 VAR_24 = FUNC_10(VAR_20);
 if (VAR_24)
  goto err_sw_init;
 FUNC_13(VAR_20);
 if (VAR_20->vf_res->vf_cap_flags &
  VAR_15)
  VAR_20->flags |= VAR_9;

 VAR_24 = FUNC_16(VAR_20);
 if (VAR_24)
  goto err_sw_init;

 FUNC_24(VAR_21);
 VAR_20->link_up = 0;




 FUNC_27();
 if (!VAR_20->netdev_registered) {
  VAR_24 = FUNC_26(VAR_21);
  if (VAR_24) {
   FUNC_28();
   goto err_register;
  }
 }

 VAR_20->netdev_registered = 1;

 FUNC_25(VAR_21);
 if (FUNC_0(VAR_20)) {
  VAR_24 = FUNC_12(VAR_20);
  if (VAR_24) {
   FUNC_28();
   FUNC_4(&VAR_22->dev, "Failed to add VF to client API service list: %d\n",
     VAR_24);
  }
 }
 FUNC_4(&VAR_22->dev, "MAC address: %pM\n", VAR_20->hw.mac.addr);
 if (VAR_21->features & VAR_13)
  FUNC_4(&VAR_22->dev, "GRO is enabled\n");

 VAR_20->state = VAR_16;
 FUNC_29(VAR_18, VAR_20->vsi.state);
 FUNC_28();

 FUNC_14(VAR_20);
 FUNC_30(&VAR_20->down_waitqueue);

 VAR_20->rss_key = FUNC_23(VAR_20->rss_key_size, VAR_1);
 VAR_20->rss_lut = FUNC_23(VAR_20->rss_lut_size, VAR_1);
 if (!VAR_20->rss_key || !VAR_20->rss_lut)
  goto err_mem;
 if (FUNC_1(VAR_20))
  VAR_20->aq_required |= VAR_7;
 else
  FUNC_11(VAR_20);

 return VAR_24;
err_mem:
 FUNC_8(VAR_20);
err_register:
 FUNC_7(VAR_20);
err_sw_init:
 FUNC_17(VAR_20);
err_alloc:
 FUNC_22(VAR_20->vf_res);
 VAR_20->vf_res = ((void*)0);
err:
 return VAR_24;
}
