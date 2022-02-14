
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_struct {int fdt; int file_lock; int resize_in_progress; } ;
struct file {int dummy; } ;
struct fdtable {int ** fd; } ;


 int FUNC_0 (int ) ;
 struct fdtable* FUNC_1 (struct files_struct*) ;
 int FUNC_2 (int *,struct file*) ;
 struct fdtable* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(struct files_struct *VAR_0, unsigned int VAR_1,
  struct file *VAR_2)
{
 struct fdtable *VAR_3;

 FUNC_4();

 if (FUNC_9(VAR_0->resize_in_progress)) {
  FUNC_5();
  FUNC_7(&VAR_0->file_lock);
  VAR_3 = FUNC_1(VAR_0);
  FUNC_0(VAR_3->fd[VAR_1] != ((void*)0));
  FUNC_2(VAR_3->fd[VAR_1], VAR_2);
  FUNC_8(&VAR_0->file_lock);
  return;
 }

 FUNC_6();
 VAR_3 = FUNC_3(VAR_0->fdt);
 FUNC_0(VAR_3->fd[VAR_1] != ((void*)0));
 FUNC_2(VAR_3->fd[VAR_1], VAR_2);
 FUNC_5();
}
