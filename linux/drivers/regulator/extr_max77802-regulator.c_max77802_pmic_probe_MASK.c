
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct max77802_regulator_prv* driver_data; int regmap; int dev; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct max77802_regulator_prv {int* opmode; } ;
struct max77686_dev {int regmap; int dev; } ;
struct TYPE_7__ {int id; int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_2__*,char*,int,int) ;
 struct max77686_dev* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 struct max77802_regulator_prv* FUNC_5 (TYPE_2__*,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_2__*,TYPE_1__*,struct regulator_config*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct platform_device*,struct max77802_regulator_prv*) ;
 int FUNC_9 (int ,int ,int*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct max77686_dev *VAR_8 = FUNC_3(VAR_7->dev.parent);
 struct max77802_regulator_prv *VAR_9;
 int VAR_10, VAR_11;
 struct regulator_config VAR_12 = { };

 VAR_9 = FUNC_5(&VAR_7->dev,
    sizeof(struct max77802_regulator_prv),
    VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_12.dev = VAR_8->dev;
 VAR_12.regmap = VAR_8->regmap;
 VAR_12.driver_data = VAR_9;
 FUNC_8(VAR_7, VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  struct regulator_dev *VAR_13;
  int VAR_14 = VAR_6[VAR_10].id;
  int VAR_15 = FUNC_7(VAR_14);
  int VAR_16;

  VAR_16 = FUNC_9(VAR_8->regmap, VAR_6[VAR_10].enable_reg, &VAR_11);
  if (VAR_16 < 0) {
   FUNC_4(&VAR_7->dev,
    "cannot read current mode for %d\n", VAR_10);
   VAR_11 = VAR_3;
  } else {
   VAR_11 = VAR_11 >> VAR_15 & VAR_2;
  }






  if (VAR_11 == VAR_5)
   VAR_9->opmode[VAR_14] = VAR_3;
  else
   VAR_9->opmode[VAR_14] = VAR_11;

  VAR_13 = FUNC_6(&VAR_7->dev,
            &VAR_6[VAR_10], &VAR_12);
  if (FUNC_0(VAR_13)) {
   VAR_16 = FUNC_1(VAR_13);
   FUNC_2(&VAR_7->dev,
    "regulator init failed for %d: %d\n", VAR_10, VAR_16);
   return VAR_16;
  }
 }

 return 0;
}
