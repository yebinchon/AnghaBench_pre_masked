
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int mode; } ;
struct inode {int i_mode; int i_gid; int i_uid; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct proc_dir_entry*,int ,int ) ;
 int FUNC_4 (struct inode*,struct iattr*) ;
 int FUNC_5 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_0, struct iattr *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_0);
 struct proc_dir_entry *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_5(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_4(VAR_2, VAR_1);
 FUNC_2(VAR_2);

 FUNC_3(VAR_3, VAR_2->i_uid, VAR_2->i_gid);
 VAR_3->mode = VAR_2->i_mode;
 return 0;
}
