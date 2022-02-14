
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct fs_struct* fs; } ;
struct fs_struct {int lock; int users; } ;


 int FUNC_0 (struct fs_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;

void FUNC_5(struct task_struct *VAR_0)
{
 struct fs_struct *VAR_1 = VAR_0->fs;

 if (VAR_1) {
  int VAR_2;
  FUNC_3(VAR_0);
  FUNC_1(&VAR_1->lock);
  VAR_0->fs = ((void*)0);
  VAR_2 = !--VAR_1->users;
  FUNC_2(&VAR_1->lock);
  FUNC_4(VAR_0);
  if (VAR_2)
   FUNC_0(VAR_1);
 }
}
