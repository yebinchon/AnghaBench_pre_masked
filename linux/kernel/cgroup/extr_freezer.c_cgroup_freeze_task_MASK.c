
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int jobctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,unsigned long*) ;
 int FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (struct task_struct*,unsigned long*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_1, bool VAR_2)
{
 unsigned long VAR_3;


 if (!FUNC_0(VAR_1, &VAR_3))
  return;

 if (VAR_2) {
  VAR_1->jobctl |= VAR_0;
  FUNC_1(VAR_1, 0);
 } else {
  VAR_1->jobctl &= ~VAR_0;
  FUNC_3(VAR_1);
 }

 FUNC_2(VAR_1, &VAR_3);
}
