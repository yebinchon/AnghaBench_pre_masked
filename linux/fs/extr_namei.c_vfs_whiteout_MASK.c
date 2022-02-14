
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* mknod ) (struct inode*,struct dentry*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (struct inode*,struct dentry*,int,int ) ;

int FUNC_2(struct inode *VAR_4, struct dentry *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 if (!VAR_4->i_op->mknod)
  return -VAR_0;

 return VAR_4->i_op->mknod(VAR_4, VAR_5,
    VAR_1 | VAR_3, VAR_2);
}
