
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

void FUNC_0(unsigned long *VAR_6)
{
 switch (*VAR_6 & 0x7) {
 case 1:
  *VAR_6 |= VAR_0;
  break;
 case 2:
  *VAR_6 |= VAR_1;
  break;
 case 3:
  *VAR_6 |= VAR_2;
  break;
 case 4:
  *VAR_6 |= VAR_3;
  break;
 case 5:
  *VAR_6 |= VAR_4;
  break;
 case 6:
  *VAR_6 |= VAR_5;
  break;
 case 7:
  *VAR_6 = 0xFFFFFFFF;
  break;
 }
}
