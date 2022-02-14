
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int s32 ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static bool FUNC_1(s32 VAR_0, u8 *VAR_1, bool *VAR_2)
{
 static const s32 VAR_3[] = { 13500, 27000, 40500, 54000,
  81000, 108000, 121500, 135000,
  150000
 };
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  if (VAR_0 == VAR_3[VAR_4]) {
   if (VAR_4 == FUNC_0(VAR_3) - 1)

    *VAR_2 = 1;
   else
    *VAR_2 = 0;

   *VAR_1 = VAR_4;
   return 1;
  }
 }

 return 0;
}
