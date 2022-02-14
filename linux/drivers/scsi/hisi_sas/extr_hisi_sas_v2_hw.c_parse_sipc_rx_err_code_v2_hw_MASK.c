
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
  136,
  133,
  137,
  129,
  128,
  131,
  134,
  135,
  132,
  130,
  138,
 };
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  VAR_4 = VAR_3[VAR_5] - VAR_0;
  VAR_2 = VAR_2 & VAR_1;
  if (VAR_2 & (1 << (VAR_4 + 0x10)))
   return VAR_3[VAR_5];
 }
 return -1;
}
