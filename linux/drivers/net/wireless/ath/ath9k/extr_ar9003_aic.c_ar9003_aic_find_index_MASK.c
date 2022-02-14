
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t int16_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static int16_t FUNC_0(u8 VAR_4, int16_t VAR_5)
{
 int16_t VAR_6 = -1;

 if (VAR_4 == 0) {
  for (VAR_6 = VAR_0 - 1; VAR_6 >= 0; VAR_6--) {
   if (VAR_2[VAR_6] >= VAR_5)
    break;
  }
 } else if (VAR_4 == 1) {
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (VAR_3[VAR_6] > VAR_5) {
    VAR_6--;
    break;
   }
  }

  if (VAR_6 >= VAR_1)
   VAR_6 = -1;
 }

 return VAR_6;
}
