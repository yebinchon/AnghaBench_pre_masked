
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_ctime; int i_mtime; } ;
struct dentry {int d_parent; int d_sb; struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (int ) ;
 struct inode* FUNC_1 (int ,struct configfs_dirent*,int ) ;
 int FUNC_2 (struct configfs_dirent*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct dentry*) ;

struct inode *FUNC_6(struct dentry *VAR_3, umode_t VAR_4)
{
 struct inode *VAR_5 = ((void*)0);
 struct configfs_dirent *VAR_6;
 struct inode *VAR_7;

 if (!VAR_3)
  return FUNC_0(-VAR_1);

 if (FUNC_5(VAR_3))
  return FUNC_0(-VAR_0);

 VAR_6 = VAR_3->d_fsdata;
 VAR_5 = FUNC_1(VAR_4, VAR_6, VAR_3->d_sb);
 if (!VAR_5)
  return FUNC_0(-VAR_2);

 VAR_7 = FUNC_4(VAR_3->d_parent);
 VAR_7->i_mtime = VAR_7->i_ctime = FUNC_3(VAR_7);
 FUNC_2(VAR_6, VAR_5);
 return VAR_5;
}
