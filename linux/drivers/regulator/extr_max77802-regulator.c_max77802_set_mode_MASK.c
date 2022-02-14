
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; int dev; } ;
struct max77802_regulator_prv {unsigned int* opmode; } ;
struct TYPE_2__ {int enable_mask; int enable_reg; int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;


 int FUNC_0 (int *,char*,int ,unsigned int) ;
 int FUNC_1 (int) ;
 struct max77802_regulator_prv* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_3, unsigned int VAR_4)
{
 struct max77802_regulator_prv *VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = FUNC_3(VAR_3);
 unsigned int VAR_7;
 int VAR_8 = FUNC_1(VAR_6);

 switch (VAR_4) {
 case 128:
  VAR_7 = VAR_1;
  break;
 case 129:
  VAR_7 = VAR_2;
  break;
 default:
  FUNC_0(&VAR_3->dev, "%s: regulator mode: 0x%x not supported\n",
    VAR_3->desc->name, VAR_4);
  return -VAR_0;
 }

 VAR_5->opmode[VAR_6] = VAR_7;
 return FUNC_4(VAR_3->regmap, VAR_3->desc->enable_reg,
      VAR_3->desc->enable_mask, VAR_7 << VAR_8);
}
