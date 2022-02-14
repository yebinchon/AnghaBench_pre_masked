
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int devfn; TYPE_2__* bus; int subsystem_device; int subsystem_vendor; int device; int vendor; int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int arq_mutex; int asq_mutex; } ;
struct TYPE_4__ {int bus_id; int func; int device; } ;
struct iavf_hw {TYPE_3__ aq; TYPE_1__ bus; int subsystem_device_id; int subsystem_vendor_id; int revision_id; int device_id; int vendor_id; int hw_addr; struct iavf_adapter* back; } ;
struct iavf_adapter {int down_waitqueue; int init_task; int client_task; int watchdog_task; int adminq_task; int reset_task; int cloud_filter_list; int vlan_filter_list; int mac_filter_list; int cloud_filter_list_lock; int mac_vlan_list_lock; int state; scalar_t__ msg_enable; struct iavf_hw hw; struct pci_dev* pdev; struct net_device* netdev; } ;
struct TYPE_5__ {int number; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*,int *) ;
 int VAR_5 ;
 struct net_device* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 struct iavf_adapter* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int ,int *) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 (struct pci_dev*,int ) ;
 int FUNC_24 (struct pci_dev*,int ) ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*,struct net_device*) ;
 int FUNC_27 (struct pci_dev*) ;
 int FUNC_28 (int ,int *,int ) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(struct pci_dev *VAR_13, const struct pci_device_id *VAR_14)
{
 struct net_device *VAR_15;
 struct iavf_adapter *VAR_16 = ((void*)0);
 struct iavf_hw *VAR_17 = ((void*)0);
 int VAR_18;

 VAR_18 = FUNC_18(VAR_13);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_10(&VAR_13->dev, FUNC_1(64));
 if (VAR_18) {
  VAR_18 = FUNC_10(&VAR_13->dev, FUNC_1(32));
  if (VAR_18) {
   FUNC_9(&VAR_13->dev,
    "DMA configuration failed: 0x%x\n", VAR_18);
   goto err_dma;
  }
 }

 VAR_18 = FUNC_22(VAR_13, VAR_8);
 if (VAR_18) {
  FUNC_9(&VAR_13->dev,
   "pci_request_regions failed 0x%x\n", VAR_18);
  goto err_pci_reg;
 }

 FUNC_19(VAR_13);

 FUNC_27(VAR_13);

 VAR_15 = FUNC_8(sizeof(struct iavf_adapter),
       VAR_3);
 if (!VAR_15) {
  VAR_18 = -VAR_2;
  goto err_alloc_etherdev;
 }

 FUNC_7(VAR_15, &VAR_13->dev);

 FUNC_26(VAR_13, VAR_15);
 VAR_16 = FUNC_16(VAR_15);

 VAR_16->netdev = VAR_15;
 VAR_16->pdev = VAR_13;

 VAR_17 = &VAR_16->hw;
 VAR_17->back = VAR_16;

 VAR_16->msg_enable = FUNC_0(VAR_0) - 1;
 VAR_16->state = VAR_5;


 FUNC_25(VAR_13);

 VAR_17->hw_addr = FUNC_13(FUNC_24(VAR_13, 0),
         FUNC_23(VAR_13, 0));
 if (!VAR_17->hw_addr) {
  VAR_18 = -VAR_1;
  goto err_ioremap;
 }
 VAR_17->vendor_id = VAR_13->vendor;
 VAR_17->device_id = VAR_13->device;
 FUNC_20(VAR_13, VAR_4, &VAR_17->revision_id);
 VAR_17->subsystem_vendor_id = VAR_13->subsystem_vendor;
 VAR_17->subsystem_device_id = VAR_13->subsystem_device;
 VAR_17->bus.device = FUNC_6(VAR_13->devfn);
 VAR_17->bus.func = FUNC_5(VAR_13->devfn);
 VAR_17->bus.bus_id = VAR_13->bus->number;




 FUNC_15(&VAR_17->aq.asq_mutex);
 FUNC_15(&VAR_17->aq.arq_mutex);

 FUNC_29(&VAR_16->mac_vlan_list_lock);
 FUNC_29(&VAR_16->cloud_filter_list_lock);

 FUNC_3(&VAR_16->mac_filter_list);
 FUNC_3(&VAR_16->vlan_filter_list);
 FUNC_3(&VAR_16->cloud_filter_list);

 FUNC_4(&VAR_16->reset_task, VAR_10);
 FUNC_4(&VAR_16->adminq_task, VAR_6);
 FUNC_2(&VAR_16->watchdog_task, VAR_11);
 FUNC_2(&VAR_16->client_task, VAR_7);
 FUNC_2(&VAR_16->init_task, VAR_9);
 FUNC_28(VAR_12, &VAR_16->init_task,
      FUNC_14(5 * (VAR_13->devfn & 0x07)));


 FUNC_12(&VAR_16->down_waitqueue);

 return 0;

err_ioremap:
 FUNC_11(VAR_15);
err_alloc_etherdev:
 FUNC_21(VAR_13);
err_pci_reg:
err_dma:
 FUNC_17(VAR_13);
 return VAR_18;
}
