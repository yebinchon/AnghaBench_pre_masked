
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fs3270 {int view; int * fs_pid; } ;
struct file {struct fs3270* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct fs3270 *VAR_2;

 VAR_2 = VAR_1->private_data;
 VAR_1->private_data = ((void*)0);
 if (VAR_2) {
  FUNC_0(VAR_2->fs_pid);
  VAR_2->fs_pid = ((void*)0);
  FUNC_3(&VAR_2->view);
  FUNC_2(&VAR_2->view);
  FUNC_1(&VAR_2->view);
 }
 return 0;
}
