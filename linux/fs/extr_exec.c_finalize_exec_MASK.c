
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct linux_binprm {int rlim_stack; } ;
struct TYPE_4__ {int group_leader; TYPE_1__* signal; } ;
struct TYPE_3__ {int * rlim; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct linux_binprm *VAR_2)
{

 FUNC_0(VAR_1->group_leader);
 VAR_1->signal->rlim[VAR_0] = VAR_2->rlim_stack;
 FUNC_1(VAR_1->group_leader);
}
