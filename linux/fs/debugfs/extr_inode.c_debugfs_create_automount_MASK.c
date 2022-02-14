
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {void* i_private; int i_flags; } ;
struct dentry {int d_parent; void* d_fsdata; int d_sb; } ;
typedef scalar_t__ debugfs_automount_t ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 struct inode* FUNC_3 (int ) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*,struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*,char const*) ;
 struct dentry* FUNC_10 (char const*,struct dentry*) ;
 scalar_t__ FUNC_11 (int) ;

struct dentry *FUNC_12(const char *VAR_1,
     struct dentry *VAR_2,
     debugfs_automount_t VAR_3,
     void *VAR_4)
{
 struct dentry *VAR_5 = FUNC_10(VAR_1, VAR_2);
 struct inode *VAR_6;

 if (FUNC_0(VAR_5))
  return VAR_5;

 VAR_6 = FUNC_3(VAR_5->d_sb);
 if (FUNC_11(!VAR_6)) {
  FUNC_9("out of free dentries, can not create automount '%s'\n",
         VAR_1);
  return FUNC_5(VAR_5);
 }

 FUNC_8(VAR_6);
 VAR_6->i_flags |= VAR_0;
 VAR_6->i_private = VAR_4;
 VAR_5->d_fsdata = (void *)VAR_3;

 FUNC_7(VAR_6);
 FUNC_2(VAR_5, VAR_6);
 FUNC_7(FUNC_1(VAR_5->d_parent));
 FUNC_6(FUNC_1(VAR_5->d_parent), VAR_5);
 return FUNC_4(VAR_5);
}
