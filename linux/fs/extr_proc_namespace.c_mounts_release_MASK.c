
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct proc_mounts* private; } ;
struct proc_mounts {int ns; int root; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct seq_file *VAR_2 = VAR_1->private_data;
 struct proc_mounts *VAR_3 = VAR_2->private;
 FUNC_0(&VAR_3->root);
 FUNC_1(VAR_3->ns);
 return FUNC_2(VAR_0, VAR_1);
}
