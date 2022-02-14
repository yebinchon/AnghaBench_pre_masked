
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
 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,unsigned int,unsigned int) ;

void FUNC_4(struct inode *VAR_14)
{
 unsigned int VAR_15 = FUNC_0(VAR_14)->i_flags;
 unsigned int VAR_16 = 0;

 if (VAR_15 & VAR_5)
  VAR_16 |= VAR_12;
 if (VAR_15 & VAR_0)
  VAR_16 |= VAR_6;
 if (VAR_15 & VAR_3)
  VAR_16 |= VAR_10;
 if (VAR_15 & VAR_4)
  VAR_16 |= VAR_11;
 if (VAR_15 & VAR_2)
  VAR_16 |= VAR_8;
 if (FUNC_1(VAR_14))
  VAR_16 |= VAR_9;
 if (FUNC_2(VAR_14))
  VAR_16 |= VAR_13;
 if (VAR_15 & VAR_1)
  VAR_16 |= VAR_7;
 FUNC_3(VAR_14, VAR_16,
   VAR_12|VAR_6|VAR_10|VAR_11|VAR_8|
   VAR_9|VAR_13|VAR_7);
}
