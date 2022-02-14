
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int fs; } ;
struct fs_struct {int lock; int users; scalar_t__ in_exec; } ;
struct TYPE_2__ {struct fs_struct* fs; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fs_struct*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_4, struct task_struct *VAR_5)
{
 struct fs_struct *VAR_6 = VAR_3->fs;
 if (VAR_4 & VAR_0) {

  FUNC_1(&VAR_6->lock);
  if (VAR_6->in_exec) {
   FUNC_2(&VAR_6->lock);
   return -VAR_1;
  }
  VAR_6->users++;
  FUNC_2(&VAR_6->lock);
  return 0;
 }
 VAR_5->fs = FUNC_0(VAR_6);
 if (!VAR_5->fs)
  return -VAR_2;
 return 0;
}
