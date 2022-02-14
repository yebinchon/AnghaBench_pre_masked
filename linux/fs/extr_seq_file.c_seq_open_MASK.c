
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct seq_file {struct file* file; struct seq_operations const* op; int lock; } ;
struct file {int f_mode; scalar_t__ f_version; struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*) ;
 struct seq_file* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;

int FUNC_3(struct file *VAR_4, const struct seq_operations *VAR_5)
{
 struct seq_file *VAR_6;

 FUNC_0(VAR_4->private_data);

 VAR_6 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->private_data = VAR_6;

 FUNC_2(&VAR_6->lock);
 VAR_6->op = VAR_5;



 VAR_6->file = VAR_4;






 VAR_4->f_version = 0;
 VAR_4->f_mode &= ~VAR_1;
 return 0;
}
