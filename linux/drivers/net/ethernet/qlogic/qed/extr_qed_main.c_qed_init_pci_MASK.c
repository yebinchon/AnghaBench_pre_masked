
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int irq; int mem_end; void* mem_start; int pm_cap; } ;
struct qed_dev {int doorbells; int db_size; void* db_phys_addr; struct pci_dev* pdev; int regview; TYPE_1__ pci_params; } ;
struct pci_dev {int irq; int enable_cnt; } ;


 int FUNC_0 (struct qed_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct qed_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,char*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int) ;
 int FUNC_14 (struct pci_dev*,int) ;
 void* FUNC_15 (struct pci_dev*,int) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct qed_dev*) ;

__attribute__((used)) static int FUNC_19(struct qed_dev *VAR_8, struct pci_dev *VAR_9)
{
 u8 VAR_10;
 int VAR_11;

 VAR_8->pdev = VAR_9;

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_8, "Cannot enable PCI device\n");
  goto err0;
 }

 if (!(FUNC_13(VAR_9, 0) & VAR_4)) {
  FUNC_0(VAR_8, "No memory region found in bar #0\n");
  VAR_11 = -VAR_1;
  goto err1;
 }

 if (FUNC_1(VAR_8) && !(FUNC_13(VAR_9, 2) & VAR_4)) {
  FUNC_0(VAR_8, "No memory region found in bar #2\n");
  VAR_11 = -VAR_1;
  goto err1;
 }

 if (FUNC_2(&VAR_9->enable_cnt) == 1) {
  VAR_11 = FUNC_11(VAR_9, "qed");
  if (VAR_11) {
   FUNC_0(VAR_8,
      "Failed to request PCI memory resources\n");
   goto err1;
  }
  FUNC_17(VAR_9);
  FUNC_16(VAR_9);
 }

 FUNC_9(VAR_9, VAR_6, &VAR_10);
 if (VAR_10 == VAR_7) {
  FUNC_0(VAR_8,
     "Detected PCI device error [rev_id 0x%x]. Probably due to prior indication. Aborting.\n",
     VAR_10);
  VAR_11 = -VAR_2;
  goto err2;
 }
 if (!FUNC_8(VAR_9)) {
  FUNC_0(VAR_8, "The bus is not PCI Express\n");
  VAR_11 = -VAR_1;
  goto err2;
 }

 VAR_8->pci_params.pm_cap = FUNC_6(VAR_9, VAR_5);
 if (FUNC_1(VAR_8) && !VAR_8->pci_params.pm_cap)
  FUNC_0(VAR_8, "Cannot find power management capability\n");

 VAR_11 = FUNC_18(VAR_8);
 if (VAR_11)
  goto err2;

 VAR_8->pci_params.mem_start = FUNC_15(VAR_9, 0);
 VAR_8->pci_params.mem_end = FUNC_12(VAR_9, 0);
 VAR_8->pci_params.irq = VAR_9->irq;

 VAR_8->regview = FUNC_7(VAR_9, 0);
 if (!VAR_8->regview) {
  FUNC_0(VAR_8, "Cannot map register space, aborting\n");
  VAR_11 = -VAR_3;
  goto err2;
 }

 VAR_8->db_phys_addr = FUNC_15(VAR_8->pdev, 2);
 VAR_8->db_size = FUNC_14(VAR_8->pdev, 2);
 if (!VAR_8->db_size) {
  if (FUNC_1(VAR_8)) {
   FUNC_0(VAR_8, "No Doorbell bar available\n");
   return -VAR_0;
  } else {
   return 0;
  }
 }

 VAR_8->doorbells = FUNC_3(VAR_8->db_phys_addr, VAR_8->db_size);

 if (!VAR_8->doorbells) {
  FUNC_0(VAR_8, "Cannot map doorbell space\n");
  return -VAR_3;
 }

 return 0;

err2:
 FUNC_10(VAR_9);
err1:
 FUNC_4(VAR_9);
err0:
 return VAR_11;
}
