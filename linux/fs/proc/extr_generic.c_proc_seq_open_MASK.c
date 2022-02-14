
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int seq_ops; scalar_t__ state_size; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int ) ;
 int FUNC_2 (struct file*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct proc_dir_entry *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->state_size)
  return FUNC_2(VAR_1, VAR_2->seq_ops, VAR_2->state_size);
 return FUNC_1(VAR_1, VAR_2->seq_ops);
}
