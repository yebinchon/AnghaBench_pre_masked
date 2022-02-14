
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

u8 FUNC_2(u8 VAR_0, u8 VAR_1)
{
 switch (VAR_1) {
 case 0:
 case 3:
  if (VAR_0 & FUNC_0(1))
   VAR_1 = 1;
  break;
 case 1:
 case 2:
  break;
 case 4:
 case 5:
  if (VAR_0 & FUNC_0(2))
   VAR_1 = 0;
  break;
 case 6:
 case 7:
  if (VAR_0 & FUNC_0(3))
   VAR_1 = 5;
  break;
 default:
  FUNC_1("qos_acm(): invalid pattrib->priority: %d!!!\n", VAR_1);
  break;
 }

 return VAR_1;
}
