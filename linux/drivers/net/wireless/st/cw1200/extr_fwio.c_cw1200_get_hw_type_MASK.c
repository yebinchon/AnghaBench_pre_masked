
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(u32 VAR_3, int *VAR_4)
{
 int VAR_5 = -1;
 u32 VAR_6 = (VAR_3 >> 24) & 0x7;
 u32 VAR_7 = (VAR_3 >> 31) & 0x1;

 switch (VAR_6) {
 case 0x00:
  *VAR_4 = 1;
  VAR_5 = VAR_2;
  break;
 case 0x01:
 case 0x02:
 case 0x04:
  *VAR_4 = VAR_6;
  if (VAR_7)
   VAR_5 = VAR_1;
  else
   VAR_5 = VAR_0;
  break;
 default:
  break;
 }

 return VAR_5;
}
