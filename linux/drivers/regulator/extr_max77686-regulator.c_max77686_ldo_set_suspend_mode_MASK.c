
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct max77686_data {unsigned int* opmode; } ;
struct TYPE_2__ {int enable_mask; int enable_reg; int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;



 unsigned int FUNC_0 (struct max77686_data*,int) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 struct max77686_data* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_4,
         unsigned int VAR_5)
{
 unsigned int VAR_6;
 struct max77686_data *VAR_7 = FUNC_2(VAR_4);
 int VAR_8, VAR_9 = FUNC_3(VAR_4);

 switch (VAR_5) {
 case 128:
  VAR_6 = VAR_2;
  break;
 case 130:
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_6 = FUNC_0(VAR_7, VAR_9);
  break;
 default:
  FUNC_1("%s: regulator_suspend_mode : 0x%x not supported\n",
   VAR_4->desc->name, VAR_5);
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_4->regmap, VAR_4->desc->enable_reg,
     VAR_4->desc->enable_mask,
     VAR_6 << VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_7->opmode[VAR_9] = VAR_6;
 return 0;
}
