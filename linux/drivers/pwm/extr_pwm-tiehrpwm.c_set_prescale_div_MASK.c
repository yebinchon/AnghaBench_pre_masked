
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_4, u16 *VAR_5,
       u16 *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++) {
  for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++) {
   *VAR_5 = (1 << VAR_7) *
     (VAR_8 ? (VAR_8 * 2) : 1);
   if (*VAR_5 > VAR_4) {
    *VAR_6 = (VAR_7 << VAR_2) |
     (VAR_8 << VAR_3);
    return 0;
   }
  }
 }

 return 1;
}
