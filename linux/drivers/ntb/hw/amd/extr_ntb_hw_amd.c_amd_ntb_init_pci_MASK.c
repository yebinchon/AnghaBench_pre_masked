
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int dev; } ;
struct amd_ntb_dev {scalar_t__ self_mmio; scalar_t__ peer_mmio; TYPE_1__ ntb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,struct amd_ntb_dev*) ;
 int FUNC_12 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_13(struct amd_ntb_dev *VAR_3,
       struct pci_dev *VAR_4)
{
 int VAR_5;

 FUNC_11(VAR_4, VAR_3);

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  goto err_pci_enable;

 VAR_5 = FUNC_8(VAR_4, VAR_2);
 if (VAR_5)
  goto err_pci_regions;

 FUNC_12(VAR_4);

 VAR_5 = FUNC_10(VAR_4, FUNC_0(64));
 if (VAR_5) {
  VAR_5 = FUNC_10(VAR_4, FUNC_0(32));
  if (VAR_5)
   goto err_dma_mask;
  FUNC_1(&VAR_4->dev, "Cannot DMA highmem\n");
 }

 VAR_5 = FUNC_9(VAR_4, FUNC_0(64));
 if (VAR_5) {
  VAR_5 = FUNC_9(VAR_4, FUNC_0(32));
  if (VAR_5)
   goto err_dma_mask;
  FUNC_1(&VAR_4->dev, "Cannot DMA consistent highmem\n");
 }
 VAR_5 = FUNC_2(&VAR_3->ntb.dev,
       FUNC_3(&VAR_4->dev));
 if (VAR_5)
  goto err_dma_mask;

 VAR_3->self_mmio = FUNC_7(VAR_4, 0, 0);
 if (!VAR_3->self_mmio) {
  VAR_5 = -VAR_1;
  goto err_dma_mask;
 }
 VAR_3->peer_mmio = VAR_3->self_mmio + VAR_0;

 return 0;

err_dma_mask:
 FUNC_4(VAR_4);
err_pci_regions:
 FUNC_5(VAR_4);
err_pci_enable:
 FUNC_11(VAR_4, ((void*)0));
 return VAR_5;
}
