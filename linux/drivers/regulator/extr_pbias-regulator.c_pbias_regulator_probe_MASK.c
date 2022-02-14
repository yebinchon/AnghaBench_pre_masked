
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {unsigned int start; } ;
struct regulator_config {scalar_t__ of_node; struct pbias_regulator_data* driver_data; scalar_t__ init_data; TYPE_2__* dev; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_12__ {unsigned int vsel_reg; unsigned int enable_reg; int disable_val; int enable_val; int enable_mask; int vsel_mask; int enable_time; int n_voltages; int volt_table; int * ops; int type; int owner; int name; } ;
struct pbias_regulator_data {struct regmap* dev; TYPE_6__ desc; struct pbias_reg_info const* info; struct regmap* syscon; } ;
struct pbias_reg_info {int disable_val; int enable; int enable_mask; int vmode; int enable_time; int n_voltages; int pbias_volt_table; int name; } ;
struct pbias_of_data {unsigned int offset; } ;
struct of_device_id {struct pbias_of_data* data; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {scalar_t__ of_node; scalar_t__ init_data; struct pbias_reg_info* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_5 ;
 int FUNC_1 (struct regmap*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 struct pbias_regulator_data* FUNC_4 (TYPE_2__*,int,int,int ) ;
 struct regmap* FUNC_5 (TYPE_2__*,TYPE_6__*,struct regulator_config*) ;
 struct of_device_id* FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,struct device_node*,TYPE_1__*,int) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct pbias_regulator_data*) ;
 struct regmap* FUNC_11 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11)
{
 struct device_node *VAR_12 = VAR_11->dev.of_node;
 struct pbias_regulator_data *VAR_13;
 struct resource *VAR_14;
 struct regulator_config VAR_15 = { };
 struct regmap *VAR_16;
 const struct pbias_reg_info *VAR_17;
 int VAR_18 = 0;
 int VAR_19, VAR_20, VAR_21 = 0;
 const struct of_device_id *VAR_22;
 const struct pbias_of_data *VAR_23;
 unsigned int VAR_24;

 VAR_19 = FUNC_8(&VAR_11->dev, VAR_12, VAR_8,
      VAR_5);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_13 = FUNC_4(&VAR_11->dev,
          VAR_19, sizeof(struct pbias_regulator_data),
          VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_16 = FUNC_11(VAR_12, "syscon");
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 VAR_22 = FUNC_6(FUNC_7(VAR_9), &VAR_11->dev);
 if (VAR_22 && VAR_22->data) {
  VAR_23 = VAR_22->data;
  VAR_24 = VAR_23->offset;
 } else {
  VAR_14 = FUNC_9(VAR_11, VAR_4, 0);
  if (!VAR_14)
   return -VAR_0;

  VAR_24 = VAR_14->start;
  FUNC_2(&VAR_11->dev,
    "using legacy dt data for pbias offset\n");
 }

 VAR_15.regmap = VAR_16;
 VAR_15.dev = &VAR_11->dev;

 for (VAR_20 = 0; VAR_20 < VAR_5 && VAR_21 < VAR_19; VAR_20++) {
  if (!VAR_8[VAR_20].init_data ||
   !VAR_8[VAR_20].of_node)
   continue;

  VAR_17 = VAR_8[VAR_20].driver_data;
  if (!VAR_17)
   return -VAR_1;

  VAR_13[VAR_21].syscon = VAR_16;
  VAR_13[VAR_21].info = VAR_17;
  VAR_13[VAR_21].desc.name = VAR_17->name;
  VAR_13[VAR_21].desc.owner = VAR_7;
  VAR_13[VAR_21].desc.type = VAR_6;
  VAR_13[VAR_21].desc.ops = &VAR_10;
  VAR_13[VAR_21].desc.volt_table = VAR_17->pbias_volt_table;
  VAR_13[VAR_21].desc.n_voltages = VAR_17->n_voltages;
  VAR_13[VAR_21].desc.enable_time = VAR_17->enable_time;
  VAR_13[VAR_21].desc.vsel_reg = VAR_24;
  VAR_13[VAR_21].desc.vsel_mask = VAR_17->vmode;
  VAR_13[VAR_21].desc.enable_reg = VAR_24;
  VAR_13[VAR_21].desc.enable_mask = VAR_17->enable_mask;
  VAR_13[VAR_21].desc.enable_val = VAR_17->enable;
  VAR_13[VAR_21].desc.disable_val = VAR_17->disable_val;

  VAR_15.init_data = VAR_8[VAR_20].init_data;
  VAR_15.driver_data = &VAR_13[VAR_21];
  VAR_15.of_node = VAR_8[VAR_20].of_node;

  VAR_13[VAR_21].dev = FUNC_5(&VAR_11->dev,
     &VAR_13[VAR_21].desc, &VAR_15);
  if (FUNC_0(VAR_13[VAR_21].dev)) {
   VAR_18 = FUNC_1(VAR_13[VAR_21].dev);
   FUNC_3(&VAR_11->dev,
    "Failed to register regulator: %d\n", VAR_18);
   goto err_regulator;
  }
  VAR_21++;
 }

 FUNC_10(VAR_11, VAR_13);

err_regulator:
 return VAR_18;
}
