
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock {int dummy; } ;
struct dlm_ctxt {int ast_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_lock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dlm_ctxt *VAR_0, struct dlm_lock *VAR_1)
{
 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);

 FUNC_2(&VAR_0->ast_lock);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_0->ast_lock);
}
