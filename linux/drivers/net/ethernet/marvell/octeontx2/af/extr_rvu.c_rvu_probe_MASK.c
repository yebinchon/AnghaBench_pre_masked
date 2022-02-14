
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_hwinfo {int dummy; } ;
struct rvu {struct rvu* hw; int afpf_wq_info; int total_pfs; void* pfreg_base; void* afreg_base; struct device* dev; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,struct rvu*) ;
 void* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,struct rvu*) ;
 void* FUNC_11 (struct pci_dev*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (struct rvu*) ;
 int FUNC_13 (struct rvu*) ;
 int FUNC_14 (struct rvu*) ;
 int FUNC_15 (struct rvu*) ;
 int FUNC_16 (struct rvu*) ;
 int FUNC_17 (struct rvu*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct rvu*,int *,int ,int ,int ,int ) ;
 int FUNC_20 (struct rvu*) ;
 int FUNC_21 (struct rvu*) ;
 int FUNC_22 (struct rvu*) ;
 int FUNC_23 (struct rvu*) ;
 int FUNC_24 (struct rvu*) ;

__attribute__((used)) static int FUNC_25(struct pci_dev *VAR_8, const struct pci_device_id *VAR_9)
{
 struct device *VAR_10 = &VAR_8->dev;
 struct rvu *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_10, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->hw = FUNC_3(VAR_10, sizeof(struct rvu_hwinfo), VAR_2);
 if (!VAR_11->hw) {
  FUNC_2(VAR_10, VAR_11);
  return -VAR_1;
 }

 FUNC_10(VAR_8, VAR_11);
 VAR_11->pdev = VAR_8;
 VAR_11->dev = &VAR_8->dev;

 VAR_12 = FUNC_5(VAR_8);
 if (VAR_12) {
  FUNC_1(VAR_10, "Failed to enable PCI device\n");
  goto err_freemem;
 }

 VAR_12 = FUNC_7(VAR_8, VAR_0);
 if (VAR_12) {
  FUNC_1(VAR_10, "PCI request regions failed 0x%x\n", VAR_12);
  goto err_disable_device;
 }

 VAR_12 = FUNC_9(VAR_8, FUNC_0(48));
 if (VAR_12) {
  FUNC_1(VAR_10, "Unable to set DMA mask\n");
  goto err_release_regions;
 }

 VAR_12 = FUNC_8(VAR_8, FUNC_0(48));
 if (VAR_12) {
  FUNC_1(VAR_10, "Unable to set consistent DMA mask\n");
  goto err_release_regions;
 }


 VAR_11->afreg_base = FUNC_11(VAR_8, VAR_3, 0);
 VAR_11->pfreg_base = FUNC_11(VAR_8, VAR_4, 0);
 if (!VAR_11->afreg_base || !VAR_11->pfreg_base) {
  FUNC_1(VAR_10, "Unable to map admin function CSRs, aborting\n");
  VAR_12 = -VAR_1;
  goto err_release_regions;
 }


 FUNC_24(VAR_11);


 FUNC_13(VAR_11);

 FUNC_21(VAR_11);

 VAR_12 = FUNC_22(VAR_11);
 if (VAR_12)
  goto err_release_regions;


 VAR_12 = FUNC_19(VAR_11, &VAR_11->afpf_wq_info, VAR_5,
       VAR_11->hw->total_pfs, VAR_6,
       VAR_7);
 if (VAR_12)
  goto err_hwsetup;

 VAR_12 = FUNC_15(VAR_11);
 if (VAR_12)
  goto err_mbox;

 VAR_12 = FUNC_20(VAR_11);
 if (VAR_12)
  goto err_flr;


 VAR_12 = FUNC_14(VAR_11);
 if (VAR_12)
  goto err_irq;

 return 0;
err_irq:
 FUNC_23(VAR_11);
err_flr:
 FUNC_16(VAR_11);
err_mbox:
 FUNC_18(&VAR_11->afpf_wq_info);
err_hwsetup:
 FUNC_12(VAR_11);
 FUNC_21(VAR_11);
 FUNC_17(VAR_11);
err_release_regions:
 FUNC_6(VAR_8);
err_disable_device:
 FUNC_4(VAR_8);
err_freemem:
 FUNC_10(VAR_8, ((void*)0));
 FUNC_2(&VAR_8->dev, VAR_11->hw);
 FUNC_2(VAR_10, VAR_11);
 return VAR_12;
}
