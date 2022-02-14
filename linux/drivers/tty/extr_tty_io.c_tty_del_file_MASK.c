
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int files_lock; } ;
struct tty_file_private {int list; struct tty_struct* tty; } ;
struct file {struct tty_file_private* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*) ;

__attribute__((used)) static void FUNC_4(struct file *VAR_0)
{
 struct tty_file_private *VAR_1 = VAR_0->private_data;
 struct tty_struct *VAR_2 = VAR_1->tty;

 FUNC_1(&VAR_2->files_lock);
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_2->files_lock);
 FUNC_3(VAR_0);
}
