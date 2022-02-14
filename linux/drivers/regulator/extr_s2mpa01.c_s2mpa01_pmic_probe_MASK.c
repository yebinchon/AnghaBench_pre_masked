
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sec_pmic_dev {int regmap_pmic; int dev; } ;
struct sec_platform_data {TYPE_1__* regulators; } ;
struct s2mpa01_info {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int init_data; struct s2mpa01_info* driver_data; int regmap; int dev; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {int initdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 struct sec_pmic_dev* FUNC_3 (int ) ;
 struct sec_platform_data* FUNC_4 (int ) ;
 struct s2mpa01_info* FUNC_5 (TYPE_2__*,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_2__*,int *,struct regulator_config*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct sec_pmic_dev *VAR_5 = FUNC_3(VAR_4->dev.parent);
 struct sec_platform_data *VAR_6 = FUNC_4(VAR_5->dev);
 struct regulator_config VAR_7 = { };
 struct s2mpa01_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(&VAR_4->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7.dev = VAR_5->dev;
 VAR_7.regmap = VAR_5->regmap_pmic;
 VAR_7.driver_data = VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  struct regulator_dev *VAR_10;

  if (VAR_6)
   VAR_7.init_data = VAR_6->regulators[VAR_9].initdata;

  VAR_10 = FUNC_6(&VAR_4->dev,
      &VAR_3[VAR_9], &VAR_7);
  if (FUNC_0(VAR_10)) {
   FUNC_2(&VAR_4->dev, "regulator init failed for %d\n",
    VAR_9);
   return FUNC_1(VAR_10);
  }
 }

 return 0;
}
