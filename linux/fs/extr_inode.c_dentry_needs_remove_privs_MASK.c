
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;

int FUNC_4(struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = 0;
 int VAR_4;

 if (FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4)
  VAR_3 |= VAR_0;
 return VAR_3;
}
