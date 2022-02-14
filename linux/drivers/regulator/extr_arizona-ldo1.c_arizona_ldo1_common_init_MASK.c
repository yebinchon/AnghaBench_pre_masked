
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_desc {int dummy; } ;
struct regulator_config {int of_node; TYPE_2__* init_data; int ena_gpiod; int regmap; struct arizona_ldo1* driver_data; struct device* dev; } ;
struct TYPE_7__ {struct device* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device {int dummy; } ;
struct arizona_ldo1_pdata {TYPE_2__* init_data; } ;
struct TYPE_6__ {scalar_t__ num_consumer_supplies; TYPE_1__* consumer_supplies; } ;
struct TYPE_5__ {char* supply; int dev_name; } ;
struct arizona_ldo1 {int regulator; TYPE_2__ init_data; int ena_gpiod; int regmap; TYPE_1__ supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct arizona_ldo1_pdata*,struct regulator_config*,struct regulator_desc const*,int*) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (TYPE_3__*,struct regulator_desc const*,struct regulator_config*) ;
 int FUNC_8 (struct device*,char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct platform_device*,struct arizona_ldo1*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_3,
        struct arizona_ldo1 *VAR_4,
        const struct regulator_desc *VAR_5,
        struct arizona_ldo1_pdata *VAR_6,
        bool *VAR_7)
{
 struct device *VAR_8 = VAR_3->dev.parent;
 struct regulator_config VAR_9 = { };
 int VAR_10;

 *VAR_7 = 0;

 VAR_4->supply.supply = "DCVDD";
 VAR_4->init_data.consumer_supplies = &VAR_4->supply;
 VAR_4->supply.dev_name = FUNC_6(VAR_8);

 VAR_9.dev = VAR_8;
 VAR_9.driver_data = VAR_4;
 VAR_9.regmap = VAR_4->regmap;

 if (FUNC_0(VAR_0)) {
  if (!FUNC_5(VAR_8)) {
   VAR_10 = FUNC_3(VAR_6,
       &VAR_9, VAR_5,
       VAR_7);
   if (VAR_10 < 0)
    return VAR_10;
  }
 }





 VAR_9.ena_gpiod = FUNC_8(VAR_8, "wlf,ldoena",
    VAR_2 | VAR_1);
 if (FUNC_1(VAR_9.ena_gpiod))
  return FUNC_2(VAR_9.ena_gpiod);

 VAR_4->ena_gpiod = VAR_9.ena_gpiod;

 if (VAR_6->init_data)
  VAR_9.init_data = VAR_6->init_data;
 else
  VAR_9.init_data = &VAR_4->init_data;





 if (VAR_9.init_data->num_consumer_supplies == 0)
  *VAR_7 = 1;

 VAR_4->regulator = FUNC_7(&VAR_3->dev, VAR_5, &VAR_9);

 FUNC_9(VAR_9.of_node);

 if (FUNC_1(VAR_4->regulator)) {
  VAR_10 = FUNC_2(VAR_4->regulator);
  FUNC_4(&VAR_3->dev, "Failed to register LDO1 supply: %d\n",
   VAR_10);
  return VAR_10;
 }

 FUNC_10(VAR_3, VAR_4);

 return 0;
}
