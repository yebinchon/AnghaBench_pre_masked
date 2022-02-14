
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int id; int n_voltages; int min_uV; int uV_step; int linear_min_sel; int enable_time; int ramp_delay; int supply_name; int enable_mask; void* enable_reg; int * ops; void* bypass_mask; void* bypass_val_on; void* bypass_reg; int vsel_mask; void* vsel_reg; int owner; int type; int name; } ;
struct regulator_config {int of_node; int * init_data; } ;
struct palmas_regs_info {int sname; int ctrl_addr; int vsel_addr; int name; } ;
struct palmas_reg_init {scalar_t__ roof_floor; } ;
struct palmas_pmic_platform_data {struct palmas_reg_init** reg_init; int ** reg_data; } ;
struct palmas_pmic_driver_data {int ldo_begin; int max_reg; TYPE_1__* palmas_matches; struct palmas_regs_info* palmas_regs_info; } ;
struct palmas_pmic {int palmas; int dev; struct regulator_desc* desc; } ;
struct TYPE_2__ {int of_node; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct regulator_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,char*,char const*) ;
 struct regulator_dev* FUNC_4 (int ,struct regulator_desc*,struct regulator_config*) ;
 int FUNC_5 (int ,int,struct palmas_reg_init*) ;
 int FUNC_6 (int ,int,struct palmas_reg_init*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_7(struct palmas_pmic *VAR_17,
         struct palmas_pmic_driver_data *VAR_18,
         struct palmas_pmic_platform_data *VAR_19,
         const char *VAR_20,
         struct regulator_config VAR_21)
{
 int VAR_22, VAR_23;
 struct regulator_dev *VAR_24;
 struct palmas_reg_init *VAR_25;
 struct palmas_regs_info *VAR_26;
 struct regulator_desc *VAR_27;

 for (VAR_22 = VAR_18->ldo_begin; VAR_22 < VAR_18->max_reg; VAR_22++) {
  if (VAR_19 && VAR_19->reg_init[VAR_22])
   VAR_25 = VAR_19->reg_init[VAR_22];
  else
   VAR_25 = ((void*)0);




  VAR_26 = &VAR_18->palmas_regs_info[VAR_22];


  VAR_27 = &VAR_17->desc[VAR_22];
  VAR_27->name = VAR_26->name;
  VAR_27->id = VAR_22;
  VAR_27->type = VAR_6;
  VAR_27->owner = VAR_7;

  if (VAR_22 < VAR_11) {
   VAR_27->n_voltages = VAR_3;
   if (VAR_25 && VAR_25->roof_floor)
    VAR_27->ops = &VAR_13;
   else
    VAR_27->ops = &VAR_15;
   VAR_27->min_uV = 900000;
   VAR_27->uV_step = 50000;
   VAR_27->linear_min_sel = 1;
   VAR_27->enable_time = 500;
   VAR_27->vsel_reg = FUNC_1(VAR_2,
           VAR_26->vsel_addr);
   VAR_27->vsel_mask = VAR_1;
   VAR_27->enable_reg = FUNC_1(VAR_2,
             VAR_26->ctrl_addr);
   VAR_27->enable_mask = VAR_0;




   VAR_27->ramp_delay = 2500;
   if (VAR_22 == VAR_9 ||
       VAR_22 == VAR_10) {
    VAR_27->ops = &VAR_16;
    VAR_27->bypass_reg = VAR_27->enable_reg;
    VAR_27->bypass_val_on =
      VAR_8;
    VAR_27->bypass_mask =
      VAR_8;
   }
  } else {
   VAR_27->n_voltages = 1;
   if (VAR_25 && VAR_25->roof_floor)
    VAR_27->ops = &VAR_12;
   else
    VAR_27->ops = &VAR_14;
   VAR_27->enable_reg =
     FUNC_1(VAR_5,
          VAR_26->ctrl_addr);
   VAR_27->enable_mask = VAR_4;
  }

  if (VAR_19)
   VAR_21.init_data = VAR_19->reg_data[VAR_22];
  else
   VAR_21.init_data = ((void*)0);

  VAR_27->supply_name = VAR_26->sname;
  VAR_21.of_node = VAR_18->palmas_matches[VAR_22].of_node;

  VAR_24 = FUNC_4(VAR_17->dev, VAR_27, &VAR_21);
  if (FUNC_0(VAR_24)) {
   FUNC_3(VAR_17->dev,
    "failed to register %s regulator\n",
    VAR_20);
   return FUNC_2(VAR_24);
  }


  if (VAR_19) {
   VAR_25 = VAR_19->reg_init[VAR_22];
   if (VAR_25) {
    if (VAR_22 < VAR_11)
     VAR_23 = FUNC_6(VAR_17->palmas,
             VAR_22, VAR_25);
    else
     VAR_23 = FUNC_5(VAR_17->palmas,
         VAR_22, VAR_25);
    if (VAR_23)
     return VAR_23;
   }
  }
 }

 return 0;
}
