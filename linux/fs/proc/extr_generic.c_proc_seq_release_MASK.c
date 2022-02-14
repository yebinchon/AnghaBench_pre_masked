
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {scalar_t__ state_size; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct proc_dir_entry *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->state_size)
  return FUNC_2(VAR_0, VAR_1);
 return FUNC_1(VAR_0, VAR_1);
}
