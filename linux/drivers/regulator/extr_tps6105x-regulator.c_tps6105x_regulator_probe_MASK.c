
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps6105x_platform_data {scalar_t__ mode; int regulator_data; } ;
struct tps6105x {TYPE_1__* client; int regulator; int regmap; struct tps6105x_platform_data* pdata; } ;
struct regulator_config {int regmap; struct tps6105x* driver_data; int init_data; int * dev; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,char*) ;
 struct tps6105x* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,struct regulator_config*) ;
 int FUNC_6 (struct platform_device*,struct tps6105x*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct tps6105x *VAR_3 = FUNC_3(&VAR_2->dev);
 struct tps6105x_platform_data *VAR_4 = VAR_3->pdata;
 struct regulator_config VAR_5 = { };
 int VAR_6;


 if (VAR_4->mode != VAR_0) {
  FUNC_4(&VAR_2->dev,
   "chip not in voltage mode mode, exit probe\n");
  return 0;
 }

 VAR_5.dev = &VAR_3->client->dev;
 VAR_5.init_data = VAR_4->regulator_data;
 VAR_5.driver_data = VAR_3;
 VAR_5.regmap = VAR_3->regmap;


 VAR_3->regulator = FUNC_5(&VAR_2->dev,
            &VAR_1,
            &VAR_5);
 if (FUNC_0(VAR_3->regulator)) {
  VAR_6 = FUNC_1(VAR_3->regulator);
  FUNC_2(&VAR_3->client->dev,
   "failed to register regulator\n");
  return VAR_6;
 }
 FUNC_6(VAR_2, VAR_3);

 return 0;
}
