
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;
struct fan53555_device_info {int sleep_reg; } ;


 int VAR_0 ;
 struct fan53555_device_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1)
{
 struct fan53555_device_info *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_1->regmap, VAR_2->sleep_reg,
      VAR_0, VAR_0);
}
