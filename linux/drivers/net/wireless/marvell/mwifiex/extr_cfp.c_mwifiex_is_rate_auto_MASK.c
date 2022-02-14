
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct mwifiex_private {scalar_t__* bitmap_rates; } ;


 size_t FUNC_0 (scalar_t__*) ;

u8
FUNC_1(struct mwifiex_private *VAR_0)
{
 u32 VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->bitmap_rates); VAR_1++)
  if (VAR_0->bitmap_rates[VAR_1])
   VAR_2++;

 if (VAR_2 > 1)
  return 1;
 else
  return 0;
}
