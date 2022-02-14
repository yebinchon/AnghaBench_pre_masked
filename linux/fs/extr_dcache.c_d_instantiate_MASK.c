
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lock; } ;
struct TYPE_2__ {int d_alias; } ;
struct dentry {TYPE_1__ d_u; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct dentry *VAR_0, struct inode * VAR_1)
{
 FUNC_0(!FUNC_2(&VAR_0->d_u.d_alias));
 if (VAR_1) {
  FUNC_3(VAR_0, VAR_1);
  FUNC_4(&VAR_1->i_lock);
  FUNC_1(VAR_0, VAR_1);
  FUNC_5(&VAR_1->i_lock);
 }
}
