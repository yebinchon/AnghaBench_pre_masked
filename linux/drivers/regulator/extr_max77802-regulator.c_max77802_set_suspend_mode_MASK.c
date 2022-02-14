
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; int dev; } ;
struct max77802_regulator_prv {scalar_t__* opmode; } ;
struct TYPE_2__ {int enable_mask; int enable_reg; int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 int FUNC_0 (int *,char*,int ,unsigned int) ;
 int FUNC_1 (int) ;
 struct max77802_regulator_prv* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_5,
         unsigned int VAR_6)
{
 struct max77802_regulator_prv *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = FUNC_3(VAR_5);
 unsigned int VAR_9;
 int VAR_10 = FUNC_1(VAR_8);





 if (VAR_7->opmode[VAR_8] == VAR_2) {
  FUNC_0(&VAR_5->dev, "%s: is disabled, mode: 0x%x not set\n",
    VAR_5->desc->name, VAR_6);
  return 0;
 }

 switch (VAR_6) {
 case 128:





  if (VAR_7->opmode[VAR_8] == VAR_4)
   VAR_9 = VAR_1;
  else
   return 0;
  break;
 case 129:





  if (VAR_7->opmode[VAR_8] == VAR_3)
   FUNC_0(&VAR_5->dev, "%s: in Low Power: 0x%x invalid\n",
     VAR_5->desc->name, VAR_6);
  return 0;
 default:
  FUNC_0(&VAR_5->dev, "%s: regulator mode: 0x%x not supported\n",
    VAR_5->desc->name, VAR_6);
  return -VAR_0;
 }

 return FUNC_4(VAR_5->regmap, VAR_5->desc->enable_reg,
      VAR_5->desc->enable_mask, VAR_9 << VAR_10);
}
