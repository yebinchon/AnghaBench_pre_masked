
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 struct inode* FUNC_3 (struct inode*,int ,int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, struct dentry *VAR_1, umode_t VAR_2)
{
 struct inode *VAR_3 = FUNC_3(VAR_0, VAR_2, ((void*)0));
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_2(VAR_1, VAR_3);
 FUNC_6(VAR_3);
 return 0;
}
