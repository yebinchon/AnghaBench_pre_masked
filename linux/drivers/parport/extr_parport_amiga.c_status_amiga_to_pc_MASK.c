
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

__attribute__((used)) static unsigned char FUNC_0(unsigned char VAR_5)
{
 unsigned char VAR_6 = VAR_1 | VAR_0 | VAR_2;

 if (VAR_5 & 1)
  VAR_6 &= ~VAR_1;
 if (VAR_5 & 2)
  VAR_6 |= VAR_3;
 if (VAR_5 & 4)
  VAR_6 |= VAR_4;


 return VAR_6;
}
