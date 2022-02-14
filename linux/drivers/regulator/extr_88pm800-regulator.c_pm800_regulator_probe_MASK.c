
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {TYPE_2__* driver_data; struct regulator_init_data* init_data; int regmap; int dev; } ;
struct pm80x_platform_data {unsigned int num_regulators; struct regulator_init_data** regulators; } ;
struct pm80x_chip {TYPE_1__* subchip; int dev; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_7__ {TYPE_4__ desc; } ;
struct TYPE_6__ {int regmap_power; } ;


 int FUNC_0 (struct regulator_init_data**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int VAR_1 ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 struct pm80x_chip* FUNC_4 (int ) ;
 struct pm80x_platform_data* FUNC_5 (int ) ;
 struct regulator_dev* FUNC_6 (TYPE_3__*,TYPE_4__*,struct regulator_config*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct pm80x_chip *VAR_4 = FUNC_4(VAR_3->dev.parent);
 struct pm80x_platform_data *VAR_5 = FUNC_5(VAR_3->dev.parent);
 struct regulator_config VAR_6 = { };
 struct regulator_init_data *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_5 && VAR_5->num_regulators) {
  unsigned int VAR_10 = 0;


  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->regulators); VAR_8++) {
   if (VAR_5->regulators[VAR_8])
    VAR_10++;
  }
  if (VAR_10 != VAR_5->num_regulators)
   return -VAR_0;
 }

 VAR_6.dev = VAR_4->dev;
 VAR_6.regmap = VAR_4->subchip->regmap_power;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  struct regulator_dev *VAR_11;

  if (VAR_5 && VAR_5->num_regulators) {
   VAR_7 = VAR_5->regulators[VAR_8];
   if (!VAR_7)
    continue;

   VAR_6.init_data = VAR_7;
  }

  VAR_6.driver_data = &VAR_2[VAR_8];

  VAR_11 = FUNC_6(&VAR_3->dev,
    &VAR_2[VAR_8].desc, &VAR_6);
  if (FUNC_1(VAR_11)) {
   VAR_9 = FUNC_2(VAR_11);
   FUNC_3(&VAR_3->dev, "Failed to register %s\n",
     VAR_2[VAR_8].desc.name);
   return VAR_9;
  }
 }

 return 0;
}
