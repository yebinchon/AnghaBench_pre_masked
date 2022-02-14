
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_ops {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_desc {int min_uV; int uV_step; int linear_min_sel; int enable_time; struct regulator_ops const* ops; void* csel_mask; void* csel_reg; void* n_current_limits; void* curr_table; void* n_linear_ranges; void* linear_ranges; int n_voltages; void* bypass_val_off; void* bypass_val_on; int bypass_mask; int bypass_reg; int vsel_mask; void* vsel_reg; int enable_mask; int enable_reg; int owner; int type; int id; int supply_name; int name; } ;
struct regulator_config {int of_node; int init_data; int regmap; struct as3722_regulators* driver_data; TYPE_1__* dev; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct as3722_regulators {struct regulator_desc* desc; struct as3722_regulator_config_data* reg_config_data; struct as3722* as3722; TYPE_1__* dev; } ;
struct as3722_regulator_config_data {scalar_t__ ext_control; int reg_init; int enable_tracking; } ;
struct as3722 {int regmap; } ;
struct TYPE_8__ {void* vsel_reg; int vsel_mask; int enable_mask; int enable_reg; int n_voltages; int regulator_id; int sname; int name; } ;
struct TYPE_7__ {int of_node; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;



 int VAR_10 ;







 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct as3722_regulators*,int,scalar_t__) ;
 int FUNC_4 (struct platform_device*,struct as3722_regulators*) ;
 struct regulator_ops VAR_17 ;
 struct regulator_ops VAR_18 ;
 struct regulator_ops VAR_19 ;
 struct regulator_ops VAR_20 ;
 int FUNC_5 (struct as3722_regulators*,int,int ) ;
 struct regulator_ops VAR_21 ;
 struct regulator_ops VAR_22 ;
 void* VAR_23 ;
 struct regulator_ops VAR_24 ;
 struct regulator_ops VAR_25 ;
 void* VAR_26 ;
 TYPE_5__* VAR_27 ;
 TYPE_4__* VAR_28 ;
 void* VAR_29 ;
 struct regulator_ops VAR_30 ;
 struct regulator_ops VAR_31 ;
 int FUNC_6 (struct as3722_regulators*) ;
 struct regulator_ops VAR_32 ;
 struct regulator_ops VAR_33 ;
 void* VAR_34 ;
 int FUNC_7 (TYPE_1__*,char*,int,...) ;
 struct as3722* FUNC_8 (int ) ;
 struct as3722_regulators* FUNC_9 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_10 (TYPE_1__*,struct regulator_desc*,struct regulator_config*) ;
 int FUNC_11 (struct platform_device*,struct as3722_regulators*) ;
 int FUNC_12 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_35)
{
 struct as3722 *VAR_36 = FUNC_8(VAR_35->dev.parent);
 struct as3722_regulators *VAR_37;
 struct as3722_regulator_config_data *VAR_38;
 struct regulator_dev *VAR_39;
 struct regulator_config VAR_40 = { };
 const struct regulator_ops *VAR_41;
 int VAR_42;
 int VAR_43;

 VAR_37 = FUNC_9(&VAR_35->dev, sizeof(*VAR_37),
    VAR_14);
 if (!VAR_37)
  return -VAR_13;

 VAR_37->dev = &VAR_35->dev;
 VAR_37->as3722 = VAR_36;
 FUNC_11(VAR_35, VAR_37);

 VAR_43 = FUNC_4(VAR_35, VAR_37);
 if (VAR_43 < 0)
  return VAR_43;

 VAR_40.dev = &VAR_35->dev;
 VAR_40.driver_data = VAR_37;
 VAR_40.regmap = VAR_36->regmap;

 for (VAR_42 = 0; VAR_42 < VAR_10; VAR_42++) {
  struct regulator_desc *VAR_44;

  VAR_44 = &VAR_37->desc[VAR_42];
  VAR_38 = &VAR_37->reg_config_data[VAR_42];

  VAR_44->name = VAR_27[VAR_42].name;
  VAR_44->supply_name = VAR_27[VAR_42].sname;
  VAR_44->id = VAR_27[VAR_42].regulator_id;
  VAR_44->n_voltages = VAR_27[VAR_42].n_voltages;
  VAR_44->type = VAR_15;
  VAR_44->owner = VAR_16;
  VAR_44->enable_reg = VAR_27[VAR_42].enable_reg;
  VAR_44->enable_mask = VAR_27[VAR_42].enable_mask;
  VAR_44->vsel_reg = VAR_27[VAR_42].vsel_reg;
  VAR_44->vsel_mask = VAR_27[VAR_42].vsel_mask;
  switch (VAR_42) {
  case 137:
   if (VAR_38->ext_control)
    VAR_41 = &VAR_17;
   else
    VAR_41 = &VAR_18;
   VAR_44->min_uV = 825000;
   VAR_44->uV_step = 25000;
   VAR_44->linear_min_sel = 1;
   VAR_44->enable_time = 500;
   VAR_44->curr_table = VAR_23;
   VAR_44->n_current_limits = FUNC_0(VAR_23);
   VAR_44->csel_reg = VAR_27[VAR_42].vsel_reg;
   VAR_44->csel_mask = VAR_3;
   break;
  case 136:
   if (VAR_38->ext_control)
    VAR_41 = &VAR_19;
   else
    VAR_41 = &VAR_20;
   VAR_44->min_uV = 620000;
   VAR_44->uV_step = 20000;
   VAR_44->linear_min_sel = 1;
   VAR_44->enable_time = 500;
   if (VAR_38->enable_tracking) {
    VAR_43 = FUNC_5(VAR_37,
     VAR_42, VAR_0);
    if (VAR_43 < 0) {
     FUNC_7(&VAR_35->dev,
      "LDO3 tracking failed: %d\n",
      VAR_43);
     return VAR_43;
    }
   }
   break;
  case 135:
   if (VAR_38->ext_control)
    VAR_41 = &VAR_21;
   else
    VAR_41 = &VAR_22;
   VAR_44->enable_time = 500;
   VAR_44->bypass_reg = VAR_1;
   VAR_44->bypass_mask = VAR_4;
   VAR_44->bypass_val_on = VAR_2;
   VAR_44->bypass_val_off = VAR_2;
   VAR_44->linear_ranges = VAR_26;
   VAR_44->n_linear_ranges = FUNC_0(VAR_26);
   VAR_44->curr_table = VAR_23;
   VAR_44->n_current_limits = FUNC_0(VAR_23);
   VAR_44->csel_reg = VAR_27[VAR_42].vsel_reg;
   VAR_44->csel_mask = VAR_3;
   break;
  case 134:
  case 133:
  case 128:
   if (VAR_38->ext_control)
    VAR_41 = &VAR_30;
   else
    VAR_41 = &VAR_31;
   if (VAR_42 == 134 &&
       FUNC_6(VAR_37)) {
    VAR_37->desc[VAR_42].n_voltages =
     VAR_11 + 1;
    VAR_37->desc[VAR_42].min_uV = 410000;
   } else {
    VAR_37->desc[VAR_42].n_voltages =
     VAR_12 + 1;
    VAR_37->desc[VAR_42].min_uV = 610000;
   }
   VAR_44->uV_step = 10000;
   VAR_44->linear_min_sel = 1;
   VAR_44->enable_time = 600;
   VAR_44->curr_table = VAR_29;
   VAR_44->n_current_limits =
    FUNC_0(VAR_29);
   if (VAR_42 == 134) {
    VAR_44->csel_reg = VAR_6;
    VAR_44->csel_mask =
     VAR_7;
   } else if (VAR_42 == 133) {
    VAR_44->csel_reg = VAR_6;
    VAR_44->csel_mask =
     VAR_8;
   } else if (VAR_42 == 128) {
    VAR_44->csel_reg = VAR_5;
    VAR_44->csel_mask =
     VAR_9;
   }
   break;
  case 132:
  case 131:
  case 130:
  case 129:
   if (VAR_38->ext_control)
    VAR_41 = &VAR_32;
   else
    VAR_41 = &VAR_33;
   VAR_44->linear_ranges = VAR_34;
   VAR_44->n_linear_ranges =
     FUNC_0(VAR_34);
   break;
  default:
   if (VAR_38->ext_control)
    VAR_41 = &VAR_24;
   else
    VAR_41 = &VAR_25;
   VAR_44->enable_time = 500;
   VAR_44->linear_ranges = VAR_26;
   VAR_44->n_linear_ranges = FUNC_0(VAR_26);
   VAR_44->curr_table = VAR_23;
   VAR_44->n_current_limits = FUNC_0(VAR_23);
   VAR_44->csel_reg = VAR_27[VAR_42].vsel_reg;
   VAR_44->csel_mask = VAR_3;
   break;
  }
  VAR_44->ops = VAR_41;
  VAR_40.init_data = VAR_38->reg_init;
  VAR_40.of_node = VAR_28[VAR_42].of_node;
  VAR_39 = FUNC_10(&VAR_35->dev, VAR_44, &VAR_40);
  if (FUNC_1(VAR_39)) {
   VAR_43 = FUNC_2(VAR_39);
   FUNC_7(&VAR_35->dev, "regulator %d register failed %d\n",
    VAR_42, VAR_43);
   return VAR_43;
  }

  if (VAR_38->ext_control) {
   VAR_43 = FUNC_12(VAR_39);
   if (VAR_43 < 0) {
    FUNC_7(&VAR_35->dev,
     "Regulator %d enable failed: %d\n",
     VAR_42, VAR_43);
    return VAR_43;
   }
   VAR_43 = FUNC_3(VAR_37, VAR_42,
     VAR_38->ext_control);
   if (VAR_43 < 0) {
    FUNC_7(&VAR_35->dev,
     "AS3722 ext control failed: %d", VAR_43);
    return VAR_43;
   }
  }
 }
 return 0;
}
