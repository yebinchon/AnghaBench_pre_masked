
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct brcm_rateset {size_t count; int* rates; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct brcm_rateset *VAR_2, u16 VAR_3, bool VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++) {
  if (VAR_3 != (VAR_2->rates[VAR_5] & 0x7f))
   continue;

  if (VAR_4)
   VAR_2->rates[VAR_5] |= VAR_0;
  else
   VAR_2->rates[VAR_5] &= VAR_1;
  return;
 }
}
