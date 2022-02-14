
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dev; TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {int vsel_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_4, unsigned int VAR_5)
{
 switch (VAR_5) {
 case 129:
  return FUNC_1(VAR_4->regmap, VAR_4->desc->vsel_reg,
       VAR_3, VAR_2);
 case 128:
  return FUNC_1(VAR_4->regmap, VAR_4->desc->vsel_reg,
       VAR_3, VAR_0);
 default:
  FUNC_0(&VAR_4->dev, "do not support this mode\n");
  return -VAR_1;
 }

 return 0;
}
