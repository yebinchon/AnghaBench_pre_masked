
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct proc_maps_private* private; } ;
struct proc_maps_private {scalar_t__ mm; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct seq_file *VAR_2 = VAR_1->private_data;
 struct proc_maps_private *VAR_3 = VAR_2->private;

 if (VAR_3->mm)
  FUNC_0(VAR_3->mm);

 return FUNC_1(VAR_0, VAR_1);
}
