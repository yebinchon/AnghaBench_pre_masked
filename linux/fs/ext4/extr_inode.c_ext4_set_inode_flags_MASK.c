
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
 TYPE_1__* FUNC_0 (struct inode*) ;
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
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,unsigned int,unsigned int) ;

void FUNC_3(struct inode *VAR_17)
{
 unsigned int VAR_18 = FUNC_0(VAR_17)->i_flags;
 unsigned int VAR_19 = 0;

 if (VAR_18 & VAR_6)
  VAR_19 |= VAR_15;
 if (VAR_18 & VAR_0)
  VAR_19 |= VAR_8;
 if (VAR_18 & VAR_4)
  VAR_19 |= VAR_13;
 if (VAR_18 & VAR_5)
  VAR_19 |= VAR_14;
 if (VAR_18 & VAR_2)
  VAR_19 |= VAR_11;
 if (FUNC_1(VAR_17))
  VAR_19 |= VAR_10;
 if (VAR_18 & VAR_3)
  VAR_19 |= VAR_12;
 if (VAR_18 & VAR_1)
  VAR_19 |= VAR_9;
 if (VAR_18 & VAR_7)
  VAR_19 |= VAR_16;
 FUNC_2(VAR_17, VAR_19,
   VAR_15|VAR_8|VAR_13|VAR_14|VAR_11|VAR_10|
   VAR_12|VAR_9|VAR_16);
}
