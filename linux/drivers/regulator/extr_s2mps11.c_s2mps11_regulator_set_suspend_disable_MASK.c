
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2mps11_info {int dev_type; int suspend_state; } ;
struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int enable_mask; int enable_reg; } ;


 int VAR_0 ;







 unsigned int VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 struct s2mps11_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6, VAR_7;
 struct s2mps11_info *VAR_8 = FUNC_0(VAR_4);
 int VAR_9 = FUNC_1(VAR_4);


 switch (VAR_8->dev_type) {
 case 141:
  switch (VAR_9) {
  case 140:
  case 139:
  case 138:
  case 137:
   return 0;
  default:
   VAR_7 = VAR_1;
   break;
  }
  break;
 case 136:
 case 135:
  switch (VAR_9) {
  case 134:
   return 0;
  default:
   VAR_7 = VAR_1;
   break;
  }
  break;
 case 133:
  switch (VAR_9) {
  case 131:
  case 130:
  case 129:
  case 128:
  case 132:
   VAR_7 = VAR_2;
   break;
  default:
   VAR_7 = VAR_3;
   break;
  }
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_4->regmap, VAR_4->desc->enable_reg, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_4(VAR_9, VAR_8->suspend_state);







 if (!(VAR_6 & VAR_4->desc->enable_mask))
  return 0;

 return FUNC_3(VAR_4->regmap, VAR_4->desc->enable_reg,
      VAR_4->desc->enable_mask, VAR_7);
}
