
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* symlink ) (struct inode*,struct dentry*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*,char const*) ;
 int FUNC_3 (struct inode*,struct dentry*,char const*) ;

int FUNC_4(struct inode *VAR_1, struct dentry *VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1, VAR_2);

 if (VAR_4)
  return VAR_4;

 if (!VAR_1->i_op->symlink)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_1->i_op->symlink(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  FUNC_0(VAR_1, VAR_2);
 return VAR_4;
}
