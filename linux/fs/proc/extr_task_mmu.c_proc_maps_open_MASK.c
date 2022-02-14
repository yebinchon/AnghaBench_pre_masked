
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int dummy; } ;
struct proc_maps_private {int mm; struct inode* inode; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct proc_maps_private* FUNC_2 (struct file*,struct seq_operations const*,int) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3,
   const struct seq_operations *VAR_4, int VAR_5)
{
 struct proc_maps_private *VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);

 if (!VAR_6)
  return -VAR_0;

 VAR_6->inode = VAR_2;
 VAR_6->mm = FUNC_3(VAR_2, VAR_1);
 if (FUNC_0(VAR_6->mm)) {
  int VAR_7 = FUNC_1(VAR_6->mm);

  FUNC_4(VAR_2, VAR_3);
  return VAR_7;
 }

 return 0;
}
