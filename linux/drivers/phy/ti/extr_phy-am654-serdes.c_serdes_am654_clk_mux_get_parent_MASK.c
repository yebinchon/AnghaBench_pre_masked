
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct serdes_am654_clk_mux {unsigned int reg; size_t clk_id; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct regmap*,unsigned int,unsigned int*) ;
 int ** VAR_2 ;
 struct serdes_am654_clk_mux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_3)
{
 struct serdes_am654_clk_mux *VAR_4 = FUNC_1(VAR_3);
 struct regmap *VAR_5 = VAR_4->regmap;
 unsigned int VAR_6 = VAR_4->reg;
 unsigned int VAR_7;

 FUNC_0(VAR_5, VAR_6, &VAR_7);
 VAR_7 &= VAR_0;
 VAR_7 >>= VAR_1;

 return VAR_2[VAR_7][VAR_4->clk_id];
}
