
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct linux_binprm {struct mm_struct* mm; int rlim_stack; } ;
struct TYPE_4__ {int group_leader; TYPE_1__* signal; } ;
struct TYPE_3__ {int * rlim; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct linux_binprm*) ;
 TYPE_2__* VAR_2 ;
 struct mm_struct* FUNC_1 () ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct linux_binprm *VAR_3)
{
 int VAR_4;
 struct mm_struct *VAR_5 = ((void*)0);

 VAR_3->mm = VAR_5 = FUNC_1();
 VAR_4 = -VAR_0;
 if (!VAR_5)
  goto err;


 FUNC_3(VAR_2->group_leader);
 VAR_3->rlim_stack = VAR_2->signal->rlim[VAR_1];
 FUNC_4(VAR_2->group_leader);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  goto err;

 return 0;

err:
 if (VAR_5) {
  VAR_3->mm = ((void*)0);
  FUNC_2(VAR_5);
 }

 return VAR_4;
}
