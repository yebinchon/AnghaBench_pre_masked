
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct seq_file {struct seq_operations* op; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (struct seq_operations const*) ;
 int FUNC_1 (struct inode*,struct file*) ;

int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 const struct seq_operations *VAR_2 = ((struct seq_file *)VAR_1->private_data)->op;
 int VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2);
 return VAR_3;
}
