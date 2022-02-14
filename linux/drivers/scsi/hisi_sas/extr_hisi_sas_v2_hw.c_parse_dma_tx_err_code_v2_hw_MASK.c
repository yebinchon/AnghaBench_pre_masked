
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int const*) ;






 int const VAR_0 ;
 int VAR_1 ;






__attribute__((used)) static int FUNC_1(u32 VAR_2)
{
 static const u8 VAR_3[] = {
  130,
  131,
  129,
  128,
  132,
  135,
  136,
  137,
  134,
  138,
  133,
 };
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  VAR_4 = VAR_3[VAR_5] - VAR_0;
  VAR_2 = VAR_2 & VAR_1;
  if (VAR_2 & (1 << VAR_4))
   return VAR_3[VAR_5];
 }
 return -1;
}
