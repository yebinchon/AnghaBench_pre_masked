
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {struct be_eq_obj* be_eq; } ;
struct beiscsi_hba {size_t num_cpus; struct hwi_controller* phwi_ctrlr; } ;
struct be_eq_obj {int iopoll; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_eq_obj*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct beiscsi_hba *VAR_1)
{
 uint16_t VAR_2;
 struct be_eq_obj *VAR_3;
 struct hwi_controller *VAR_4;
 struct hwi_context_memory *VAR_5;

 VAR_4 = VAR_1->phwi_ctrlr;
 VAR_5 = VAR_4->phwi_ctxt;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_cpus; VAR_2++) {
  VAR_3 = &VAR_5->be_eq[VAR_2];
  FUNC_1(&VAR_3->iopoll);
  FUNC_0(VAR_3, VAR_0);
  FUNC_2(&VAR_3->iopoll);
 }
}
