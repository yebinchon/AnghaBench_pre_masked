
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isc_clk {scalar_t__ id; int dev; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;
 struct isc_clk* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_2)
{
 struct isc_clk *VAR_3 = FUNC_4(VAR_2);
 u32 VAR_4;

 if (VAR_3->id == VAR_1)
  FUNC_1(VAR_3->dev);

 FUNC_3(VAR_3->regmap, VAR_0, &VAR_4);

 if (VAR_3->id == VAR_1)
  FUNC_2(VAR_3->dev);

 return VAR_4 & FUNC_0(VAR_3->id) ? 1 : 0;
}
