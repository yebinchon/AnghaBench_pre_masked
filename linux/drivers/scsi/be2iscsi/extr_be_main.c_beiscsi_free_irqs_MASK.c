
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwi_context_memory {struct beiscsi_hba* be_eq; } ;
struct beiscsi_hba {int num_cpus; int * msi_name; TYPE_2__* pcidev; TYPE_1__* phwi_ctrlr; } ;
struct TYPE_4__ {scalar_t__ irq; int msix_enabled; } ;
struct TYPE_3__ {struct hwi_context_memory* phwi_ctxt; } ;


 int FUNC_0 (scalar_t__,struct beiscsi_hba*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(struct beiscsi_hba *VAR_0)
{
 struct hwi_context_memory *VAR_1;
 int VAR_2;

 if (!VAR_0->pcidev->msix_enabled) {
  if (VAR_0->pcidev->irq)
   FUNC_0(VAR_0->pcidev->irq, VAR_0);
  return;
 }

 VAR_1 = VAR_0->phwi_ctrlr->phwi_ctxt;
 for (VAR_2 = 0; VAR_2 <= VAR_0->num_cpus; VAR_2++) {
  FUNC_0(FUNC_2(VAR_0->pcidev, VAR_2),
    &VAR_1->be_eq[VAR_2]);
  FUNC_1(VAR_0->msi_name[VAR_2]);
 }
}
