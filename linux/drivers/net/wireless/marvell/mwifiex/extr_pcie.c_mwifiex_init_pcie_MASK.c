
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_service_card {void* pci_mmap; void* pci_mmap1; struct pci_dev* dev; } ;
struct pci_dev {int dummy; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 void* FUNC_4 (struct pci_dev*,int,int ) ;
 int FUNC_5 (struct pci_dev*,void*) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*,int,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,struct pcie_service_card*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,void*,void*) ;

__attribute__((used)) static int FUNC_14(struct mwifiex_adapter *VAR_2)
{
 struct pcie_service_card *VAR_3 = VAR_2->card;
 int VAR_4;
 struct pci_dev *VAR_5 = VAR_3->dev;

 FUNC_10(VAR_5, VAR_3);

 VAR_4 = FUNC_3(VAR_5);
 if (VAR_4)
  goto err_enable_dev;

 FUNC_11(VAR_5);

 VAR_4 = FUNC_9(VAR_5, FUNC_0(32));
 if (VAR_4) {
  FUNC_12("set_dma_mask(32) failed: %d\n", VAR_4);
  goto err_set_dma_mask;
 }

 VAR_4 = FUNC_8(VAR_5, FUNC_0(32));
 if (VAR_4) {
  FUNC_12("set_consistent_dma_mask(64) failed\n");
  goto err_set_dma_mask;
 }

 VAR_4 = FUNC_7(VAR_5, 0, VAR_0);
 if (VAR_4) {
  FUNC_12("req_reg(0) error\n");
  goto err_req_region0;
 }
 VAR_3->pci_mmap = FUNC_4(VAR_5, 0, 0);
 if (!VAR_3->pci_mmap) {
  FUNC_12("iomap(0) error\n");
  VAR_4 = -VAR_1;
  goto err_iomap0;
 }
 VAR_4 = FUNC_7(VAR_5, 2, VAR_0);
 if (VAR_4) {
  FUNC_12("req_reg(2) error\n");
  goto err_req_region2;
 }
 VAR_3->pci_mmap1 = FUNC_4(VAR_5, 2, 0);
 if (!VAR_3->pci_mmap1) {
  FUNC_12("iomap(2) error\n");
  VAR_4 = -VAR_1;
  goto err_iomap2;
 }

 FUNC_13("PCI memory map Virt0: %pK PCI memory map Virt2: %pK\n",
    VAR_3->pci_mmap, VAR_3->pci_mmap1);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  goto err_alloc_buffers;

 return 0;

err_alloc_buffers:
 FUNC_5(VAR_5, VAR_3->pci_mmap1);
err_iomap2:
 FUNC_6(VAR_5, 2);
err_req_region2:
 FUNC_5(VAR_5, VAR_3->pci_mmap);
err_iomap0:
 FUNC_6(VAR_5, 0);
err_req_region0:
err_set_dma_mask:
 FUNC_2(VAR_5);
err_enable_dev:
 return VAR_4;
}
