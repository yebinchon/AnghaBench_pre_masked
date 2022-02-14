
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct proc_ns_operations {int name; } ;
struct inode {int i_ino; } ;
struct dentry {struct proc_ns_operations* d_fsdata; } ;


 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_0(VAR_1);
 const struct proc_ns_operations *VAR_3 = VAR_1->d_fsdata;

 FUNC_1(VAR_0, "%s:[%lu]", VAR_3->name, VAR_2->i_ino);
 return 0;
}
