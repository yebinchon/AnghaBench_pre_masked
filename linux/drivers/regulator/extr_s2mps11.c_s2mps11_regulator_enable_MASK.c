
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2mps11_info {int dev_type; int suspend_state; int * ext_control_gpiod; } ;
struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int enable_mask; int enable_reg; } ;


 int VAR_0 ;



 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

 unsigned int VAR_3 ;
 struct s2mps11_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_4)
{
 struct s2mps11_info *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7;

 switch (VAR_5->dev_type) {
 case 131:
  if (FUNC_3(VAR_6, VAR_5->suspend_state))
   VAR_7 = VAR_2;
  else
   VAR_7 = VAR_4->desc->enable_mask;
  break;
 case 130:
 case 129:
  if (FUNC_3(VAR_6, VAR_5->suspend_state))
   VAR_7 = VAR_2;
  else if (VAR_5->ext_control_gpiod[VAR_6])
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_4->desc->enable_mask;
  break;
 case 128:
  if (FUNC_3(VAR_6, VAR_5->suspend_state))
   VAR_7 = VAR_3;
  else
   VAR_7 = VAR_4->desc->enable_mask;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_4->regmap, VAR_4->desc->enable_reg,
   VAR_4->desc->enable_mask, VAR_7);
}
