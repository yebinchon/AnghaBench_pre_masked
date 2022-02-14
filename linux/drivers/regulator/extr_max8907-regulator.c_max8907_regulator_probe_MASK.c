
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; } ;
struct regulator_init_data {char const* supply_regulator; TYPE_1__ constraints; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; int of_node; struct max8907_regulator* driver_data; struct regulator_init_data* init_data; int dev; } ;
struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct max8907_regulator {TYPE_2__* desc; } ;
struct max8907_platform_data {struct regulator_init_data** init_data; } ;
struct max8907 {int regmap_gen; int dev; } ;
struct TYPE_8__ {int min_uV; int uV_step; int n_voltages; int id; char* name; int * ops; int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;


 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_3__*,char*,char*) ;
 struct max8907* FUNC_3 (int ) ;
 struct max8907_platform_data* FUNC_4 (int ) ;
 struct max8907_regulator* FUNC_5 (TYPE_3__*,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_3__*,TYPE_2__*,struct regulator_config*) ;
 struct regulator_init_data* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct platform_device*) ;
 int VAR_14 ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (struct platform_device*,struct max8907_regulator*) ;
 int FUNC_12 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_15)
{
 struct max8907 *VAR_16 = FUNC_3(VAR_15->dev.parent);
 struct max8907_platform_data *VAR_17 = FUNC_4(VAR_16->dev);
 int VAR_18;
 struct max8907_regulator *VAR_19;
 unsigned int VAR_20;
 int VAR_21;
 struct regulator_config VAR_22 = {};
 struct regulator_init_data *VAR_23;
 const char *VAR_24 = ((void*)0);

 VAR_18 = FUNC_9(VAR_15);
 if (VAR_18)
  return VAR_18;

 VAR_19 = FUNC_5(&VAR_15->dev, sizeof(*VAR_19), VAR_1);
 if (!VAR_19)
  return -VAR_0;

 FUNC_11(VAR_15, VAR_19);

 FUNC_10(VAR_19->desc, VAR_14, sizeof(VAR_19->desc));


 FUNC_12(VAR_16->regmap_gen, VAR_8, &VAR_20);
 if ((VAR_20 & VAR_2) ==
     VAR_3) {
  VAR_19->desc[VAR_9].min_uV = 637500;
  VAR_19->desc[VAR_9].uV_step = 12500;
  VAR_19->desc[VAR_9].n_voltages =
      (1425000 - 637500) / 12500 + 1;
 }

 for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
  struct regulator_dev *VAR_25;

  VAR_22.dev = VAR_15->dev.parent;
  if (VAR_17)
   VAR_23 = VAR_17->init_data[VAR_21];
  else
   VAR_23 = FUNC_7(VAR_21);
  VAR_22.init_data = VAR_23;
  VAR_22.driver_data = VAR_19;
  VAR_22.regmap = VAR_16->regmap_gen;
  VAR_22.of_node = FUNC_8(VAR_21);

  switch (VAR_19->desc[VAR_21].id) {
  case 130:
   if (VAR_23 && VAR_23->constraints.name)
    VAR_24 = VAR_23->constraints.name;
   else
    VAR_24 = VAR_19->desc[VAR_21].name;
   break;
  case 131:
  case 129:
  case 128:
   VAR_23->supply_regulator = VAR_24;
   break;
  }

  if (VAR_19->desc[VAR_21].ops == &VAR_11) {
   FUNC_12(VAR_22.regmap, VAR_19->desc[VAR_21].enable_reg,
        &VAR_20);
   if ((VAR_20 & VAR_4) !=
       VAR_4)
    VAR_19->desc[VAR_21].ops = &VAR_10;
  } else if (VAR_19->desc[VAR_21].ops == &VAR_13) {
   FUNC_12(VAR_22.regmap, VAR_19->desc[VAR_21].enable_reg,
        &VAR_20);
   if ((VAR_20 & (VAR_6 |
      VAR_5)) !=
       VAR_5)
    VAR_19->desc[VAR_21].ops = &VAR_12;
  }

  VAR_25 = FUNC_6(&VAR_15->dev,
      &VAR_19->desc[VAR_21], &VAR_22);
  if (FUNC_0(VAR_25)) {
   FUNC_2(&VAR_15->dev,
    "failed to register %s regulator\n",
    VAR_19->desc[VAR_21].name);
   return FUNC_1(VAR_25);
  }
 }

 return 0;
}
