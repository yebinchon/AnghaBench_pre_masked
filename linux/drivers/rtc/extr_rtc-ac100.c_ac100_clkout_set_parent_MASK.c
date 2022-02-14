
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct clk_hw {int dummy; } ;
struct ac100_clkout {int offset; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct ac100_clkout* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct ac100_clkout *VAR_3 = FUNC_2(VAR_1);

 return FUNC_1(VAR_3->regmap, VAR_3->offset,
      FUNC_0(VAR_0),
      VAR_2 ? FUNC_0(VAR_0) : 0);
}
