
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int enable_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct regmap* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regmap*,int ,int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_3)
{
 int VAR_4;
 struct regmap *VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_5, VAR_3->desc->enable_reg, &VAR_4);

 if (VAR_4 & VAR_2)
  return VAR_1;

 return VAR_0;
}
