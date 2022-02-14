
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int dummy; } ;
struct dlm_lock {struct dlm_lock_resource* lockres; } ;


 int FUNC_0 (struct dlm_lock_resource*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct dlm_lock *VAR_0)
{
 struct dlm_lock_resource *VAR_1;

 VAR_1 = VAR_0->lockres;
 if (VAR_1) {
  VAR_0->lockres = ((void*)0);
  FUNC_1(0, "removing lock's lockres reference\n");
  FUNC_0(VAR_1);
 }
}
