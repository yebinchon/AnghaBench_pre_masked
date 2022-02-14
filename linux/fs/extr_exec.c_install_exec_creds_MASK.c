
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct linux_binprm {int * cred; } ;
struct TYPE_5__ {TYPE_1__* signal; int mm; } ;
struct TYPE_4__ {int cred_guard_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct linux_binprm*) ;
 int FUNC_5 (struct linux_binprm*) ;

void FUNC_6(struct linux_binprm *VAR_2)
{
 FUNC_5(VAR_2);

 FUNC_0(VAR_2->cred);
 VAR_2->cred = ((void*)0);







 if (FUNC_1(VAR_1->mm) != VAR_0)
  FUNC_3(VAR_1);





 FUNC_4(VAR_2);
 FUNC_2(&VAR_1->signal->cred_guard_mutex);
}
