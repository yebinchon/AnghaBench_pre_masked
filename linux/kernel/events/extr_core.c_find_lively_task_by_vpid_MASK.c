
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int pid_t ;


 struct task_struct* FUNC_0 (int ) ;
 int VAR_0 ;
 struct task_struct* VAR_1 ;
 struct task_struct* FUNC_1 (int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static struct task_struct *
FUNC_5(pid_t VAR_2)
{
 struct task_struct *VAR_3;

 FUNC_3();
 if (!VAR_2)
  VAR_3 = VAR_1;
 else
  VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_2(VAR_3);
 FUNC_4();

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 return VAR_3;
}
