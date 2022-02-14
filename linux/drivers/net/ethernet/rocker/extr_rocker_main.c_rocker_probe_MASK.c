
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int notifier_call; } ;
struct TYPE_4__ {int id; } ;
struct rocker {int hw_addr; int rocker_owq; TYPE_2__ fib_nb; TYPE_1__ hw; int port_count; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int,int *) ;
 int FUNC_5 (int ,struct rocker*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct rocker*) ;
 struct rocker* FUNC_9 (int,int ) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*,struct rocker*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (TYPE_2__*,int *) ;
 int FUNC_21 (struct notifier_block*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int ,int ,int ,struct rocker*) ;
 int FUNC_24 (struct rocker*) ;
 int VAR_12 ;
 int FUNC_25 (struct rocker*) ;
 int FUNC_26 (struct rocker*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_27 (struct rocker*) ;
 int FUNC_28 (struct rocker*) ;
 int FUNC_29 (struct rocker*,int ) ;
 int FUNC_30 (struct rocker*) ;
 int FUNC_31 (struct rocker*,int ) ;
 int FUNC_32 (struct rocker*,int ) ;
 int FUNC_33 (struct rocker*) ;
 int VAR_15 ;
 struct notifier_block VAR_16 ;
 int VAR_17 ;
 int FUNC_34 (struct rocker*,int ,int ) ;
 int FUNC_35 (TYPE_2__*) ;
 int FUNC_36 (int *) ;

__attribute__((used)) static int FUNC_37(struct pci_dev *VAR_18, const struct pci_device_id *VAR_19)
{
 struct notifier_block *VAR_20;
 struct rocker *VAR_21;
 int VAR_22;

 VAR_21 = FUNC_9(sizeof(*VAR_21), VAR_4);
 if (!VAR_21)
  return -VAR_3;

 VAR_22 = FUNC_11(VAR_18);
 if (VAR_22) {
  FUNC_3(&VAR_18->dev, "pci_enable_device failed\n");
  goto err_pci_enable_device;
 }

 VAR_22 = FUNC_13(VAR_18, VAR_13);
 if (VAR_22) {
  FUNC_3(&VAR_18->dev, "pci_request_regions failed\n");
  goto err_pci_request_regions;
 }

 VAR_22 = FUNC_17(VAR_18, FUNC_0(64));
 if (!VAR_22) {
  VAR_22 = FUNC_16(VAR_18, FUNC_0(64));
  if (VAR_22) {
   FUNC_3(&VAR_18->dev, "pci_set_consistent_dma_mask failed\n");
   goto err_pci_set_dma_mask;
  }
 } else {
  VAR_22 = FUNC_17(VAR_18, FUNC_0(32));
  if (VAR_22) {
   FUNC_3(&VAR_18->dev, "pci_set_dma_mask failed\n");
   goto err_pci_set_dma_mask;
  }
 }

 if (FUNC_14(VAR_18, 0) < VAR_9) {
  FUNC_3(&VAR_18->dev, "invalid PCI region size\n");
  VAR_22 = -VAR_1;
  goto err_pci_resource_len_check;
 }

 VAR_21->hw_addr = FUNC_6(FUNC_15(VAR_18, 0),
      FUNC_14(VAR_18, 0));
 if (!VAR_21->hw_addr) {
  FUNC_3(&VAR_18->dev, "ioremap failed\n");
  VAR_22 = -VAR_2;
  goto err_ioremap;
 }
 FUNC_19(VAR_18);

 VAR_21->pdev = VAR_18;
 FUNC_18(VAR_18, VAR_21);

 VAR_21->port_count = FUNC_31(VAR_21, VAR_5);

 VAR_22 = FUNC_28(VAR_21);
 if (VAR_22) {
  FUNC_3(&VAR_18->dev, "MSI-X init failed\n");
  goto err_msix_init;
 }

 VAR_22 = FUNC_24(VAR_21);
 if (VAR_22) {
  FUNC_3(&VAR_18->dev, "basic hw test failed\n");
  goto err_basic_hw_test;
 }

 FUNC_34(VAR_21, VAR_0, VAR_6);

 VAR_22 = FUNC_26(VAR_21);
 if (VAR_22)
  goto err_dma_rings_init;

 VAR_22 = FUNC_23(FUNC_29(VAR_21, VAR_7),
     VAR_12, 0,
     VAR_13, VAR_21);
 if (VAR_22) {
  FUNC_3(&VAR_18->dev, "cannot assign cmd irq\n");
  goto err_request_cmd_irq;
 }

 VAR_22 = FUNC_23(FUNC_29(VAR_21, VAR_8),
     VAR_14, 0,
     VAR_13, VAR_21);
 if (VAR_22) {
  FUNC_3(&VAR_18->dev, "cannot assign event irq\n");
  goto err_request_event_irq;
 }

 VAR_21->rocker_owq = FUNC_1(VAR_13,
           VAR_11);
 if (!VAR_21->rocker_owq) {
  VAR_22 = -VAR_3;
  goto err_alloc_ordered_workqueue;
 }

 VAR_22 = FUNC_30(VAR_21);
 if (VAR_22) {
  FUNC_3(&VAR_18->dev, "failed to probe ports\n");
  goto err_probe_ports;
 }




 VAR_21->fib_nb.notifier_call = VAR_15;
 VAR_22 = FUNC_20(&VAR_21->fib_nb, ((void*)0));
 if (VAR_22)
  goto err_register_fib_notifier;

 VAR_22 = FUNC_22(&VAR_17);
 if (VAR_22) {
  FUNC_3(&VAR_18->dev, "Failed to register switchdev notifier\n");
  goto err_register_switchdev_notifier;
 }

 VAR_20 = &VAR_16;
 VAR_22 = FUNC_21(VAR_20);
 if (VAR_22) {
  FUNC_3(&VAR_18->dev, "Failed to register switchdev blocking notifier\n");
  goto err_register_switchdev_blocking_notifier;
 }

 VAR_21->hw.id = FUNC_32(VAR_21, VAR_10);

 FUNC_4(&VAR_18->dev, "Rocker switch with id %*phN\n",
   (int)sizeof(VAR_21->hw.id), &VAR_21->hw.id);

 return 0;

err_register_switchdev_blocking_notifier:
 FUNC_36(&VAR_17);
err_register_switchdev_notifier:
 FUNC_35(&VAR_21->fib_nb);
err_register_fib_notifier:
 FUNC_33(VAR_21);
err_probe_ports:
 FUNC_2(VAR_21->rocker_owq);
err_alloc_ordered_workqueue:
 FUNC_5(FUNC_29(VAR_21, VAR_8), VAR_21);
err_request_event_irq:
 FUNC_5(FUNC_29(VAR_21, VAR_7), VAR_21);
err_request_cmd_irq:
 FUNC_25(VAR_21);
err_dma_rings_init:
err_basic_hw_test:
 FUNC_27(VAR_21);
err_msix_init:
 FUNC_7(VAR_21->hw_addr);
err_ioremap:
err_pci_resource_len_check:
err_pci_set_dma_mask:
 FUNC_12(VAR_18);
err_pci_request_regions:
 FUNC_10(VAR_18);
err_pci_enable_device:
 FUNC_8(VAR_21);
 return VAR_22;
}
