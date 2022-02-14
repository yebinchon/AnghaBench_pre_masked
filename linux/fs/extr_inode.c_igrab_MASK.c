
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct inode *FUNC_3(struct inode *VAR_2)
{
 FUNC_1(&VAR_2->i_lock);
 if (!(VAR_2->i_state & (VAR_0|VAR_1))) {
  FUNC_0(VAR_2);
  FUNC_2(&VAR_2->i_lock);
 } else {
  FUNC_2(&VAR_2->i_lock);





  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
