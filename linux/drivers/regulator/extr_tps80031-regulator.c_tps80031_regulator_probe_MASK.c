
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tps80031_regulator_platform_data {int ext_ctrl_flag; int config_flags; int * reg_init_data; } ;
struct tps80031_regulator {TYPE_1__* rinfo; int ext_ctrl_flag; int config_flags; TYPE_2__* dev; } ;
struct tps80031_platform_data {struct tps80031_regulator_platform_data** regulator_pdata; } ;
struct tps80031 {int * regmap; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int * init_data; int regmap; struct tps80031_regulator* driver_data; TYPE_2__* dev; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {size_t volt_id; TYPE_3__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct tps80031_regulator*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct tps80031* FUNC_4 (int ) ;
 struct tps80031_platform_data* FUNC_5 (int ) ;
 struct tps80031_regulator* FUNC_6 (TYPE_2__*,int,int,int ) ;
 struct regulator_dev* FUNC_7 (TYPE_2__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_8 (struct platform_device*,struct tps80031_regulator*) ;
 int FUNC_9 (int ,struct tps80031_regulator*,struct tps80031_regulator_platform_data*) ;
 int FUNC_10 (int ,struct tps80031_regulator*,struct tps80031_regulator_platform_data*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct tps80031_platform_data *VAR_6;
 struct tps80031_regulator_platform_data *VAR_7;
 struct tps80031_regulator *VAR_8;
 struct tps80031_regulator *VAR_9;
 struct regulator_dev *VAR_10;
 struct regulator_config VAR_11 = { };
 struct tps80031 *VAR_12 = FUNC_4(VAR_5->dev.parent);
 int VAR_13;
 int VAR_14;

 VAR_6 = FUNC_5(VAR_5->dev.parent);

 if (!VAR_6) {
  FUNC_3(&VAR_5->dev, "No platform data\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_6(&VAR_5->dev,
   VAR_3, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_3; ++VAR_14) {
  VAR_7 = VAR_6->regulator_pdata[VAR_14];
  VAR_8 = &VAR_9[VAR_14];
  VAR_8->rinfo = &VAR_4[VAR_14];
  VAR_8->dev = &VAR_5->dev;

  FUNC_2(VAR_5->dev.parent, VAR_8);
  VAR_11.dev = &VAR_5->dev;
  VAR_11.init_data = ((void*)0);
  VAR_11.driver_data = VAR_8;
  VAR_11.regmap = VAR_12->regmap[VAR_8->rinfo->volt_id];

  if (VAR_7) {
   VAR_11.init_data = VAR_7->reg_init_data;
   VAR_8->config_flags = VAR_7->config_flags;
   VAR_8->ext_ctrl_flag = VAR_7->ext_ctrl_flag;
   VAR_13 = FUNC_10(VAR_5->dev.parent,
     VAR_8, VAR_7);
   if (VAR_13 < 0) {
    FUNC_3(&VAR_5->dev,
     "regulator config failed, e %d\n", VAR_13);
    return VAR_13;
   }

   VAR_13 = FUNC_9(VAR_5->dev.parent,
     VAR_8, VAR_7);
   if (VAR_13 < 0) {
    FUNC_3(&VAR_5->dev,
     "pwr_req config failed, err %d\n", VAR_13);
    return VAR_13;
   }
  }
  VAR_10 = FUNC_7(&VAR_5->dev, &VAR_8->rinfo->desc,
            &VAR_11);
  if (FUNC_0(VAR_10)) {
   FUNC_3(&VAR_5->dev,
    "register regulator failed %s\n",
     VAR_8->rinfo->desc.name);
   return FUNC_1(VAR_10);
  }
 }

 FUNC_8(VAR_5, VAR_9);
 return 0;
}
