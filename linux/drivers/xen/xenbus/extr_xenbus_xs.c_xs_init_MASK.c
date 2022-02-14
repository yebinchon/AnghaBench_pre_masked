
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 struct task_struct* FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 () ;

int FUNC_6(void)
{
 int VAR_2;
 struct task_struct *VAR_3;

 FUNC_3(&VAR_1);


 VAR_2 = FUNC_4();
 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_2(VAR_0, ((void*)0), "xenwatch");
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);


 FUNC_5();

 return 0;
}
