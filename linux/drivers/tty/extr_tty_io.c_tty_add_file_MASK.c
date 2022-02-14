
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int files_lock; int tty_files; } ;
struct tty_file_private {int list; struct file* file; struct tty_struct* tty; } ;
struct file {struct tty_file_private* private_data; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct tty_file_private *VAR_2 = VAR_1->private_data;

 VAR_2->tty = VAR_0;
 VAR_2->file = VAR_1;

 FUNC_1(&VAR_0->files_lock);
 FUNC_0(&VAR_2->list, &VAR_0->tty_files);
 FUNC_2(&VAR_0->files_lock);
}
