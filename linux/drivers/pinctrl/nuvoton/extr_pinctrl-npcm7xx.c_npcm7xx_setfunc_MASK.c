
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct npcm7xx_pincfg {int fn0; int fn1; int fn2; int bit2; scalar_t__ reg2; int bit1; scalar_t__ reg1; int bit0; scalar_t__ reg0; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct npcm7xx_pincfg* VAR_1 ;
 int FUNC_1 (struct regmap*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct regmap *VAR_2, const unsigned int *VAR_3,
       int VAR_4, int VAR_5)
{
 const struct npcm7xx_pincfg *VAR_6;
 int VAR_7;

 for (VAR_7 = 0 ; VAR_7 < VAR_4 ; VAR_7++) {
  VAR_6 = &VAR_1[VAR_3[VAR_7]];
  if (VAR_5 == VAR_0 || VAR_6->fn0 == VAR_5 || VAR_6->fn1 == VAR_5 || VAR_6->fn2 == VAR_5) {
   if (VAR_6->reg0)
    FUNC_1(VAR_2, VAR_6->reg0,
         FUNC_0(VAR_6->bit0),
         !!(VAR_6->fn0 == VAR_5) ?
         FUNC_0(VAR_6->bit0) : 0);
   if (VAR_6->reg1)
    FUNC_1(VAR_2, VAR_6->reg1,
         FUNC_0(VAR_6->bit1),
         !!(VAR_6->fn1 == VAR_5) ?
         FUNC_0(VAR_6->bit1) : 0);
   if (VAR_6->reg2)
    FUNC_1(VAR_2, VAR_6->reg2,
         FUNC_0(VAR_6->bit2),
         !!(VAR_6->fn2 == VAR_5) ?
         FUNC_0(VAR_6->bit2) : 0);
  }
 }
}
