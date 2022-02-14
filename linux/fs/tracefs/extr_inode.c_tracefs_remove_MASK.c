
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_inode; struct dentry* d_parent; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,struct dentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_5(struct dentry *VAR_2)
{
 struct dentry *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2))
  return;

 VAR_3 = VAR_2->d_parent;
 FUNC_2(VAR_3->d_inode);
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 FUNC_3(VAR_3->d_inode);
 if (!VAR_4)
  FUNC_4(&VAR_0, &VAR_1);
}
