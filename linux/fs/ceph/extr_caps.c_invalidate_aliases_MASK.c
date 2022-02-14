
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,struct inode*) ;
 int FUNC_4 (struct dentry*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 struct dentry *VAR_1, *VAR_2 = ((void*)0);

 FUNC_3("invalidate_aliases inode %p\n", VAR_0);
 FUNC_2(VAR_0);
 while ((VAR_1 = FUNC_0(VAR_0))) {
  if (VAR_1 == VAR_2) {
   FUNC_4(VAR_1);
   break;
  }
  FUNC_1(VAR_1);
  if (VAR_2)
   FUNC_4(VAR_2);
  VAR_2 = VAR_1;
 }
 if (VAR_2)
  FUNC_4(VAR_2);
}
