
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int i_state; int __i_nlink; TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_remove_count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct inode *VAR_1)
{
 if (FUNC_2(VAR_1->i_nlink == 0)) {
  FUNC_0(!(VAR_1->i_state & VAR_0));
  FUNC_1(&VAR_1->i_sb->s_remove_count);
 }

 VAR_1->__i_nlink++;
}
