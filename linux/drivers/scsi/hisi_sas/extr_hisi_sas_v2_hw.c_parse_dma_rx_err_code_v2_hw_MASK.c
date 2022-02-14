
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int const*) ;
 int const VAR_0 ;
__attribute__((used)) static int FUNC_1(u32 VAR_1)
{
 static const u8 VAR_2[] = {
  129,
  153,
  152,
  151,
  128,
  133,
  134,
  130,
  132,
  131,
  145,
  135,
  136,
  137,
  141,
  139,
  140,
  138,
  143,
  142,
  144,
  148,
  149,
  147,
  150,
  146,
 };
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  VAR_3 = VAR_2[VAR_4] - VAR_0;
  if (VAR_1 & (1 << VAR_3))
   return VAR_2[VAR_4];
 }
 return -1;
}
