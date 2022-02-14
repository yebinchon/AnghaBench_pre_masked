
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct cgx {int cgx_id; int cgx_list; int cgx_cmd_workq; int cgx_cmd_work; int reg_base; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 (struct cgx*) ;
 int FUNC_4 (struct cgx*) ;
 int VAR_8 ;
 int FUNC_5 (struct device*,char*,...) ;
 struct cgx* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct pci_dev*,int,int,int ) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,struct cgx*) ;
 int FUNC_17 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 struct device *VAR_11 = &VAR_9->dev;
 struct cgx *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_6(VAR_11, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_3;
 VAR_12->pdev = VAR_9;

 FUNC_16(VAR_9, VAR_12);

 VAR_13 = FUNC_11(VAR_9);
 if (VAR_13) {
  FUNC_5(VAR_11, "Failed to enable PCI device\n");
  FUNC_16(VAR_9, ((void*)0));
  return VAR_13;
 }

 VAR_13 = FUNC_14(VAR_9, VAR_2);
 if (VAR_13) {
  FUNC_5(VAR_11, "PCI request regions failed 0x%x\n", VAR_13);
  goto err_disable_device;
 }


 VAR_12->reg_base = FUNC_17(VAR_9, VAR_5, 0);
 if (!VAR_12->reg_base) {
  FUNC_5(VAR_11, "CGX: Cannot map CSR memory space, aborting\n");
  VAR_13 = -VAR_3;
  goto err_release_regions;
 }

 VAR_14 = VAR_1;
 VAR_13 = FUNC_9(VAR_9, VAR_14, VAR_14, VAR_6);
 if (VAR_13 < 0 || VAR_13 != VAR_14) {
  FUNC_5(VAR_11, "Request for %d msix vectors failed, err %d\n",
   VAR_14, VAR_13);
  goto err_release_regions;
 }

 VAR_12->cgx_id = (FUNC_15(VAR_9, VAR_5) >> 24)
  & VAR_0;


 FUNC_0(&VAR_12->cgx_cmd_work, VAR_8);
 VAR_12->cgx_cmd_workq = FUNC_1("cgx_cmd_workq", 0, 0);
 if (!VAR_12->cgx_cmd_workq) {
  FUNC_5(VAR_11, "alloc workqueue failed for cgx cmd");
  VAR_13 = -VAR_3;
  goto err_free_irq_vectors;
 }

 FUNC_7(&VAR_12->cgx_list, &VAR_7);

 FUNC_2();

 VAR_13 = FUNC_4(VAR_12);
 if (VAR_13)
  goto err_release_lmac;

 return 0;

err_release_lmac:
 FUNC_3(VAR_12);
 FUNC_8(&VAR_12->cgx_list);
err_free_irq_vectors:
 FUNC_12(VAR_9);
err_release_regions:
 FUNC_13(VAR_9);
err_disable_device:
 FUNC_10(VAR_9);
 FUNC_16(VAR_9, ((void*)0));
 return VAR_13;
}
