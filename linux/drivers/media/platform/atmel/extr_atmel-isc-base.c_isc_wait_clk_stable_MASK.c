
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct isc_clk {struct regmap* regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 struct isc_clk* FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_4)
{
 struct isc_clk *VAR_5 = FUNC_2(VAR_4);
 struct regmap *VAR_6 = VAR_5->regmap;
 unsigned long VAR_7 = VAR_3 + FUNC_3(1000);
 unsigned int VAR_8;

 while (FUNC_1(VAR_3, VAR_7)) {
  FUNC_0(VAR_6, VAR_1, &VAR_8);
  if (!(VAR_8 & VAR_2))
   return 0;

  FUNC_4(10, 250);
 }

 return -VAR_0;
}
