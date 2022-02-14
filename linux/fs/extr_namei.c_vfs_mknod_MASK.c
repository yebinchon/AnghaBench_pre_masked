
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {TYPE_1__* i_op; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {int (* mknod ) (struct inode*,struct dentry*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (struct inode*,struct dentry*) ;
 int FUNC_6 (struct inode*,struct dentry*,int ,int ) ;
 int FUNC_7 (struct inode*,struct dentry*,int ,int ) ;

int FUNC_8(struct inode *VAR_2, struct dentry *VAR_3, umode_t VAR_4, dev_t VAR_5)
{
 int VAR_6 = FUNC_5(VAR_2, VAR_3);

 if (VAR_6)
  return VAR_6;

 if ((FUNC_1(VAR_4) || FUNC_0(VAR_4)) && !FUNC_2(VAR_0))
  return -VAR_1;

 if (!VAR_2->i_op->mknod)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_2->i_op->mknod(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_6)
  FUNC_4(VAR_2, VAR_3);
 return VAR_6;
}
