
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_chip_data {int dummy; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (struct regmap*,int) ;
 struct regmap_irq_chip_data* FUNC_1 (int) ;
 int FUNC_2 (struct regmap_irq_chip_data*) ;

int FUNC_3(struct regmap *VAR_0, int VAR_1)
{
 struct regmap_irq_chip_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = FUNC_2(VAR_2);

 return FUNC_0(VAR_0, VAR_1 - VAR_3);
}
