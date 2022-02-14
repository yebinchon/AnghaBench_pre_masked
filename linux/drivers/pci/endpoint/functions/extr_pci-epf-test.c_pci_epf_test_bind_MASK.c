
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct pci_epf_test {int test_reg_bar; TYPE_1__ cmd_handler; struct pci_epc_features const* epc_features; } ;
struct pci_epf_header {int dummy; } ;
struct device {int dummy; } ;
struct pci_epf {int msix_interrupts; int func_no; int msi_interrupts; struct device dev; struct pci_epc* epc; struct pci_epf_header* header; } ;
struct pci_epc_features {int linkup_notifier; int msix_capable; int msi_capable; } ;
struct pci_epc {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 struct pci_epf_test* FUNC_2 (struct pci_epf*) ;
 int VAR_2 ;
 struct pci_epc_features* FUNC_3 (struct pci_epc*,int ) ;
 int FUNC_4 (struct pci_epc_features const*) ;
 int FUNC_5 (struct pci_epc*,int ,int ) ;
 int FUNC_6 (struct pci_epc*,int ,int ) ;
 int FUNC_7 (struct pci_epc*,int ,struct pci_epf_header*) ;
 int FUNC_8 (struct pci_epf*,struct pci_epc_features const*) ;
 int FUNC_9 (struct pci_epf*) ;
 int FUNC_10 (struct pci_epf*) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct pci_epf *VAR_3)
{
 int VAR_4;
 struct pci_epf_test *VAR_5 = FUNC_2(VAR_3);
 struct pci_epf_header *VAR_6 = VAR_3->header;
 const struct pci_epc_features *VAR_7;
 enum pci_barno VAR_8 = VAR_0;
 struct pci_epc *VAR_9 = VAR_3->epc;
 struct device *VAR_10 = &VAR_3->dev;
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 bool VAR_13 = 1;

 if (FUNC_0(!VAR_9))
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_9, VAR_3->func_no);
 if (VAR_7) {
  VAR_11 = VAR_7->linkup_notifier;
  VAR_12 = VAR_7->msix_capable;
  VAR_13 = VAR_7->msi_capable;
  VAR_8 = FUNC_4(VAR_7);
  FUNC_8(VAR_3, VAR_7);
 }

 VAR_5->test_reg_bar = VAR_8;
 VAR_5->epc_features = VAR_7;

 VAR_4 = FUNC_7(VAR_9, VAR_3->func_no, VAR_6);
 if (VAR_4) {
  FUNC_1(VAR_10, "Configuration header write failed\n");
  return VAR_4;
 }

 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_10(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_13) {
  VAR_4 = FUNC_5(VAR_9, VAR_3->func_no, VAR_3->msi_interrupts);
  if (VAR_4) {
   FUNC_1(VAR_10, "MSI configuration failed\n");
   return VAR_4;
  }
 }

 if (VAR_12) {
  VAR_4 = FUNC_6(VAR_9, VAR_3->func_no, VAR_3->msix_interrupts);
  if (VAR_4) {
   FUNC_1(VAR_10, "MSI-X configuration failed\n");
   return VAR_4;
  }
 }

 if (!VAR_11)
  FUNC_11(VAR_2, &VAR_5->cmd_handler.work);

 return 0;
}
