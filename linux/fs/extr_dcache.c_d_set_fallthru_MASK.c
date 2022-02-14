
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; int d_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dentry *VAR_1)
{
 FUNC_0(&VAR_1->d_lock);
 VAR_1->d_flags |= VAR_0;
 FUNC_1(&VAR_1->d_lock);
}
