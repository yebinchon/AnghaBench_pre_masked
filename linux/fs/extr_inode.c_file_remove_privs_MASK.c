
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct file {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,int) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct file*) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (struct inode*) ;

int FUNC_7(struct file *VAR_0)
{
 struct dentry *VAR_1 = FUNC_4(VAR_0);
 struct inode *VAR_2 = FUNC_5(VAR_0);
 int VAR_3;
 int VAR_4 = 0;







 if (FUNC_0(VAR_2) || !FUNC_1(VAR_2->i_mode))
  return 0;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3)
  VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_4)
  FUNC_6(VAR_2);

 return VAR_4;
}
