
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sy8824_device_info {struct sy8824_config* cfg; } ;
struct sy8824_config {int mode_reg; } ;
struct regulator_dev {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct sy8824_device_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_3)
{
 struct sy8824_device_info *VAR_4 = FUNC_0(VAR_3);
 const struct sy8824_config *VAR_5 = VAR_4->cfg;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_1(VAR_3->regmap, VAR_5->mode_reg, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_6 & VAR_2)
  return VAR_0;
 else
  return VAR_1;
}
