
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t int16_t ;


 size_t VAR_0 ;

__attribute__((used)) static int16_t FUNC_0(bool *VAR_1,
         bool VAR_2, u8 VAR_3)
{
 int16_t VAR_4;

 if (VAR_2) {
  for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_1[VAR_4])
    break;
  }
 } else {
  for (VAR_4 = VAR_3 - 1; VAR_4 >= 0; VAR_4--) {
   if (VAR_1[VAR_4])
    break;
  }
 }

 if ((VAR_4 >= VAR_0) || (VAR_4 < 0))
  VAR_4 = -1;

 return VAR_4;
}
