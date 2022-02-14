
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct mm_struct {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;
struct TYPE_3__ {int cred_guard_mutex; } ;


 int VAR_0 ;
 struct mm_struct* FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*,unsigned int) ;

struct mm_struct *FUNC_6(struct task_struct *VAR_2, unsigned int VAR_3)
{
 struct mm_struct *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(&VAR_2->signal->cred_guard_mutex);
 if (VAR_5)
  return FUNC_0(VAR_5);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 && VAR_4 != VAR_1->mm &&
   !FUNC_5(VAR_2, VAR_3)) {
  FUNC_2(VAR_4);
  VAR_4 = FUNC_0(-VAR_0);
 }
 FUNC_4(&VAR_2->signal->cred_guard_mutex);

 return VAR_4;
}
