
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int n_voltages; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct regmap* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2)
{
 struct regmap *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0, &VAR_4);
 if (VAR_5 != 0)
  return VAR_5;

 if (VAR_4 & VAR_1)
  return VAR_2->desc->n_voltages - 1;

 return FUNC_2(VAR_2);
}
