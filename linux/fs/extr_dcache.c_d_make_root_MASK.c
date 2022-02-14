
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct inode*) ;

struct dentry *FUNC_3(struct inode *VAR_0)
{
 struct dentry *VAR_1 = ((void*)0);

 if (VAR_0) {
  VAR_1 = FUNC_0(VAR_0->i_sb);
  if (VAR_1)
   FUNC_1(VAR_1, VAR_0);
  else
   FUNC_2(VAR_0);
 }
 return VAR_1;
}
