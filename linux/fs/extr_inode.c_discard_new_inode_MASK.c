
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int*,int ) ;

void FUNC_7(struct inode *VAR_2)
{
 FUNC_2(VAR_2);
 FUNC_4(&VAR_2->i_lock);
 FUNC_0(!(VAR_2->i_state & VAR_0));
 VAR_2->i_state &= ~VAR_0;
 FUNC_3();
 FUNC_6(&VAR_2->i_state, VAR_1);
 FUNC_5(&VAR_2->i_lock);
 FUNC_1(VAR_2);
}
