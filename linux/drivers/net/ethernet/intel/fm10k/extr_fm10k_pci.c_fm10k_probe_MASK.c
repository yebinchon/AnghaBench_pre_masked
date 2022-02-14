
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {size_t driver_data; } ;
struct pci_dev {scalar_t__ error_state; int dev; } ;
struct net_device {int dev_addr; } ;
struct fm10k_intfc {scalar_t__ uc_addr; scalar_t__ sw_addr; int state; struct pci_dev* pdev; int service_timer; int macvlan_task; int service_task; struct net_device* netdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct net_device*,int *) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,int ) ;
 struct net_device* FUNC_8 (int ) ;
 int FUNC_9 (struct fm10k_intfc*) ;
 int FUNC_10 (struct fm10k_intfc*) ;
 int VAR_5 ;
 int FUNC_11 (struct fm10k_intfc*) ;
 int * VAR_6 ;
 int FUNC_12 (struct fm10k_intfc*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int VAR_7 ;
 int FUNC_14 (struct fm10k_intfc*) ;
 int FUNC_15 (struct fm10k_intfc*) ;
 int FUNC_16 (struct fm10k_intfc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (struct fm10k_intfc*,struct pci_device_id const*) ;
 int FUNC_18 (struct net_device*) ;
 scalar_t__ FUNC_19 (int ,int ) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_21 (int *,scalar_t__) ;
 struct fm10k_intfc* FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (struct net_device*) ;
 scalar_t__ VAR_11 ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*) ;
 int FUNC_27 (struct pci_dev*) ;
 int FUNC_28 (struct pci_dev*) ;
 int FUNC_29 (struct pci_dev*,int ) ;
 int FUNC_30 (struct pci_dev*,int ) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (struct pci_dev*,struct fm10k_intfc*) ;
 int FUNC_33 (struct pci_dev*) ;
 int FUNC_34 (struct pci_dev*) ;
 int FUNC_35 (struct net_device*) ;
 int FUNC_36 (int ,int ) ;
 int FUNC_37 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_38(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
 struct net_device *VAR_14;
 struct fm10k_intfc *VAR_15;
 int VAR_16;

 if (VAR_12->error_state != VAR_11) {
  FUNC_5(&VAR_12->dev,
   "PCI device still in an error state. Unable to load...\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_26(VAR_12);
 if (VAR_16) {
  FUNC_5(&VAR_12->dev,
   "PCI enable device failed: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_7(&VAR_12->dev, FUNC_0(48));
 if (VAR_16)
  VAR_16 = FUNC_7(&VAR_12->dev, FUNC_0(32));
 if (VAR_16) {
  FUNC_5(&VAR_12->dev,
   "DMA configuration failed: %d\n", VAR_16);
  goto err_dma;
 }

 VAR_16 = FUNC_29(VAR_12, VAR_5);
 if (VAR_16) {
  FUNC_5(&VAR_12->dev,
   "pci_request_selected_regions failed: %d\n", VAR_16);
  goto err_pci_reg;
 }

 FUNC_27(VAR_12);

 FUNC_33(VAR_12);
 FUNC_31(VAR_12);

 VAR_14 = FUNC_8(VAR_6[VAR_13->driver_data]);
 if (!VAR_14) {
  VAR_16 = -VAR_1;
  goto err_alloc_netdev;
 }

 FUNC_3(VAR_14, &VAR_12->dev);

 VAR_15 = FUNC_22(VAR_14);
 FUNC_32(VAR_12, VAR_15);

 VAR_15->netdev = VAR_14;
 VAR_15->pdev = VAR_12;

 VAR_15->uc_addr = FUNC_19(FUNC_30(VAR_12, 0),
         VAR_2);
 if (!VAR_15->uc_addr) {
  VAR_16 = -VAR_0;
  goto err_ioremap;
 }

 VAR_16 = FUNC_17(VAR_15, VAR_13);
 if (VAR_16)
  goto err_sw_init;


 FUNC_10(VAR_15);

 VAR_16 = FUNC_12(VAR_15);
 if (VAR_16)
  goto err_sw_init;





 FUNC_36(VAR_4, VAR_15->state);

 VAR_16 = FUNC_15(VAR_15);
 if (VAR_16)
  goto err_mbx_interrupt;


 VAR_16 = FUNC_11(VAR_15);
 if (VAR_16)
  goto err_register;

 VAR_16 = FUNC_35(VAR_14);
 if (VAR_16)
  goto err_register;


 FUNC_23(VAR_14);


 FUNC_24(VAR_14);




 FUNC_37(&VAR_15->service_timer, VAR_9, 0);
 FUNC_2(&VAR_15->service_task, VAR_8);


 FUNC_1(&VAR_15->macvlan_task, VAR_7);


 FUNC_21(&VAR_15->service_timer, (VAR_3 * 2) + VAR_10);


 FUNC_34(VAR_15->pdev);


 FUNC_6(&VAR_12->dev, "%pM\n", VAR_14->dev_addr);


 FUNC_13(VAR_12, 0);


 FUNC_4(VAR_4, VAR_15->state);
 FUNC_16(VAR_15);

 return 0;

err_register:
 FUNC_14(VAR_15);
err_mbx_interrupt:
 FUNC_9(VAR_15);
err_sw_init:
 if (VAR_15->sw_addr)
  FUNC_20(VAR_15->sw_addr);
 FUNC_20(VAR_15->uc_addr);
err_ioremap:
 FUNC_18(VAR_14);
err_alloc_netdev:
 FUNC_28(VAR_12);
err_pci_reg:
err_dma:
 FUNC_25(VAR_12);
 return VAR_16;
}
