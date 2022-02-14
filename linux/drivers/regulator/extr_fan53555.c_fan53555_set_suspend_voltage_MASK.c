
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int regmap; } ;
struct TYPE_2__ {int vsel_mask; } ;
struct fan53555_device_info {int sleep_vol_cache; TYPE_1__ desc; int sleep_reg; } ;


 struct fan53555_device_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct regulator_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0, int VAR_1)
{
 struct fan53555_device_info *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 if (VAR_2->sleep_vol_cache == VAR_1)
  return 0;
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_1(VAR_0->regmap, VAR_2->sleep_reg,
     VAR_2->desc.vsel_mask, VAR_3);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_2->sleep_vol_cache = VAR_1;

 return 0;
}
