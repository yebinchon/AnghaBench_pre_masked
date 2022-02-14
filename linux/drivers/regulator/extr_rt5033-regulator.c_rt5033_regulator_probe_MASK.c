
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rt5033_dev {int regmap; int dev; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct rt5033_dev* driver_data; int dev; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_1__*,char*,int,int) ;
 struct rt5033_dev* FUNC_4 (int ) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,int *,struct regulator_config*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct rt5033_dev *VAR_2 = FUNC_4(VAR_1->dev.parent);
 int VAR_3, VAR_4;
 struct regulator_config VAR_5 = {};

 VAR_5.dev = VAR_2->dev;
 VAR_5.driver_data = VAR_2;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  struct regulator_dev *VAR_6;

  VAR_5.regmap = VAR_2->regmap;

  VAR_6 = FUNC_5(&VAR_1->dev,
    &VAR_0[VAR_4], &VAR_5);
  if (FUNC_1(VAR_6)) {
   VAR_3 = FUNC_2(VAR_6);
   FUNC_3(&VAR_1->dev,
    "Regulator init failed %d: with error: %d\n",
    VAR_4, VAR_3);
   return VAR_3;
  }
 }

 return 0;
}
