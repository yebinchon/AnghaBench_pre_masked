
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int spinlock; } ;
struct dlm_ctxt {int dummy; } ;


 int FUNC_0 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dlm_ctxt *VAR_0,
  struct dlm_lock_resource *VAR_1)
{
 FUNC_1(&VAR_1->spinlock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->spinlock);
}
