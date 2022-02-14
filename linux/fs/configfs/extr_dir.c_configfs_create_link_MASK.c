
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {char* i_link; int * i_op; } ;
struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int s_frag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_2 (struct dentry*,int) ;
 int FUNC_3 (struct configfs_dirent*,struct dentry*,struct configfs_dirent*,int,int ,int ) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct dentry*) ;

int FUNC_7(struct configfs_dirent *VAR_4, struct dentry *VAR_5,
  struct dentry *VAR_6, char *VAR_7)
{
 int VAR_8 = 0;
 umode_t VAR_9 = VAR_1 | VAR_2;
 struct configfs_dirent *VAR_10 = VAR_5->d_fsdata;
 struct inode *VAR_11;

 VAR_8 = FUNC_3(VAR_10, VAR_6, VAR_4, VAR_9, VAR_0,
   VAR_10->s_frag);
 if (VAR_8)
  return VAR_8;

 VAR_11 = FUNC_2(VAR_6, VAR_9);
 if (FUNC_0(VAR_11))
  goto out_remove;

 VAR_11->i_link = VAR_7;
 VAR_11->i_op = &VAR_3;
 FUNC_5(VAR_6, VAR_11);
 FUNC_6(VAR_6);
 return 0;

out_remove:
 FUNC_4(VAR_6);
 return FUNC_1(VAR_11);
}
