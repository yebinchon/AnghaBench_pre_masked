
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct mt9v032 {int clk; scalar_t__ reset_gpio; int sysclk; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct regmap*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mt9v032 *VAR_3)
{
 struct regmap *VAR_4 = VAR_3->regmap;
 int VAR_5;

 FUNC_3(VAR_3->reset_gpio, 1);

 VAR_5 = FUNC_2(VAR_3->clk, VAR_3->sysclk);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_3->clk);
 if (VAR_5)
  return VAR_5;

 FUNC_5(1);

 if (VAR_3->reset_gpio) {
  FUNC_3(VAR_3->reset_gpio, 0);






  FUNC_5(1);
 }


 VAR_5 = FUNC_4(VAR_4, VAR_2, 1);
 if (VAR_5 < 0)
  goto err;

 VAR_5 = FUNC_4(VAR_4, VAR_2, 0);
 if (VAR_5 < 0)
  goto err;

 VAR_5 = FUNC_4(VAR_4, VAR_0,
      VAR_1);
 if (VAR_5 < 0)
  goto err;

 return 0;

err:
 FUNC_0(VAR_3->clk);
 return VAR_5;
}
