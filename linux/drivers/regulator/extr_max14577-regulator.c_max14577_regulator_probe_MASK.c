
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int name; int id; } ;
struct regulator_config {int regmap; int of_node; int init_data; struct max14577* driver_data; int dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct max14577_platform_data {TYPE_1__* regulators; } ;
struct max14577 {int dev_type; int dev; } ;
typedef enum maxim_device_type { ____Placeholder_maxim_device_type } maxim_device_type ;
struct TYPE_4__ {int of_node; int initdata; } ;


 unsigned int FUNC_0 (struct regulator_desc*) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;


 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_2__*,char*,int,int ,int) ;
 struct max14577* FUNC_4 (int ) ;
 struct max14577_platform_data* FUNC_5 (int ) ;
 struct regulator_dev* FUNC_6 (TYPE_2__*,struct regulator_desc const*,struct regulator_config*) ;
 int FUNC_7 (struct max14577*,int ) ;
 struct regulator_desc* VAR_0 ;
 struct regulator_desc* VAR_1 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct max14577 *VAR_3 = FUNC_4(VAR_2->dev.parent);
 struct max14577_platform_data *VAR_4 = FUNC_5(VAR_3->dev);
 int VAR_5, VAR_6 = 0;
 struct regulator_config VAR_7 = {};
 const struct regulator_desc *VAR_8;
 unsigned int VAR_9;
 enum maxim_device_type VAR_10 = VAR_3->dev_type;

 switch (VAR_10) {
 case 128:
  VAR_8 = VAR_1;
  VAR_9 = FUNC_0(VAR_1);
  break;
 case 129:
 default:
  VAR_8 = VAR_0;
  VAR_9 = FUNC_0(VAR_0);
 }

 VAR_7.dev = VAR_3->dev;
 VAR_7.driver_data = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
  struct regulator_dev *VAR_11;




  if (VAR_4 && VAR_4->regulators) {
   VAR_7.init_data = VAR_4->regulators[VAR_5].initdata;
   VAR_7.of_node = VAR_4->regulators[VAR_5].of_node;
  }
  VAR_7.regmap = FUNC_7(VAR_3,
    VAR_8[VAR_5].id);

  VAR_11 = FUNC_6(&VAR_2->dev,
    &VAR_8[VAR_5], &VAR_7);
  if (FUNC_1(VAR_11)) {
   VAR_6 = FUNC_2(VAR_11);
   FUNC_3(&VAR_2->dev,
     "Regulator init failed for %d/%s with error: %d\n",
     VAR_5, VAR_8[VAR_5].name, VAR_6);
   return VAR_6;
  }
 }

 return VAR_6;
}
