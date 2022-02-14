
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tps_info {char* name; int table; int table_len; int defdcdc_default; } ;
struct tps6507x_reg_platform_data {int defdcdc_default; } ;
struct tps6507x_pmic {TYPE_2__* desc; struct tps_info** info; struct tps6507x_dev* mfd; int io_lock; } ;
struct tps6507x_dev {struct tps6507x_pmic* pmic; int dev; } ;
struct tps6507x_board {struct regulator_init_data* tps6507x_pmic_init_data; } ;
struct regulator_init_data {struct tps6507x_reg_platform_data* driver_data; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct tps6507x_pmic* driver_data; struct regulator_init_data* init_data; int dev; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {int name; TYPE_1__ dev; } ;
struct TYPE_5__ {char* name; int id; int owner; int type; int * ops; int volt_table; int n_voltages; int of_parse_cb; void* regulators_node; void* of_match; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int ) ;
 struct tps6507x_dev* FUNC_3 (int ) ;
 struct tps6507x_board* FUNC_4 (int ) ;
 struct tps6507x_pmic* FUNC_5 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (char*) ;
 int FUNC_9 (struct platform_device*,struct tps6507x_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct tps_info* VAR_7 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct tps6507x_dev *VAR_9 = FUNC_3(VAR_8->dev.parent);
 struct tps_info *VAR_10 = &VAR_7[0];
 struct regulator_config VAR_11 = { };
 struct regulator_init_data *VAR_12 = ((void*)0);
 struct regulator_dev *VAR_13;
 struct tps6507x_pmic *VAR_14;
 struct tps6507x_board *VAR_15;
 int VAR_16;






 VAR_15 = FUNC_4(VAR_9->dev);
 if (VAR_15)
  VAR_12 = VAR_15->tps6507x_pmic_init_data;

 VAR_14 = FUNC_5(&VAR_8->dev, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 FUNC_7(&VAR_14->io_lock);


 VAR_14->mfd = VAR_9;

 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++, VAR_10++) {

  VAR_14->info[VAR_16] = VAR_10;
  if (VAR_12 && VAR_12[VAR_16].driver_data) {
   struct tps6507x_reg_platform_data *VAR_17 =
     VAR_12[VAR_16].driver_data;
   VAR_10->defdcdc_default = VAR_17->defdcdc_default;
  }

  VAR_14->desc[VAR_16].name = VAR_10->name;
  VAR_14->desc[VAR_16].of_match = FUNC_8(VAR_10->name);
  VAR_14->desc[VAR_16].regulators_node = FUNC_8("regulators");
  VAR_14->desc[VAR_16].of_parse_cb = VAR_5;
  VAR_14->desc[VAR_16].id = VAR_16;
  VAR_14->desc[VAR_16].n_voltages = VAR_10->table_len;
  VAR_14->desc[VAR_16].volt_table = VAR_10->table;
  VAR_14->desc[VAR_16].ops = &VAR_6;
  VAR_14->desc[VAR_16].type = VAR_2;
  VAR_14->desc[VAR_16].owner = VAR_3;

  VAR_11.dev = VAR_9->dev;
  VAR_11.init_data = VAR_12;
  VAR_11.driver_data = VAR_14;

  VAR_13 = FUNC_6(&VAR_8->dev, &VAR_14->desc[VAR_16],
            &VAR_11);
  if (FUNC_0(VAR_13)) {
   FUNC_2(VAR_9->dev,
    "failed to register %s regulator\n",
    VAR_8->name);
   return FUNC_1(VAR_13);
  }
 }

 VAR_9->pmic = VAR_14;
 FUNC_9(VAR_8, VAR_9);

 return 0;
}
