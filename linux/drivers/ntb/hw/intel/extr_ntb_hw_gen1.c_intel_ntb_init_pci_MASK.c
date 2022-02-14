
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int dev; } ;
struct intel_ntb_dev {int peer_addr; int self_mmio; int peer_mmio; TYPE_1__ ntb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,struct intel_ntb_dev*) ;
 int FUNC_14 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_15(struct intel_ntb_dev *VAR_2, struct pci_dev *VAR_3)
{
 int VAR_4;

 FUNC_13(VAR_3, VAR_2);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  goto err_pci_enable;

 VAR_4 = FUNC_9(VAR_3, VAR_1);
 if (VAR_4)
  goto err_pci_regions;

 FUNC_14(VAR_3);

 VAR_4 = FUNC_12(VAR_3, FUNC_0(64));
 if (VAR_4) {
  VAR_4 = FUNC_12(VAR_3, FUNC_0(32));
  if (VAR_4)
   goto err_dma_mask;
  FUNC_1(&VAR_3->dev, "Cannot DMA highmem\n");
 }

 VAR_4 = FUNC_11(VAR_3, FUNC_0(64));
 if (VAR_4) {
  VAR_4 = FUNC_11(VAR_3, FUNC_0(32));
  if (VAR_4)
   goto err_dma_mask;
  FUNC_1(&VAR_3->dev, "Cannot DMA consistent highmem\n");
 }
 VAR_4 = FUNC_2(&VAR_2->ntb.dev,
       FUNC_3(&VAR_3->dev));
 if (VAR_4)
  goto err_dma_mask;

 VAR_2->self_mmio = FUNC_7(VAR_3, 0, 0);
 if (!VAR_2->self_mmio) {
  VAR_4 = -VAR_0;
  goto err_mmio;
 }
 VAR_2->peer_mmio = VAR_2->self_mmio;
 VAR_2->peer_addr = FUNC_10(VAR_3, 0);

 return 0;

err_mmio:
err_dma_mask:
 FUNC_4(VAR_3);
 FUNC_8(VAR_3);
err_pci_regions:
 FUNC_5(VAR_3);
err_pci_enable:
 FUNC_13(VAR_3, ((void*)0));
 return VAR_4;
}
