
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_0, size_t VAR_1, int *VAR_2,
    unsigned int *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 if (VAR_2 && VAR_3) {

  for (; *VAR_2 < VAR_1 && !FUNC_1(VAR_0[*VAR_2]); (*VAR_2)++)
   ;

  *VAR_3 = 0;
  for (; *VAR_2 < VAR_1; (*VAR_2)++) {
   VAR_5 = FUNC_0(VAR_0[*VAR_2]);
   if (VAR_5 >= 0) {
    VAR_4 = 1;
    *VAR_3 = (*VAR_3 << 4) + VAR_5;
   } else {
    break;
   }
  }
 }
 return VAR_4;
}
