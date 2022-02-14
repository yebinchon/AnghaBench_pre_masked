
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ device; int revision; } ;
struct net_device {int dummy; } ;
struct cnic_local {int close_conn; int disable_int_sync; int enable_int; int stop_cm; int start_cm; int free_resc; int alloc_resc; int setup_pgtbl; int stop_hw; int start_hw; int * cnic_ops; int chip_id; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int max_iscsi_conn; int chip_id; struct pci_dev* pdev; } ;
struct cnic_dev {int max_iscsi_conn; struct pci_dev* pcidev; struct cnic_local* cnic_priv; int submit_kwqes; int flags; } ;
struct bnx2 {struct cnic_eth_dev* (* cnic_probe ) (struct net_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct cnic_dev* FUNC_0 (struct net_device*,struct pci_dev*) ;
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
 int VAR_14 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct bnx2* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ,int *) ;
 struct cnic_eth_dev* FUNC_7 (struct net_device*) ;

__attribute__((used)) static struct cnic_dev *FUNC_8(struct net_device *VAR_15)
{
 struct pci_dev *VAR_16;
 struct cnic_dev *VAR_17;
 struct cnic_local *VAR_18;
 struct bnx2 *VAR_19 = FUNC_3(VAR_15);
 struct cnic_eth_dev *VAR_20 = ((void*)0);

 if (VAR_19->cnic_probe)
  VAR_20 = (VAR_19->cnic_probe)(VAR_15);

 if (!VAR_20)
  return ((void*)0);

 VAR_16 = VAR_20->pdev;
 if (!VAR_16)
  return ((void*)0);

 FUNC_1(VAR_15);
 FUNC_4(VAR_16);
 if ((VAR_16->device == VAR_1 ||
      VAR_16->device == VAR_2) &&
     (VAR_16->revision < 0x10)) {
  FUNC_5(VAR_16);
  goto cnic_err;
 }
 FUNC_5(VAR_16);

 VAR_17 = FUNC_0(VAR_15, VAR_16);
 if (VAR_17 == ((void*)0))
  goto cnic_err;

 FUNC_6(VAR_0, &VAR_17->flags);
 VAR_17->submit_kwqes = VAR_14;

 VAR_18 = VAR_17->cnic_priv;
 VAR_18->ethdev = VAR_20;
 VAR_17->pcidev = VAR_16;
 VAR_18->chip_id = VAR_20->chip_id;

 VAR_17->max_iscsi_conn = VAR_20->max_iscsi_conn;

 VAR_18->cnic_ops = &VAR_4;
 VAR_18->start_hw = VAR_12;
 VAR_18->stop_hw = VAR_13;
 VAR_18->setup_pgtbl = VAR_11;
 VAR_18->alloc_resc = VAR_3;
 VAR_18->free_resc = VAR_10;
 VAR_18->start_cm = VAR_6;
 VAR_18->stop_cm = VAR_7;
 VAR_18->enable_int = VAR_9;
 VAR_18->disable_int_sync = VAR_8;
 VAR_18->close_conn = VAR_5;
 return VAR_17;

cnic_err:
 FUNC_2(VAR_15);
 return ((void*)0);
}
