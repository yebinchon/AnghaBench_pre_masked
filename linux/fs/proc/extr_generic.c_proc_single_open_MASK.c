
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int data; int single_show; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct proc_dir_entry *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_2->single_show, VAR_2->data);
}
