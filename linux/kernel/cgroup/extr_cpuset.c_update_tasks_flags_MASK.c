
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct css_task_iter {int dummy; } ;
struct cpuset {int css; } ;


 int FUNC_0 (struct cpuset*,struct task_struct*) ;
 int FUNC_1 (struct css_task_iter*) ;
 struct task_struct* FUNC_2 (struct css_task_iter*) ;
 int FUNC_3 (int *,int ,struct css_task_iter*) ;

__attribute__((used)) static void FUNC_4(struct cpuset *VAR_0)
{
 struct css_task_iter VAR_1;
 struct task_struct *VAR_2;

 FUNC_3(&VAR_0->css, 0, &VAR_1);
 while ((VAR_2 = FUNC_2(&VAR_1)))
  FUNC_0(VAR_0, VAR_2);
 FUNC_1(&VAR_1);
}
