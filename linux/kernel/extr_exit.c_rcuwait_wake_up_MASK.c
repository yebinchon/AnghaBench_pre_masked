
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rcuwait {int task; } ;


 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*) ;

void FUNC_5(struct rcuwait *VAR_0)
{
 struct task_struct *VAR_1;

 FUNC_1();
 FUNC_3();

 VAR_1 = FUNC_0(VAR_0->task);
 if (VAR_1)
  FUNC_4(VAR_1);
 FUNC_2();
}
