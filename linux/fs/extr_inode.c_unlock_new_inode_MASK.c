
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int ) ;

void FUNC_6(struct inode *VAR_3)
{
 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->i_lock);
 FUNC_0(!(VAR_3->i_state & VAR_1));
 VAR_3->i_state &= ~VAR_1 & ~VAR_0;
 FUNC_2();
 FUNC_5(&VAR_3->i_state, VAR_2);
 FUNC_4(&VAR_3->i_lock);
}
