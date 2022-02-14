
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flags; } ;
struct TYPE_2__ {unsigned int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 TYPE_1__* FUNC_0 (struct inode*) ;

void FUNC_1(struct inode *VAR_10)
{
 unsigned int VAR_11 = FUNC_0(VAR_10)->flags;

 VAR_10->i_flags &= ~(VAR_4 | VAR_0 | VAR_3 | VAR_1 |
       VAR_2);
 if (VAR_11 & VAR_9)
  VAR_10->i_flags |= VAR_4;
 if (VAR_11 & VAR_5)
  VAR_10->i_flags |= VAR_0;
 if (VAR_11 & VAR_8)
  VAR_10->i_flags |= VAR_3;
 if (VAR_11 & VAR_7)
  VAR_10->i_flags |= VAR_1;
 if (VAR_11 & VAR_6)
  VAR_10->i_flags |= VAR_2;
}
