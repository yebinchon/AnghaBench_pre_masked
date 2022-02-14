
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_veu_dev {scalar_t__ is_2h; } ;



__attribute__((used)) static void FUNC_0(struct sh_veu_dev *VAR_0,
         int VAR_1, int VAR_2, int VAR_3,
         u32 *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 u32 VAR_7;


 *VAR_6 = *VAR_4 = *VAR_5 = 0;

 if (VAR_1 == VAR_2) {
  if (VAR_3 != VAR_2)
   *VAR_4 = 1;
  return;
 }


 if (VAR_0->is_2h && VAR_2 > VAR_1) {
  u32 VAR_8 = (4096 * VAR_1) / VAR_2;
  *VAR_4 = VAR_8 / 4096;
  *VAR_5 = (VAR_8 - (*VAR_4 * 4096)) & ~0x07;

  switch (*VAR_5) {
  case 0x800:
   *VAR_6 = 1;
   break;
  case 0x400:
   *VAR_6 = 3;
   break;
  case 0x200:
   *VAR_6 = 7;
   break;
  }
  if (*VAR_6)
   return;
 }

 VAR_7 = (4096 * (VAR_1 - 1)) / (VAR_2 + 1);
 *VAR_4 = VAR_7 / 4096;
 *VAR_5 = VAR_7 - (*VAR_4 * 4096);

 if (*VAR_5 & 0x07) {




  *VAR_5 &= ~0x07;
  if (VAR_2 > VAR_1)
   *VAR_5 -= 8;
  else
   *VAR_5 += 8;
 }
}
