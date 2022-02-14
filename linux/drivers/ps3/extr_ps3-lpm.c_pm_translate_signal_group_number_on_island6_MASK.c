
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;

__attribute__((used)) static u64 FUNC_0(u64 VAR_1,
             u64 VAR_2)
{
 switch (VAR_1) {
 case 3:
 case 4:
 case 5:
  VAR_1 += 1;
  break;
 default:
  break;
 }

 switch (VAR_2) {
 case 4:
 case 5:
 case 6:
  VAR_2 += 2;
  break;
 case 7:
 case 8:
 case 9:
 case 10:
  VAR_2 += 4;
  break;
 case 11:
 case 12:
 case 13:
  VAR_2 += 5;
  break;
 default:
  break;
 }

 if (VAR_1 <= 5)
  return (VAR_0 + VAR_1);
 else
  return (VAR_0 + VAR_1
   + VAR_2 - 1);
}
