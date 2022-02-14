
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_work_item {struct dlm_ctxt* dlm; void* data; int list; int * func; } ;
struct dlm_ctxt {int dummy; } ;
typedef int dlm_workfunc_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_work_item*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct dlm_ctxt *VAR_0,
          struct dlm_work_item *VAR_1,
          dlm_workfunc_t *VAR_2, void *VAR_3)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->func = VAR_2;
 FUNC_0(&VAR_1->list);
 VAR_1->data = VAR_3;
 VAR_1->dlm = VAR_0;
}
