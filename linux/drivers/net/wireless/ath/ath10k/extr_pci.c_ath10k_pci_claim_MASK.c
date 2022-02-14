
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ath10k_pci {int mem; int mem_len; struct pci_dev* pdev; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct ath10k*,int ,char*,int ) ;
 int FUNC_2 (struct ath10k*,char*,int,...) ;
 struct ath10k_pci* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int,int ) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*,int,char*) ;
 int FUNC_10 (struct pci_dev*,int) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,struct ath10k*) ;
 int FUNC_14 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_15(struct ath10k *VAR_3)
{
 struct ath10k_pci *VAR_4 = FUNC_3(VAR_3);
 struct pci_dev *VAR_5 = VAR_4->pdev;
 int VAR_6;

 FUNC_13(VAR_5, VAR_3);

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_3, "failed to enable pci device: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_9(VAR_5, VAR_1, "ath");
 if (VAR_6) {
  FUNC_2(VAR_3, "failed to request region BAR%d: %d\n", VAR_1,
      VAR_6);
  goto err_device;
 }


 VAR_6 = FUNC_12(VAR_5, FUNC_0(32));
 if (VAR_6) {
  FUNC_2(VAR_3, "failed to set dma mask to 32-bit: %d\n", VAR_6);
  goto err_region;
 }

 VAR_6 = FUNC_11(VAR_5, FUNC_0(32));
 if (VAR_6) {
  FUNC_2(VAR_3, "failed to set consistent dma mask to 32-bit: %d\n",
      VAR_6);
  goto err_region;
 }

 FUNC_14(VAR_5);


 VAR_4->mem_len = FUNC_10(VAR_5, VAR_1);
 VAR_4->mem = FUNC_7(VAR_5, VAR_1, 0);
 if (!VAR_4->mem) {
  FUNC_2(VAR_3, "failed to iomap BAR%d\n", VAR_1);
  VAR_6 = -VAR_2;
  goto err_master;
 }

 FUNC_1(VAR_3, VAR_0, "boot pci_mem 0x%pK\n", VAR_4->mem);
 return 0;

err_master:
 FUNC_4(VAR_5);

err_region:
 FUNC_8(VAR_5, VAR_1);

err_device:
 FUNC_5(VAR_5);

 return VAR_6;
}
