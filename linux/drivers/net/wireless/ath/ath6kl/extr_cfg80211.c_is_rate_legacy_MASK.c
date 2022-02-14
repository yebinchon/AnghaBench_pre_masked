
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int s32 ;


 size_t FUNC_0 (int const*) ;

__attribute__((used)) static bool FUNC_1(s32 VAR_0)
{
 static const s32 VAR_1[] = { 1000, 2000, 5500, 11000,
  6000, 9000, 12000, 18000, 24000,
  36000, 48000, 54000
 };
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (VAR_0 == VAR_1[VAR_2])
   return 1;

 return 0;
}
