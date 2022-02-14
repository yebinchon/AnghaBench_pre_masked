
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct spear_pmx {int dummy; } ;
struct spear_muxreg {size_t mask; size_t val; int reg; } ;


 size_t FUNC_0 (struct spear_pmx*,int ) ;
 int FUNC_1 (struct spear_pmx*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(struct spear_pmx *VAR_0,
  struct spear_muxreg *VAR_1, u8 VAR_2, bool VAR_3)
{
 struct spear_muxreg *VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_4 = &VAR_1[VAR_7];

  VAR_5 = FUNC_0(VAR_0, VAR_4->reg);
  VAR_5 &= ~VAR_4->mask;

  if (VAR_3)
   VAR_6 = VAR_4->val;
  else
   VAR_6 = ~VAR_4->val;

  VAR_5 |= VAR_4->mask & VAR_6;
  FUNC_1(VAR_0, VAR_5, VAR_4->reg);
 }
}
