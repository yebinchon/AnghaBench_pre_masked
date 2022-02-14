
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flags; int i_mode; int i_sb; } ;
struct TYPE_2__ {unsigned int i_flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3(struct inode *VAR_12)
{
 unsigned int VAR_13 = FUNC_0(VAR_12)->i_flags;

 VAR_12->i_flags &= ~(VAR_11 | VAR_6 | VAR_9 | VAR_10 |
    VAR_8 | VAR_7);
 if (VAR_13 & VAR_5)
  VAR_12->i_flags |= VAR_11;
 if (VAR_13 & VAR_1)
  VAR_12->i_flags |= VAR_6;
 if (VAR_13 & VAR_3)
  VAR_12->i_flags |= VAR_9;
 if (VAR_13 & VAR_4)
  VAR_12->i_flags |= VAR_10;
 if (VAR_13 & VAR_2)
  VAR_12->i_flags |= VAR_8;
 if (FUNC_2(VAR_12->i_sb, VAR_0) && FUNC_1(VAR_12->i_mode))
  VAR_12->i_flags |= VAR_7;
}
