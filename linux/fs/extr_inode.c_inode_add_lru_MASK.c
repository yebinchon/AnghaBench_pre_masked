
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_state; TYPE_1__* i_sb; int i_count; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_5)
{
 if (!(VAR_5->i_state & (VAR_0 | VAR_2 |
    VAR_1 | VAR_3)) &&
     !FUNC_0(&VAR_5->i_count) && VAR_5->i_sb->s_flags & VAR_4)
  FUNC_1(VAR_5);
}
