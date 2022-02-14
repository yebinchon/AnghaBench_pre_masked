
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_5__ {int i_flags; } ;
struct TYPE_4__ {int (* rmdir ) (struct inode*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*,struct dentry*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*,struct dentry*,int) ;
 int FUNC_10 (struct inode*,struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct inode*,struct dentry*) ;

int FUNC_13(struct inode *VAR_3, struct dentry *VAR_4)
{
 int VAR_5 = FUNC_9(VAR_3, VAR_4, 1);

 if (VAR_5)
  return VAR_5;

 if (!VAR_3->i_op->rmdir)
  return -VAR_1;

 FUNC_2(VAR_4);
 FUNC_6(VAR_4->d_inode);

 VAR_5 = -VAR_0;
 if (FUNC_8(VAR_4))
  goto out;

 VAR_5 = FUNC_10(VAR_3, VAR_4);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_3->i_op->rmdir(VAR_3, VAR_4);
 if (VAR_5)
  goto out;

 FUNC_11(VAR_4);
 VAR_4->d_inode->i_flags |= VAR_2;
 FUNC_3(VAR_4);
 FUNC_1(VAR_4);
 FUNC_5(VAR_3, VAR_4);

out:
 FUNC_7(VAR_4->d_inode);
 FUNC_4(VAR_4);
 if (!VAR_5)
  FUNC_0(VAR_4);
 return VAR_5;
}
