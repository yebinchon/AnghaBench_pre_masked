
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct rc5t583_regulator_info* driver_data; int init_data; TYPE_1__* dev; } ;
struct TYPE_6__ {int name; } ;
struct rc5t583_regulator_info {scalar_t__ deepsleep_id; TYPE_2__ desc; } ;
struct rc5t583_platform_data {int * reg_init_data; int * regulator_deepsleep_slot; int * regulator_ext_pwr_control; } ;
struct rc5t583 {int regmap; int dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct rc5t583* FUNC_3 (int ) ;
 struct rc5t583_platform_data* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 struct regulator_dev* FUNC_6 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 int FUNC_7 (int ,scalar_t__,int ,int ) ;
 struct rc5t583_regulator_info* VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct rc5t583 *VAR_5 = FUNC_3(VAR_4->dev.parent);
 struct rc5t583_platform_data *VAR_6 = FUNC_4(VAR_5->dev);
 struct regulator_config VAR_7 = { };
 struct regulator_dev *VAR_8;
 struct rc5t583_regulator_info *VAR_9;
 int VAR_10;
 int VAR_11;

 if (!VAR_6) {
  FUNC_2(&VAR_4->dev, "No platform data, exiting...\n");
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
  VAR_9 = &VAR_3[VAR_11];

  if (VAR_9->deepsleep_id == VAR_1)
   goto skip_ext_pwr_config;

  VAR_10 = FUNC_7(VAR_5->dev,
    VAR_9->deepsleep_id,
    VAR_6->regulator_ext_pwr_control[VAR_11],
    VAR_6->regulator_deepsleep_slot[VAR_11]);




  if (VAR_10 < 0)
   FUNC_5(&VAR_4->dev,
    "Failed to configure ext control %d\n", VAR_11);

skip_ext_pwr_config:
  VAR_7.dev = &VAR_4->dev;
  VAR_7.init_data = VAR_6->reg_init_data[VAR_11];
  VAR_7.driver_data = VAR_9;
  VAR_7.regmap = VAR_5->regmap;

  VAR_8 = FUNC_6(&VAR_4->dev, &VAR_9->desc, &VAR_7);
  if (FUNC_0(VAR_8)) {
   FUNC_2(&VAR_4->dev, "Failed to register regulator %s\n",
      VAR_9->desc.name);
   return FUNC_1(VAR_8);
  }
 }
 return 0;
}
