
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_ns_operations {int name; } ;
struct inode {int i_ino; } ;
struct dentry {struct proc_ns_operations* d_fsdata; } ;


 struct inode* FUNC_0 (struct dentry*) ;
 char* FUNC_1 (struct dentry*,char*,int,char*,int ,int ) ;

__attribute__((used)) static char *FUNC_2(struct dentry *VAR_0, char *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_0);
 const struct proc_ns_operations *VAR_4 = VAR_0->d_fsdata;

 return FUNC_1(VAR_0, VAR_1, VAR_2, "%s:[%lu]",
  VAR_4->name, VAR_3->i_ino);
}
