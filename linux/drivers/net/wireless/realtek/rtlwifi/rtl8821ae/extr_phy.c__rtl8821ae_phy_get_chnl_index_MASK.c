
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static bool FUNC_0(u8 VAR_2, u8 *VAR_3)
{
 u8 VAR_4 = 0;
 bool VAR_5 = 1;

 if (VAR_2 <= 14) {
  VAR_5 = 1;
  *VAR_3 = VAR_2 - 1;
 } else {
  VAR_5 = 0;

  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
   if (VAR_1[VAR_4] == VAR_2) {
    *VAR_3 = VAR_4;
    return VAR_5;
   }
  }
 }
 return VAR_5;
}
