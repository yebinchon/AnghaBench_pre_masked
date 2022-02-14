
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {struct be_eq_obj* be_eq; } ;
struct beiscsi_hba {unsigned int num_cpus; int boot_work; int eqd_update; int pcidev; struct hwi_controller* phwi_ctrlr; int state; } ;
struct be_eq_obj {int mcc_work; int iopoll; } ;


 int VAR_0 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 scalar_t__ FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct beiscsi_hba*) ;
 int FUNC_6 (struct beiscsi_hba*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct beiscsi_hba *VAR_1, int VAR_2)
{
 struct hwi_context_memory *VAR_3;
 struct hwi_controller *VAR_4;
 struct be_eq_obj *VAR_5;
 unsigned int VAR_6;

 if (!FUNC_9(VAR_0, &VAR_1->state))
  return;

 VAR_4 = VAR_1->phwi_ctrlr;
 VAR_3 = VAR_4->phwi_ctxt;
 FUNC_6(VAR_1);
 FUNC_1(VAR_1);
 FUNC_8(VAR_1->pcidev);

 for (VAR_6 = 0; VAR_6 < VAR_1->num_cpus; VAR_6++) {
  VAR_5 = &VAR_3->be_eq[VAR_6];
  FUNC_7(&VAR_5->iopoll);
 }
 FUNC_3(&VAR_1->eqd_update);
 FUNC_4(&VAR_1->boot_work);

 if (!VAR_2 && FUNC_2(VAR_1)) {
  VAR_5 = &VAR_3->be_eq[VAR_6];
  FUNC_4(&VAR_5->mcc_work);
 }
 FUNC_5(VAR_1);
 FUNC_0(VAR_1);
}
