
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int regmap; int dev; } ;
struct TYPE_2__ {int name; } ;
struct mt6323_regulator_info {int modeset_mask; int modeset_reg; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 struct mt6323_regulator_info* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3, unsigned int VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct mt6323_regulator_info *VAR_7 = FUNC_2(VAR_3);

 if (!VAR_7->modeset_mask) {
  FUNC_0(&VAR_3->dev, "regulator %s doesn't support set_mode\n",
   VAR_7->desc.name);
  return -VAR_0;
 }

 switch (VAR_4) {
 case 128:
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_6 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_6 <<= FUNC_1(VAR_7->modeset_mask) - 1;

 VAR_5 = FUNC_3(VAR_3->regmap, VAR_7->modeset_reg,
      VAR_7->modeset_mask, VAR_6);

 return VAR_5;
}
