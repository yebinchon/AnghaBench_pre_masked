
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {TYPE_1__* i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* create ) (struct inode*,struct dentry*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*,int ) ;
 int FUNC_3 (struct inode*,struct dentry*,int ,int) ;

int FUNC_4(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5,
  bool VAR_6)
{
 int VAR_7 = FUNC_1(VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 if (!VAR_3->i_op->create)
  return -VAR_0;
 VAR_5 &= VAR_1;
 VAR_5 |= VAR_2;
 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_7 = VAR_3->i_op->create(VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_7)
  FUNC_0(VAR_3, VAR_4);
 return VAR_7;
}
