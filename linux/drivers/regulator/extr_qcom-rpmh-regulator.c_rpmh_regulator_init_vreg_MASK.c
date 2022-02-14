
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpmh_vreg_init_data {TYPE_1__* hw_data; int supply_name; scalar_t__ name; int resource_name; } ;
struct TYPE_7__ {int n_linear_ranges; int n_voltages; scalar_t__ fixed_uV; int of_map_mode; int ops; int type; int owner; int * linear_ranges; int supply_name; scalar_t__ name; } ;
struct rpmh_vreg {int enabled; int addr; TYPE_3__ rdesc; TYPE_1__* hw_data; int always_wait_for_ack; int mode; int voltage_selector; struct device* dev; } ;
struct TYPE_6__ {scalar_t__ min_uV; scalar_t__ max_uV; } ;
struct regulator_init_data {TYPE_2__ constraints; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct rpmh_vreg* driver_data; struct device_node* of_node; struct regulator_init_data* init_data; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef int rpmh_resource_name ;
struct TYPE_5__ {int n_voltages; scalar_t__ regulator_type; int of_map_mode; int ops; int voltage_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct device*,char*,struct device_node*,char*,int ) ;
 int FUNC_4 (struct device*,char*,struct device_node*,...) ;
 struct regulator_dev* FUNC_5 (struct device*,TYPE_3__*,struct regulator_config*) ;
 struct regulator_init_data* FUNC_6 (struct device*,struct device_node*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (struct device_node*,scalar_t__) ;
 int FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (char*,int,int ,char const*) ;

__attribute__((used)) static int FUNC_10(struct rpmh_vreg *VAR_8, struct device *VAR_9,
   struct device_node *VAR_10, const char *VAR_11,
   const struct rpmh_vreg_init_data *VAR_12)
{
 struct regulator_config VAR_13 = {};
 char VAR_14[20] = "";
 const struct rpmh_vreg_init_data *VAR_15;
 struct regulator_init_data *VAR_16;
 struct regulator_dev *VAR_17;
 int VAR_18;

 VAR_8->dev = VAR_9;

 for (VAR_15 = VAR_12; VAR_15->name; VAR_15++)
  if (FUNC_7(VAR_10, VAR_15->name))
   break;

 if (!VAR_15->name) {
  FUNC_4(VAR_9, "Unknown regulator %pOFn\n", VAR_10);
  return -VAR_0;
 }

 FUNC_9(VAR_14, sizeof(VAR_14),
  VAR_15->resource_name, VAR_11);

 VAR_8->addr = FUNC_2(VAR_14);
 if (!VAR_8->addr) {
  FUNC_4(VAR_9, "%pOFn: could not find RPMh address for resource %s\n",
   VAR_10, VAR_14);
  return -VAR_1;
 }

 VAR_8->rdesc.name = VAR_15->name;
 VAR_8->rdesc.supply_name = VAR_15->supply_name;
 VAR_8->hw_data = VAR_15->hw_data;

 VAR_8->enabled = -VAR_0;
 VAR_8->voltage_selector = -VAR_3;
 VAR_8->mode = VAR_4;

 if (VAR_15->hw_data->n_voltages) {
  VAR_8->rdesc.linear_ranges = &VAR_15->hw_data->voltage_range;
  VAR_8->rdesc.n_linear_ranges = 1;
  VAR_8->rdesc.n_voltages = VAR_15->hw_data->n_voltages;
 }

 VAR_8->always_wait_for_ack = FUNC_8(VAR_10,
      "qcom,always-wait-for-ack");

 VAR_8->rdesc.owner = VAR_6;
 VAR_8->rdesc.type = VAR_5;
 VAR_8->rdesc.ops = VAR_8->hw_data->ops;
 VAR_8->rdesc.of_map_mode = VAR_8->hw_data->of_map_mode;

 VAR_16 = FUNC_6(VAR_9, VAR_10, &VAR_8->rdesc);
 if (!VAR_16)
  return -VAR_2;

 if (VAR_15->hw_data->regulator_type == VAR_7 &&
     VAR_16->constraints.min_uV &&
     VAR_16->constraints.min_uV == VAR_16->constraints.max_uV) {
  VAR_8->rdesc.fixed_uV = VAR_16->constraints.min_uV;
  VAR_8->rdesc.n_voltages = 1;
 }

 VAR_13.dev = VAR_9;
 VAR_13.init_data = VAR_16;
 VAR_13.of_node = VAR_10;
 VAR_13.driver_data = VAR_8;

 VAR_17 = FUNC_5(VAR_9, &VAR_8->rdesc, &VAR_13);
 if (FUNC_0(VAR_17)) {
  VAR_18 = FUNC_1(VAR_17);
  FUNC_4(VAR_9, "%pOFn: devm_regulator_register() failed, ret=%d\n",
   VAR_10, VAR_18);
  return VAR_18;
 }

 FUNC_3(VAR_9, "%pOFn regulator registered for RPMh resource %s @ 0x%05X\n",
  VAR_10, VAR_14, VAR_8->addr);

 return 0;
}
