
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(u32 *VAR_6, u16 VAR_7)
{
 *VAR_6 &= ~VAR_4;

 switch (VAR_7) {
 case 2000:
  *VAR_6 |= VAR_2;
  break;
 case 10000:
  *VAR_6 |= VAR_0;
  break;
 case 20000:
  *VAR_6 |= VAR_1;
  break;
 case 40000:
  *VAR_6 |= VAR_3;
  break;
 default:
  return -VAR_5;
 }

 return 0;
}
