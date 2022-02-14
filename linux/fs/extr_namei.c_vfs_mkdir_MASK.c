
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct inode {unsigned int i_nlink; TYPE_2__* i_op; TYPE_1__* i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int (* mkdir ) (struct inode*,struct dentry*,int) ;} ;
struct TYPE_3__ {unsigned int s_max_links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*,int) ;
 int FUNC_3 (struct inode*,struct dentry*,int) ;

int FUNC_4(struct inode *VAR_4, struct dentry *VAR_5, umode_t VAR_6)
{
 int VAR_7 = FUNC_1(VAR_4, VAR_5);
 unsigned VAR_8 = VAR_4->i_sb->s_max_links;

 if (VAR_7)
  return VAR_7;

 if (!VAR_4->i_op->mkdir)
  return -VAR_1;

 VAR_6 &= (VAR_2|VAR_3);
 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 && VAR_4->i_nlink >= VAR_8)
  return -VAR_0;

 VAR_7 = VAR_4->i_op->mkdir(VAR_4, VAR_5, VAR_6);
 if (!VAR_7)
  FUNC_0(VAR_4, VAR_5);
 return VAR_7;
}
