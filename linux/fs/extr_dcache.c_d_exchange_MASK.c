
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dentry*,struct dentry*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct dentry *VAR_1, struct dentry *VAR_2)
{
 FUNC_3(&VAR_0);

 FUNC_1(!VAR_1->d_inode);
 FUNC_1(!VAR_2->d_inode);
 FUNC_1(FUNC_0(VAR_1));
 FUNC_1(FUNC_0(VAR_2));

 FUNC_2(VAR_1, VAR_2, 1);

 FUNC_4(&VAR_0);
}
