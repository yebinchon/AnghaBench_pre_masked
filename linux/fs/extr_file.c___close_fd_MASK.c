
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_struct {int file_lock; } ;
struct file {int dummy; } ;
struct fdtable {unsigned int max_fds; struct file** fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct files_struct*,unsigned int) ;
 struct fdtable* FUNC_1 (struct files_struct*) ;
 int FUNC_2 (struct file*,struct files_struct*) ;
 int FUNC_3 (struct file*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct files_struct *VAR_1, unsigned VAR_2)
{
 struct file *VAR_3;
 struct fdtable *VAR_4;

 FUNC_4(&VAR_1->file_lock);
 VAR_4 = FUNC_1(VAR_1);
 if (VAR_2 >= VAR_4->max_fds)
  goto out_unlock;
 VAR_3 = VAR_4->fd[VAR_2];
 if (!VAR_3)
  goto out_unlock;
 FUNC_3(VAR_4->fd[VAR_2], ((void*)0));
 FUNC_0(VAR_1, VAR_2);
 FUNC_5(&VAR_1->file_lock);
 return FUNC_2(VAR_3, VAR_1);

out_unlock:
 FUNC_5(&VAR_1->file_lock);
 return -VAR_0;
}
