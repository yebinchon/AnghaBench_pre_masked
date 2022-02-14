
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_lock; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_0(VAR_1);
 bool VAR_3;

 FUNC_1(&VAR_2->i_lock);
 VAR_3 = (VAR_2->i_state & VAR_0);
 FUNC_2(&VAR_2->i_lock);

 return VAR_3;
}
