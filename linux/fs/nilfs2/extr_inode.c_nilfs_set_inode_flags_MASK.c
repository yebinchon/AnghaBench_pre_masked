
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {unsigned int i_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (struct inode*,unsigned int,unsigned int) ;

void FUNC_2(struct inode *VAR_10)
{
 unsigned int VAR_11 = FUNC_0(VAR_10)->i_flags;
 unsigned int VAR_12 = 0;

 if (VAR_11 & VAR_4)
  VAR_12 |= VAR_9;
 if (VAR_11 & VAR_0)
  VAR_12 |= VAR_5;
 if (VAR_11 & VAR_2)
  VAR_12 |= VAR_7;
 if (VAR_11 & VAR_3)
  VAR_12 |= VAR_8;
 if (VAR_11 & VAR_1)
  VAR_12 |= VAR_6;
 FUNC_1(VAR_10, VAR_12, VAR_9 | VAR_5 | VAR_7 |
   VAR_8 | VAR_6);
}
