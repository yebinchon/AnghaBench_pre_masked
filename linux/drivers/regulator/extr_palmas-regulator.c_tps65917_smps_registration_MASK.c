
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int n_linear_ranges; int id; int ramp_delay; unsigned int enable_mask; int supply_name; int owner; int type; int enable_val; void* enable_reg; int vsel_mask; void* vsel_reg; int n_voltages; int * ops; int linear_ranges; int name; } ;
struct regulator_config {int of_node; int * init_data; } ;
struct palmas_regs_info {unsigned int vsel_addr; unsigned int ctrl_addr; int sname; int name; } ;
struct palmas_reg_init {scalar_t__ roof_floor; } ;
struct palmas_pmic_platform_data {int ** reg_data; struct palmas_reg_init** reg_init; } ;
struct palmas_pmic_driver_data {int smps_start; int smps_end; TYPE_1__* palmas_matches; struct palmas_regs_info* palmas_regs_info; } ;
struct palmas_pmic {int* range; unsigned int* current_reg_mode; int dev; int palmas; scalar_t__ smps12; struct regulator_desc* desc; } ;
struct TYPE_2__ {int of_node; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 void* FUNC_1 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct regulator_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_3 (int ,char*,char const*) ;
 struct regulator_dev* FUNC_4 (int ,struct regulator_desc*,struct regulator_config*) ;
 int FUNC_5 (int ,int,struct palmas_reg_init*) ;
 int FUNC_6 (int ,unsigned int,unsigned int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_7(struct palmas_pmic *VAR_14,
          struct palmas_pmic_driver_data *VAR_15,
          struct palmas_pmic_platform_data *VAR_16,
          const char *VAR_17,
          struct regulator_config VAR_18)
{
 int VAR_19, VAR_20;
 unsigned int VAR_21, VAR_22;
 struct regulator_dev *VAR_23;
 struct palmas_reg_init *VAR_24;
 struct palmas_regs_info *VAR_25;
 struct regulator_desc *VAR_26;

 for (VAR_19 = VAR_15->smps_start; VAR_19 <= VAR_15->smps_end; VAR_19++) {




  VAR_26 = &VAR_14->desc[VAR_19];
  VAR_26->n_linear_ranges = 3;
  if ((VAR_19 == VAR_8 || VAR_19 == VAR_7) &&
      VAR_14->smps12)
   continue;


  if (VAR_16 && VAR_16->reg_init[VAR_19]) {
   VAR_24 = VAR_16->reg_init[VAR_19];
   VAR_20 = FUNC_5(VAR_14->palmas, VAR_19, VAR_24);
   if (VAR_20)
    return VAR_20;
  } else {
   VAR_24 = ((void*)0);
  }
  VAR_25 = &VAR_15->palmas_regs_info[VAR_19];


  VAR_26->name = VAR_25->name;
  VAR_26->id = VAR_19;







  VAR_21 = VAR_25->vsel_addr;

  VAR_20 = FUNC_6(VAR_14->palmas, VAR_21, &VAR_22);
  if (VAR_20)
   return VAR_20;
  if (VAR_22 & VAR_9)
   VAR_14->range[VAR_19] = 1;

  if (VAR_14->range[VAR_19])
   VAR_26->linear_ranges = VAR_10;
  else
   VAR_26->linear_ranges = VAR_11;

  if (VAR_24 && VAR_24->roof_floor)
   VAR_26->ops = &VAR_12;
  else
   VAR_26->ops = &VAR_13;
  VAR_26->n_voltages = VAR_3;
  VAR_26->vsel_reg = FUNC_1(VAR_2,
          VAR_25->vsel_addr);
  VAR_26->vsel_mask = VAR_1;
  VAR_26->ramp_delay = 2500;


  VAR_21 = VAR_25->ctrl_addr;
  VAR_20 = FUNC_6(VAR_14->palmas, VAR_21, &VAR_22);
  if (VAR_20)
   return VAR_20;
  VAR_14->current_reg_mode[VAR_19] = VAR_22 &
    VAR_0;
  VAR_26->enable_reg = FUNC_1(VAR_2,
            VAR_25->ctrl_addr);
  VAR_26->enable_mask = VAR_0;

  VAR_26->enable_val = VAR_5;

  VAR_26->type = VAR_4;
  VAR_26->owner = VAR_6;

  if (VAR_16)
   VAR_18.init_data = VAR_16->reg_data[VAR_19];
  else
   VAR_18.init_data = ((void*)0);

  VAR_26->supply_name = VAR_25->sname;
  VAR_18.of_node = VAR_15->palmas_matches[VAR_19].of_node;

  VAR_23 = FUNC_4(VAR_14->dev, VAR_26, &VAR_18);
  if (FUNC_0(VAR_23)) {
   FUNC_3(VAR_14->dev,
    "failed to register %s regulator\n",
    VAR_17);
   return FUNC_2(VAR_23);
  }
 }

 return 0;
}
