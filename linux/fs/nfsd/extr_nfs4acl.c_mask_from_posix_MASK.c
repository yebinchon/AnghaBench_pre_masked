
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static u32
FUNC_0(unsigned short VAR_11, unsigned int VAR_12)
{
 int VAR_13 = VAR_6;

 if (VAR_12 & VAR_5)
  VAR_13 |= VAR_8;
 if (VAR_11 & VAR_1)
  VAR_13 |= VAR_9;
 if (VAR_11 & VAR_2)
  VAR_13 |= VAR_10;
 if ((VAR_11 & VAR_2) && (VAR_12 & VAR_4))
  VAR_13 |= VAR_3;
 if (VAR_11 & VAR_0)
  VAR_13 |= VAR_7;
 return VAR_13;
}
