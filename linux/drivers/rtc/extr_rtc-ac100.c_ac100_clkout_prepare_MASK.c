
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct ac100_clkout {int offset; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct ac100_clkout* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct ac100_clkout *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->regmap, VAR_2->offset, VAR_0,
      VAR_0);
}
