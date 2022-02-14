
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_desc {int enable_reg; } ;
struct regulator_config {int of_node; TYPE_2__* init_data; int regmap; struct arizona_micsupp* driver_data; int dev; } ;
struct platform_device {int dev; } ;
struct arizona_micsupp_pdata {TYPE_2__* init_data; } ;
struct TYPE_4__ {TYPE_1__* consumer_supplies; } ;
struct TYPE_3__ {char* supply; int dev_name; } ;
struct arizona_micsupp {int dev; int regulator; int enable_reg; int regmap; TYPE_2__ init_data; TYPE_1__ supply; int check_cp_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct arizona_micsupp_pdata*,struct regulator_config*,struct regulator_desc const*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct regulator_desc const*,struct regulator_config*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct platform_device*,struct arizona_micsupp*) ;
 int FUNC_11 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_3,
           struct arizona_micsupp *VAR_4,
           const struct regulator_desc *VAR_5,
           struct arizona_micsupp_pdata *VAR_6)
{
 struct regulator_config VAR_7 = { };
 int VAR_8;

 FUNC_0(&VAR_4->check_cp_work, VAR_2);

 VAR_4->init_data.consumer_supplies = &VAR_4->supply;
 VAR_4->supply.supply = "MICVDD";
 VAR_4->supply.dev_name = FUNC_7(VAR_4->dev);
 VAR_4->enable_reg = VAR_5->enable_reg;

 VAR_7.dev = VAR_4->dev;
 VAR_7.driver_data = VAR_4;
 VAR_7.regmap = VAR_4->regmap;

 if (FUNC_1(VAR_1)) {
  if (!FUNC_6(VAR_4->dev)) {
   VAR_8 = FUNC_4(VAR_6, &VAR_7,
          VAR_5);
   if (VAR_8 < 0)
    return VAR_8;
  }
 }

 if (VAR_6->init_data)
  VAR_7.init_data = VAR_6->init_data;
 else
  VAR_7.init_data = &VAR_4->init_data;


 FUNC_11(VAR_4->regmap, VAR_4->enable_reg,
      VAR_0, 0);

 VAR_4->regulator = FUNC_8(&VAR_3->dev,
           VAR_5,
           &VAR_7);

 FUNC_9(VAR_7.of_node);

 if (FUNC_2(VAR_4->regulator)) {
  VAR_8 = FUNC_3(VAR_4->regulator);
  FUNC_5(VAR_4->dev, "Failed to register mic supply: %d\n",
   VAR_8);
  return VAR_8;
 }

 FUNC_10(VAR_3, VAR_4);

 return 0;
}
