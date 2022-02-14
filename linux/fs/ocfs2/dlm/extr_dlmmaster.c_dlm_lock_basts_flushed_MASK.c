
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock {int spinlock; int bast_pending; int bast_list; } ;
struct dlm_ctxt {int ast_lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dlm_ctxt *VAR_0, struct dlm_lock *VAR_1)
{
 int VAR_2;
 FUNC_1(&VAR_0->ast_lock);
 FUNC_1(&VAR_1->spinlock);
 VAR_2 = (FUNC_0(&VAR_1->bast_list) && !VAR_1->bast_pending);
 FUNC_2(&VAR_1->spinlock);
 FUNC_2(&VAR_0->ast_lock);
 return VAR_2;
}
