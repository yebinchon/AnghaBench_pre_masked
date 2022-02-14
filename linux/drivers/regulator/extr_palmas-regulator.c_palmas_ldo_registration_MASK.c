
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int id; int n_voltages; int min_uV; int uV_step; int linear_min_sel; int enable_time; int supply_name; int enable_mask; void* enable_reg; int * ops; void* bypass_mask; void* bypass_val_on; void* bypass_reg; int vsel_mask; void* vsel_reg; int owner; int type; int name; } ;
struct regulator_config {int of_node; int * init_data; } ;
struct palmas_regs_info {int sname; int ctrl_addr; int vsel_addr; int name; } ;
struct palmas_reg_init {scalar_t__ roof_floor; } ;
struct palmas_pmic_platform_data {struct palmas_reg_init** reg_init; int ** reg_data; scalar_t__ ldo6_vibrator; scalar_t__ enable_ldo8_tracking; } ;
struct palmas_pmic_driver_data {int ldo_begin; int max_reg; int ldo_end; TYPE_1__* palmas_matches; int has_regen3; struct palmas_regs_info* palmas_regs_info; } ;
struct palmas_pmic {int palmas; int dev; struct regulator_desc* desc; } ;
struct TYPE_2__ {int of_node; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct regulator_dev*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,char*,char const*) ;
 struct regulator_dev* FUNC_4 (int ,struct regulator_desc*,struct regulator_config*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,struct palmas_reg_init*) ;
 int FUNC_7 (int ,int,struct palmas_reg_init*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_8(struct palmas_pmic *VAR_19,
       struct palmas_pmic_driver_data *VAR_20,
       struct palmas_pmic_platform_data *VAR_21,
       const char *VAR_22,
       struct regulator_config VAR_23)
{
 int VAR_24, VAR_25;
 struct regulator_dev *VAR_26;
 struct palmas_reg_init *VAR_27;
 struct palmas_regs_info *VAR_28;
 struct regulator_desc *VAR_29;

 for (VAR_24 = VAR_20->ldo_begin; VAR_24 < VAR_20->max_reg; VAR_24++) {
  if (VAR_21 && VAR_21->reg_init[VAR_24])
   VAR_27 = VAR_21->reg_init[VAR_24];
  else
   VAR_27 = ((void*)0);

  VAR_28 = &VAR_20->palmas_regs_info[VAR_24];





  VAR_29 = &VAR_19->desc[VAR_24];
  VAR_29->name = VAR_28->name;
  VAR_29->id = VAR_24;
  VAR_29->type = VAR_12;
  VAR_29->owner = VAR_13;

  if (VAR_24 < VAR_9) {
   VAR_29->n_voltages = VAR_4;
   if (VAR_27 && VAR_27->roof_floor)
    VAR_29->ops = &VAR_15;
   else
    VAR_29->ops = &VAR_17;
   VAR_29->min_uV = 900000;
   VAR_29->uV_step = 50000;
   VAR_29->linear_min_sel = 1;
   VAR_29->enable_time = 500;
   VAR_29->vsel_reg = FUNC_1(VAR_3,
           VAR_28->vsel_addr);
   VAR_29->vsel_mask = VAR_1;
   VAR_29->enable_reg = FUNC_1(VAR_3,
             VAR_28->ctrl_addr);
   VAR_29->enable_mask = VAR_0;


   if (VAR_21 && (VAR_24 == VAR_7) &&
       VAR_21->enable_ldo8_tracking) {
    FUNC_5(VAR_19->palmas);
    VAR_29->min_uV = 450000;
    VAR_29->uV_step = 25000;
   }


   if (VAR_21 && VAR_21->ldo6_vibrator &&
       (VAR_24 == VAR_6))
    VAR_29->enable_time = 2000;

   if (VAR_24 == VAR_8) {
    VAR_29->ops = &VAR_18;
    VAR_29->bypass_reg = VAR_29->enable_reg;
    VAR_29->bypass_val_on =
      VAR_2;
    VAR_29->bypass_mask =
      VAR_2;
   }
  } else {
   if (!VAR_20->has_regen3 && VAR_24 == VAR_10)
    continue;

   VAR_29->n_voltages = 1;
   if (VAR_27 && VAR_27->roof_floor)
    VAR_29->ops = &VAR_14;
   else
    VAR_29->ops = &VAR_16;
   VAR_29->enable_reg =
     FUNC_1(VAR_11,
          VAR_28->ctrl_addr);
   VAR_29->enable_mask = VAR_5;
  }

  if (VAR_21)
   VAR_23.init_data = VAR_21->reg_data[VAR_24];
  else
   VAR_23.init_data = ((void*)0);

  VAR_29->supply_name = VAR_28->sname;
  VAR_23.of_node = VAR_20->palmas_matches[VAR_24].of_node;

  VAR_26 = FUNC_4(VAR_19->dev, VAR_29, &VAR_23);
  if (FUNC_0(VAR_26)) {
   FUNC_3(VAR_19->dev,
    "failed to register %s regulator\n",
    VAR_22);
   return FUNC_2(VAR_26);
  }


  if (VAR_21) {
   VAR_27 = VAR_21->reg_init[VAR_24];
   if (VAR_27) {
    if (VAR_24 <= VAR_20->ldo_end)
     VAR_25 = FUNC_7(VAR_19->palmas, VAR_24,
             VAR_27);
    else
     VAR_25 = FUNC_6(VAR_19->palmas,
         VAR_24, VAR_27);
    if (VAR_25)
     return VAR_25;
   }
  }
 }

 return 0;
}
