
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
struct file {int f_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct task_struct* VAR_1 ;

void FUNC_3(struct file *VAR_2)
{
 if (FUNC_2(&VAR_2->f_count)) {
  struct task_struct *VAR_3 = VAR_1;
  FUNC_0(!(VAR_3->flags & VAR_0));
  FUNC_1(VAR_2);
 }
}
