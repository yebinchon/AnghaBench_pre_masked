
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct dentry* d_parent; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;

void FUNC_6(struct dentry *VAR_2)
{
 struct dentry *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2))
  return;

 VAR_3 = VAR_2->d_parent;
 FUNC_3(FUNC_2(VAR_3));
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 FUNC_4(FUNC_2(VAR_3));
 if (!VAR_4)
  FUNC_5(&VAR_0, &VAR_1);
}
