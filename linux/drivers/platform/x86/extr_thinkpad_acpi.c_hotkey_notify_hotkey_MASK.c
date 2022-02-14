
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static bool FUNC_3(const u32 VAR_4,
     bool *VAR_5,
     bool *VAR_6)
{

 unsigned int VAR_7 = VAR_4 & 0xfff;
 *VAR_5 = 1;
 *VAR_6 = 0;






 switch ((VAR_4 >> 8) & 0xf) {
 case 0:
  if (VAR_7 > 0 &&
      VAR_7 <= VAR_1) {

   VAR_7--;
   if (!(VAR_3 & (1 << VAR_7))) {
    FUNC_2(VAR_7);
    *VAR_5 = 0;
   } else {
    *VAR_6 = 1;
   }
   return 1;
  }
  break;

 case 1:
  return FUNC_0(VAR_7);

 case 3:




  VAR_7 -= (0x300 - VAR_2);
  if (VAR_7 >= VAR_2 &&
      VAR_7 < VAR_0) {
   FUNC_1(VAR_7);
   return 1;
  }
  break;
 }

 return 0;
}
