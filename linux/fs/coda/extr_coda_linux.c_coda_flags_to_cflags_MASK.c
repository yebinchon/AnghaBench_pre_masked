
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;

unsigned short FUNC_0(unsigned short VAR_12)
{
 unsigned short VAR_13 = 0;

 if ((VAR_12 & VAR_5) == VAR_8)
  VAR_13 |= VAR_2;

 if ((VAR_12 & VAR_5) == VAR_9)
  VAR_13 |= VAR_2 | VAR_4;

 if ((VAR_12 & VAR_5) == VAR_11)
  VAR_13 |= VAR_4;

 if (VAR_12 & VAR_10)
  VAR_13 |= VAR_3;

 if (VAR_12 & VAR_6)
  VAR_13 |= VAR_0;

 if (VAR_12 & VAR_7)
  VAR_13 |= VAR_1;

 return VAR_13;
}
