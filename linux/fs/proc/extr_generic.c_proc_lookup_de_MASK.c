
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {int proc_dops; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,int ) ;
 struct dentry* FUNC_2 (struct inode*,struct dentry*) ;
 int FUNC_3 (struct proc_dir_entry*) ;
 struct proc_dir_entry* FUNC_4 (struct proc_dir_entry*,int ,int ) ;
 struct inode* FUNC_5 (int ,struct proc_dir_entry*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct dentry *FUNC_8(struct inode *VAR_3, struct dentry *VAR_4,
         struct proc_dir_entry *VAR_5)
{
 struct inode *VAR_6;

 FUNC_6(&VAR_2);
 VAR_5 = FUNC_4(VAR_5, VAR_4->d_name.name, VAR_4->d_name.len);
 if (VAR_5) {
  FUNC_3(VAR_5);
  FUNC_7(&VAR_2);
  VAR_6 = FUNC_5(VAR_3->i_sb, VAR_5);
  if (!VAR_6)
   return FUNC_0(-VAR_1);
  FUNC_1(VAR_4, VAR_5->proc_dops);
  return FUNC_2(VAR_6, VAR_4);
 }
 FUNC_7(&VAR_2);
 return FUNC_0(-VAR_0);
}
