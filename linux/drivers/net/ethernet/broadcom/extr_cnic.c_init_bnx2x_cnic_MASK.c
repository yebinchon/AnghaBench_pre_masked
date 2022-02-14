
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct cnic_local {int close_conn; int arm_int; int ack_int; int disable_int_sync; int enable_int; int stop_cm; int start_cm; int free_resc; int alloc_resc; int setup_pgtbl; int stop_hw; int start_hw; int * cnic_ops; int chip_id; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; scalar_t__ max_fcoe_conn; int iscsi_mac; int max_fcoe_exchanges; int max_iscsi_conn; int addr_drv_info_to_mcp; int chip_id; struct pci_dev* pdev; } ;
struct cnic_dev {scalar_t__ max_fcoe_conn; int mac_addr; int max_fcoe_exchanges; int max_iscsi_conn; int stats_addr; struct pci_dev* pcidev; struct cnic_local* cnic_priv; int submit_kwqes; int flags; } ;
struct bnx2x {struct cnic_eth_dev* (* cnic_probe ) (struct net_device*) ;} ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cnic_dev* FUNC_2 (struct net_device*,struct pci_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
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
 int VAR_19 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ) ;
 struct bnx2x* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int *) ;
 struct cnic_eth_dev* FUNC_8 (struct net_device*) ;

__attribute__((used)) static struct cnic_dev *FUNC_9(struct net_device *VAR_20)
{
 struct pci_dev *VAR_21;
 struct cnic_dev *VAR_22;
 struct cnic_local *VAR_23;
 struct bnx2x *VAR_24 = FUNC_6(VAR_20);
 struct cnic_eth_dev *VAR_25 = ((void*)0);

 if (VAR_24->cnic_probe)
  VAR_25 = VAR_24->cnic_probe(VAR_20);

 if (!VAR_25)
  return ((void*)0);

 VAR_21 = VAR_25->pdev;
 if (!VAR_21)
  return ((void*)0);

 FUNC_3(VAR_20);
 VAR_22 = FUNC_2(VAR_20, VAR_21);
 if (VAR_22 == ((void*)0)) {
  FUNC_4(VAR_20);
  return ((void*)0);
 }

 FUNC_7(VAR_2, &VAR_22->flags);
 VAR_22->submit_kwqes = VAR_19;

 VAR_23 = VAR_22->cnic_priv;
 VAR_23->ethdev = VAR_25;
 VAR_22->pcidev = VAR_21;
 VAR_23->chip_id = VAR_25->chip_id;

 VAR_22->stats_addr = VAR_25->addr_drv_info_to_mcp;

 if (!(VAR_25->drv_state & VAR_1))
  VAR_22->max_iscsi_conn = VAR_25->max_iscsi_conn;
 if (FUNC_1(VAR_24)) {
  VAR_22->max_fcoe_conn = VAR_25->max_fcoe_conn;
  VAR_22->max_fcoe_exchanges = VAR_25->max_fcoe_exchanges;
 }

 if (VAR_22->max_fcoe_conn > VAR_0)
  VAR_22->max_fcoe_conn = VAR_0;

 FUNC_5(VAR_22->mac_addr, VAR_25->iscsi_mac, VAR_3);

 VAR_23->cnic_ops = &VAR_9;
 VAR_23->start_hw = VAR_17;
 VAR_23->stop_hw = VAR_18;
 VAR_23->setup_pgtbl = VAR_16;
 VAR_23->alloc_resc = VAR_6;
 VAR_23->free_resc = VAR_15;
 VAR_23->start_cm = VAR_11;
 VAR_23->stop_cm = VAR_12;
 VAR_23->enable_int = VAR_14;
 VAR_23->disable_int_sync = VAR_13;
 if (FUNC_0(VAR_24)) {
  VAR_23->ack_int = VAR_4;
  VAR_23->arm_int = VAR_7;
 } else {
  VAR_23->ack_int = VAR_5;
  VAR_23->arm_int = VAR_8;
 }
 VAR_23->close_conn = VAR_10;
 return VAR_22;
}
