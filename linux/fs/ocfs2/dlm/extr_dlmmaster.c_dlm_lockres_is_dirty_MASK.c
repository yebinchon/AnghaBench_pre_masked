
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int state; int spinlock; } ;
struct dlm_ctxt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dlm_ctxt *VAR_1,
    struct dlm_lock_resource *VAR_2)
{
 int VAR_3;
 FUNC_0(&VAR_2->spinlock);
 VAR_3 = !!(VAR_2->state & VAR_0);
 FUNC_1(&VAR_2->spinlock);
 return VAR_3;
}
