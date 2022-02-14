
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_struct {int file_lock; } ;
struct file {int dummy; } ;
struct fdtable {unsigned int max_fds; unsigned long* close_on_exec; struct file** fd; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct files_struct*,unsigned int) ;
 int FUNC_1 () ;
 struct fdtable* FUNC_2 (struct files_struct*) ;
 int FUNC_3 (struct file*,struct files_struct*) ;
 int FUNC_4 (struct file*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct files_struct *VAR_1)
{
 unsigned VAR_2;
 struct fdtable *VAR_3;


 FUNC_5(&VAR_1->file_lock);
 for (VAR_2 = 0; ; VAR_2++) {
  unsigned long VAR_4;
  unsigned VAR_5 = VAR_2 * VAR_0;
  VAR_3 = FUNC_2(VAR_1);
  if (VAR_5 >= VAR_3->max_fds)
   break;
  VAR_4 = VAR_3->close_on_exec[VAR_2];
  if (!VAR_4)
   continue;
  VAR_3->close_on_exec[VAR_2] = 0;
  for ( ; VAR_4 ; VAR_5++, VAR_4 >>= 1) {
   struct file *VAR_6;
   if (!(VAR_4 & 1))
    continue;
   VAR_6 = VAR_3->fd[VAR_5];
   if (!VAR_6)
    continue;
   FUNC_4(VAR_3->fd[VAR_5], ((void*)0));
   FUNC_0(VAR_1, VAR_5);
   FUNC_6(&VAR_1->file_lock);
   FUNC_3(VAR_6, VAR_1);
   FUNC_1();
   FUNC_5(&VAR_1->file_lock);
  }

 }
 FUNC_6(&VAR_1->file_lock);
}
