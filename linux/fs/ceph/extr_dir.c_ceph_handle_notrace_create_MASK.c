
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct inode*,struct dentry*,int ) ;
 int FUNC_3 (struct dentry*) ;

int FUNC_4(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct dentry *VAR_3 = FUNC_2(VAR_1, VAR_2, 0);

 if (VAR_3 && !FUNC_0(VAR_3)) {
  FUNC_3(VAR_3);
  return -VAR_0;
 }
 return FUNC_1(VAR_3);
}
