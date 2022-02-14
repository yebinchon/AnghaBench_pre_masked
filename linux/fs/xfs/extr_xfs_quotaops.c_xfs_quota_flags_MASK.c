
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;

__attribute__((used)) static unsigned int
FUNC_0(unsigned int VAR_12)
{
 unsigned int VAR_13 = 0;

 if (VAR_12 & VAR_4)
  VAR_13 |= VAR_10;
 if (VAR_12 & VAR_2)
  VAR_13 |= VAR_8;
 if (VAR_12 & VAR_0)
  VAR_13 |= VAR_6;
 if (VAR_12 & VAR_5)
  VAR_13 |= VAR_11;
 if (VAR_12 & VAR_1)
  VAR_13 |= VAR_7;
 if (VAR_12 & VAR_3)
  VAR_13 |= VAR_9;

 return VAR_13;
}
