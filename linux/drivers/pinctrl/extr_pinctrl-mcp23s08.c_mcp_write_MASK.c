
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp23s08 {unsigned int reg_shift; int regmap; } ;


 int FUNC_0 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct mcp23s08 *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 return FUNC_0(VAR_0->regmap, VAR_1 << VAR_0->reg_shift, VAR_2);
}
