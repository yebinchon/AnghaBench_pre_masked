
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int dummy; } ;
struct dlm_lock {struct dlm_lock_resource* lockres; } ;


 int FUNC_0 (struct dlm_lock_resource*) ;

void FUNC_1(struct dlm_lock *VAR_0,
        struct dlm_lock_resource *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_0->lockres = VAR_1;
}
