
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
  157,
  131,
  130,
  139,
  158,
  142,
  132,
  133,
  138,
  141,
  140,
  137,
  134,
  135,
  136,
  128,
  149,
  151,
  152,
  153,
  154,
  155,
  148,
  150,
  145,
  156,
  147,
  146,
  144,
  143,
 };
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  VAR_3 = VAR_2[VAR_4] - VAR_0;
  if (VAR_1 & (1 << VAR_3))
   return VAR_2[VAR_4];
 }
 return -1;
}
