
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct css_task_iter {int dummy; } ;
struct cpuset {int old_mems_allowed; int mems_allowed; int css; } ;
typedef int nodemask_t ;


 struct cpuset* VAR_0 ;
 int FUNC_0 (struct task_struct*,int *) ;
 int FUNC_1 (struct mm_struct*,int *,int *) ;
 int FUNC_2 (struct css_task_iter*) ;
 struct task_struct* FUNC_3 (struct css_task_iter*) ;
 int FUNC_4 (int *,int ,struct css_task_iter*) ;
 struct mm_struct* FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct cpuset*,int *) ;
 int FUNC_7 (struct cpuset*) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (struct mm_struct*,int *) ;

__attribute__((used)) static void FUNC_10(struct cpuset *VAR_1)
{
 static nodemask_t VAR_2;
 struct css_task_iter VAR_3;
 struct task_struct *VAR_4;

 VAR_0 = VAR_1;

 FUNC_6(VAR_1, &VAR_2);
 FUNC_4(&VAR_1->css, 0, &VAR_3);
 while ((VAR_4 = FUNC_3(&VAR_3))) {
  struct mm_struct *VAR_5;
  bool VAR_6;

  FUNC_0(VAR_4, &VAR_2);

  VAR_5 = FUNC_5(VAR_4);
  if (!VAR_5)
   continue;

  VAR_6 = FUNC_7(VAR_1);

  FUNC_9(VAR_5, &VAR_1->mems_allowed);
  if (VAR_6)
   FUNC_1(VAR_5, &VAR_1->old_mems_allowed, &VAR_2);
  else
   FUNC_8(VAR_5);
 }
 FUNC_2(&VAR_3);





 VAR_1->old_mems_allowed = VAR_2;


 VAR_0 = ((void*)0);
}
