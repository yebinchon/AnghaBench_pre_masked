
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_mode; void* i_private; struct file_operations const* i_fop; } ;
struct file_operations {int dummy; } ;
struct dentry {TYPE_1__* d_parent; int d_sb; } ;
struct TYPE_2__ {int d_inode; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,struct dentry*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct dentry* FUNC_8 (char const*,struct dentry*) ;
 struct file_operations const VAR_3 ;
 struct inode* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;

struct dentry *FUNC_11(const char *VAR_4, umode_t VAR_5,
       struct dentry *VAR_6, void *VAR_7,
       const struct file_operations *VAR_8)
{
 struct dentry *VAR_9;
 struct inode *VAR_10;

 if (FUNC_7(VAR_0))
  return ((void*)0);

 if (!(VAR_5 & VAR_1))
  VAR_5 |= VAR_2;
 FUNC_0(!FUNC_2(VAR_5));
 VAR_9 = FUNC_8(VAR_4, VAR_6);

 if (FUNC_1(VAR_9))
  return ((void*)0);

 VAR_10 = FUNC_9(VAR_9->d_sb);
 if (FUNC_10(!VAR_10))
  return FUNC_5(VAR_9);

 VAR_10->i_mode = VAR_5;
 VAR_10->i_fop = VAR_8 ? VAR_8 : &VAR_3;
 VAR_10->i_private = VAR_7;
 FUNC_3(VAR_9, VAR_10);
 FUNC_6(VAR_9->d_parent->d_inode, VAR_9);
 return FUNC_4(VAR_9);
}
