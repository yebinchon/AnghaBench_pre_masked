
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sy8824_device_info {struct sy8824_config* cfg; } ;
struct sy8824_config {int mode_reg; } ;
struct regulator_dev {int regmap; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct sy8824_device_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2, unsigned int VAR_3)
{
 struct sy8824_device_info *VAR_4 = FUNC_0(VAR_2);
 const struct sy8824_config *VAR_5 = VAR_4->cfg;

 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_2->regmap, VAR_5->mode_reg,
       VAR_1, VAR_1);
  break;
 case 128:
  FUNC_1(VAR_2->regmap, VAR_5->mode_reg,
       VAR_1, 0);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
