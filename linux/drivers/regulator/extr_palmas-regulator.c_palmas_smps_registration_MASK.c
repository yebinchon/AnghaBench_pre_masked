
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int id; unsigned int enable_mask; int min_uV; int uV_step; int n_linear_ranges; int supply_name; int owner; int type; int enable_val; void* enable_reg; int vsel_mask; void* vsel_reg; int n_voltages; int * ops; int linear_ranges; void* bypass_mask; void* bypass_val_on; void* bypass_reg; int name; int ramp_delay; } ;
struct regulator_config {int of_node; int * init_data; } ;
struct palmas_regs_info {unsigned int tstep_addr; unsigned int vsel_addr; unsigned int ctrl_addr; int sname; int name; } ;
struct palmas_reg_init {int roof_floor; } ;
struct palmas_pmic_platform_data {int ** reg_data; struct palmas_reg_init** reg_init; } ;
struct palmas_pmic_driver_data {int smps_start; int smps_end; TYPE_1__* palmas_matches; struct palmas_regs_info* palmas_regs_info; } ;
struct palmas_pmic {int* range; unsigned int* current_reg_mode; int dev; int palmas; int * ramp_delay; struct regulator_desc* desc; int smps457; int smps123; } ;
struct TYPE_2__ {int of_node; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 void* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int ) ;







 int VAR_0 ;

 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct regulator_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 void* VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,char*,...) ;
 struct regulator_dev* FUNC_5 (int ,struct regulator_desc*,struct regulator_config*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int ,int,struct palmas_reg_init*) ;
 int * VAR_20 ;
 int FUNC_7 (int ,unsigned int,unsigned int*) ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int FUNC_8(struct palmas_pmic *VAR_23,
        struct palmas_pmic_driver_data *VAR_24,
        struct palmas_pmic_platform_data *VAR_25,
        const char *VAR_26,
        struct regulator_config VAR_27)
{
 int VAR_28, VAR_29;
 unsigned int VAR_30, VAR_31;
 struct regulator_dev *VAR_32;
 struct palmas_reg_init *VAR_33;
 struct palmas_regs_info *VAR_34;
 struct regulator_desc *VAR_35;

 for (VAR_28 = VAR_24->smps_start; VAR_28 <= VAR_24->smps_end; VAR_28++) {
  bool VAR_36 = 0;





  switch (VAR_28) {
  case 133:
  case 131:
   if (VAR_23->smps123)
    continue;
   if (VAR_28 == 133)
    VAR_36 = 1;
   break;
  case 132:
   if (!VAR_23->smps123)
    continue;
   VAR_36 = 1;
   break;
  case 130:
  case 128:
   if (VAR_23->smps457)
    continue;
   if (VAR_28 == 130)
    VAR_36 = 1;
   break;
  case 129:
   if (!VAR_23->smps457)
    continue;
   VAR_36 = 1;
   break;
  case 135:
  case 134:
   if (!FUNC_2(VAR_23->palmas, VAR_10))
    continue;
  }
  VAR_34 = &VAR_24->palmas_regs_info[VAR_28];
  VAR_35 = &VAR_23->desc[VAR_28];

  if ((VAR_28 == VAR_0) || (VAR_28 == VAR_1))
   VAR_36 = 1;

  if (VAR_36) {
   VAR_30 = VAR_34->tstep_addr;
   VAR_29 = FUNC_7(VAR_23->palmas, VAR_30, &VAR_31);
   if (VAR_29 < 0) {
    FUNC_4(VAR_23->dev,
     "reading TSTEP reg failed: %d\n", VAR_29);
    return VAR_29;
   }
   VAR_35->ramp_delay = VAR_20[VAR_31 & 0x3];
   VAR_23->ramp_delay[VAR_28] = VAR_35->ramp_delay;
  }


  if (VAR_25 && VAR_25->reg_init[VAR_28]) {
   VAR_33 = VAR_25->reg_init[VAR_28];
   VAR_29 = FUNC_6(VAR_23->palmas, VAR_28, VAR_33);
   if (VAR_29)
    return VAR_29;
  } else {
   VAR_33 = ((void*)0);
  }


  VAR_35->name = VAR_34->name;
  VAR_35->id = VAR_28;

  switch (VAR_28) {
  case 135:
  case 134:
   VAR_35->n_voltages = VAR_3;
   VAR_35->ops = &VAR_19;
   VAR_35->vsel_reg = FUNC_1(VAR_7,
           VAR_2);
   VAR_35->vsel_mask = VAR_14;
   VAR_35->enable_reg = FUNC_1(VAR_7,
           VAR_2);
   if (VAR_28 == 135)
    VAR_35->enable_mask = VAR_13;
   else
    VAR_35->enable_mask = VAR_11;
   VAR_35->bypass_reg = FUNC_1(VAR_7,
           VAR_2);
   VAR_35->bypass_val_on = VAR_12;
   VAR_35->bypass_mask = VAR_12;
   VAR_35->min_uV = 3750000;
   VAR_35->uV_step = 1250000;
   break;
  default:






   VAR_30 = VAR_34->vsel_addr;
   VAR_35->n_linear_ranges = 3;

   VAR_29 = FUNC_7(VAR_23->palmas, VAR_30, &VAR_31);
   if (VAR_29)
    return VAR_29;
   if (VAR_31 & VAR_5)
    VAR_23->range[VAR_28] = 1;
   if (VAR_23->range[VAR_28])
    VAR_35->linear_ranges = VAR_21;
   else
    VAR_35->linear_ranges = VAR_22;

   if (VAR_33 && VAR_33->roof_floor)
    VAR_35->ops = &VAR_17;
   else
    VAR_35->ops = &VAR_18;
   VAR_35->n_voltages = VAR_8;
   VAR_35->vsel_reg = FUNC_1(VAR_7,
           VAR_34->vsel_addr);
   VAR_35->vsel_mask = VAR_6;


   VAR_30 = VAR_34->ctrl_addr;
   VAR_29 = FUNC_7(VAR_23->palmas, VAR_30, &VAR_31);
   if (VAR_29)
    return VAR_29;
   VAR_23->current_reg_mode[VAR_28] = VAR_31 &
     VAR_4;

   VAR_35->enable_reg = FUNC_1(VAR_7,
             VAR_34->ctrl_addr);
   VAR_35->enable_mask = VAR_4;

   VAR_35->enable_val = VAR_15;
  }

  VAR_35->type = VAR_9;
  VAR_35->owner = VAR_16;

  if (VAR_25)
   VAR_27.init_data = VAR_25->reg_data[VAR_28];
  else
   VAR_27.init_data = ((void*)0);

  VAR_35->supply_name = VAR_34->sname;
  VAR_27.of_node = VAR_24->palmas_matches[VAR_28].of_node;

  VAR_32 = FUNC_5(VAR_23->dev, VAR_35, &VAR_27);
  if (FUNC_0(VAR_32)) {
   FUNC_4(VAR_23->dev,
    "failed to register %s regulator\n",
    VAR_26);
   return FUNC_3(VAR_32);
  }
 }

 return 0;
}
