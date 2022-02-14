
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; scalar_t__ msix_enabled; } ;
struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {struct beiscsi_hba* be_eq; } ;
struct beiscsi_hba {int num_cpus; char** msi_name; TYPE_1__* shost; struct hwi_controller* phwi_ctrlr; struct pci_dev* pcidev; } ;
struct TYPE_2__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int FUNC_1 (int ,struct beiscsi_hba*) ;
 void* FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (int ,int ,int ,char*,struct beiscsi_hba*) ;

__attribute__((used)) static int FUNC_6(struct beiscsi_hba *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_8->pcidev;
 struct hwi_controller *VAR_10;
 struct hwi_context_memory *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_10 = VAR_8->phwi_ctrlr;
 VAR_11 = VAR_10->phwi_ctxt;

 if (VAR_9->msix_enabled) {
  for (VAR_13 = 0; VAR_13 < VAR_8->num_cpus; VAR_13++) {
   VAR_8->msi_name[VAR_13] = FUNC_2(VAR_2,
            "beiscsi_%02x_%02x",
            VAR_8->shost->host_no, VAR_13);
   if (!VAR_8->msi_name[VAR_13]) {
    VAR_12 = -VAR_1;
    goto free_msix_irqs;
   }

   VAR_12 = FUNC_5(FUNC_4(VAR_9, VAR_13),
       VAR_7, 0, VAR_8->msi_name[VAR_13],
       &VAR_11->be_eq[VAR_13]);
   if (VAR_12) {
    FUNC_0(VAR_8, VAR_4, VAR_0,
         "BM_%d : beiscsi_init_irqs-Failed to"
         "register msix for i = %d\n",
         VAR_13);
    FUNC_3(VAR_8->msi_name[VAR_13]);
    goto free_msix_irqs;
   }
  }
  VAR_8->msi_name[VAR_13] = FUNC_2(VAR_2, "beiscsi_mcc_%02x",
           VAR_8->shost->host_no);
  if (!VAR_8->msi_name[VAR_13]) {
   VAR_12 = -VAR_1;
   goto free_msix_irqs;
  }
  VAR_12 = FUNC_5(FUNC_4(VAR_9, VAR_13), VAR_6, 0,
      VAR_8->msi_name[VAR_13], &VAR_11->be_eq[VAR_13]);
  if (VAR_12) {
   FUNC_0(VAR_8, VAR_4, VAR_0 ,
        "BM_%d : beiscsi_init_irqs-"
        "Failed to register beiscsi_msix_mcc\n");
   FUNC_3(VAR_8->msi_name[VAR_13]);
   goto free_msix_irqs;
  }

 } else {
  VAR_12 = FUNC_5(VAR_9->irq, VAR_5, VAR_3,
      "beiscsi", VAR_8);
  if (VAR_12) {
   FUNC_0(VAR_8, VAR_4, VAR_0,
        "BM_%d : beiscsi_init_irqs-"
        "Failed to register irq\\n");
   return VAR_12;
  }
 }
 return 0;
free_msix_irqs:
 for (VAR_14 = VAR_13 - 1; VAR_14 >= 0; VAR_14--) {
  FUNC_1(FUNC_4(VAR_9, VAR_13), &VAR_11->be_eq[VAR_14]);
  FUNC_3(VAR_8->msi_name[VAR_14]);
 }
 return VAR_12;
}
