
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_state; int i_lock; } ;
struct TYPE_2__ {int d_alias; } ;
struct dentry {TYPE_1__ d_u; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int*,int ) ;

void FUNC_10(struct dentry *VAR_3, struct inode *VAR_4)
{
 FUNC_0(!FUNC_3(&VAR_3->d_u.d_alias));
 FUNC_0(!VAR_4);
 FUNC_4(VAR_4);
 FUNC_5(VAR_3, VAR_4);
 FUNC_7(&VAR_4->i_lock);
 FUNC_2(VAR_3, VAR_4);
 FUNC_1(!(VAR_4->i_state & VAR_1));
 VAR_4->i_state &= ~VAR_1 & ~VAR_0;
 FUNC_6();
 FUNC_9(&VAR_4->i_state, VAR_2);
 FUNC_8(&VAR_4->i_lock);
}
