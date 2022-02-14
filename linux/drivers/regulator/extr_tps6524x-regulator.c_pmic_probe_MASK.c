
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps6524x {TYPE_1__* desc; int lock; struct spi_device* spi; struct device* dev; } ;
struct supply_info {int voltages; int n_voltages; int name; } ;
struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct tps6524x* driver_data; struct regulator_init_data* init_data; struct device* dev; } ;
struct TYPE_2__ {int id; int owner; int type; int * ops; int volt_table; int n_voltages; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_3 ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 struct regulator_init_data* FUNC_3 (struct device*) ;
 struct tps6524x* FUNC_4 (struct device*,int,int ) ;
 struct regulator_dev* FUNC_5 (struct device*,TYPE_1__*,struct regulator_config*) ;
 int FUNC_6 (struct tps6524x*,int ,int) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (struct spi_device*,struct tps6524x*) ;
 struct supply_info* VAR_7 ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_8)
{
 struct tps6524x *VAR_9;
 struct device *VAR_10 = &VAR_8->dev;
 const struct supply_info *VAR_11 = VAR_7;
 struct regulator_init_data *VAR_12;
 struct regulator_config VAR_13 = { };
 struct regulator_dev *VAR_14;
 int VAR_15;

 VAR_12 = FUNC_3(VAR_10);
 if (!VAR_12) {
  FUNC_2(VAR_10, "could not find regulator platform data\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_4(&VAR_8->dev, sizeof(struct tps6524x), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_8(VAR_8, VAR_9);

 FUNC_6(VAR_9, 0, sizeof(struct tps6524x));
 VAR_9->dev = VAR_10;
 VAR_9->spi = VAR_8;
 FUNC_7(&VAR_9->lock);

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++, VAR_11++, VAR_12++) {
  VAR_9->desc[VAR_15].name = VAR_11->name;
  VAR_9->desc[VAR_15].id = VAR_15;
  VAR_9->desc[VAR_15].n_voltages = VAR_11->n_voltages;
  VAR_9->desc[VAR_15].volt_table = VAR_11->voltages;
  VAR_9->desc[VAR_15].ops = &VAR_6;
  VAR_9->desc[VAR_15].type = VAR_4;
  VAR_9->desc[VAR_15].owner = VAR_5;

  VAR_13.dev = VAR_10;
  VAR_13.init_data = VAR_12;
  VAR_13.driver_data = VAR_9;

  VAR_14 = FUNC_5(VAR_10, &VAR_9->desc[VAR_15], &VAR_13);
  if (FUNC_0(VAR_14))
   return FUNC_1(VAR_14);
 }

 return 0;
}
