
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct palmas_reg_init {int roof_floor; int vsel; int mode_sleep; void* warm_reset; } ;
struct palmas_pmic_platform_data {void* ldo6_vibrator; void* enable_ldo8_tracking; struct palmas_reg_init** reg_init; scalar_t__* reg_data; } ;
struct palmas_pmic_driver_data {int max_reg; struct of_regulator_match* palmas_matches; } ;
struct of_regulator_match {int name; scalar_t__ init_data; struct device_node* of_node; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 struct palmas_reg_init* FUNC_4 (struct device*,int,int ) ;
 struct device_node* FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*) ;
 void* FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (struct device*,struct device_node*,struct of_regulator_match*,int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_8,
         struct device_node *VAR_9,
         struct palmas_pmic_platform_data *VAR_10,
         struct palmas_pmic_driver_data *VAR_11)
{
 struct device_node *VAR_12;
 u32 VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_5(VAR_9, "regulators");
 if (!VAR_12) {
  FUNC_2(VAR_8, "regulator node not found\n");
  return 0;
 }

 VAR_15 = FUNC_9(VAR_8, VAR_12, VAR_11->palmas_matches,
     VAR_11->max_reg);
 FUNC_6(VAR_12);
 if (VAR_15 < 0) {
  FUNC_1(VAR_8, "Error parsing regulator init data: %d\n", VAR_15);
  return 0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11->max_reg; VAR_14++) {
  struct of_regulator_match *VAR_16;
  struct palmas_reg_init *VAR_17;
  struct device_node *VAR_18;

  VAR_16 = &VAR_11->palmas_matches[VAR_14];
  VAR_18 = VAR_16->of_node;

  if (!VAR_16->init_data || !VAR_18)
   continue;

  VAR_17 = FUNC_4(VAR_8, sizeof(*VAR_17), VAR_2);
  if (!VAR_17)
   return -VAR_1;

  VAR_10->reg_data[VAR_14] = VAR_16->init_data;
  VAR_10->reg_init[VAR_14] = VAR_17;

  VAR_17->warm_reset = FUNC_7(VAR_18, "ti,warm-reset");
  VAR_15 = FUNC_8(VAR_18, "ti,roof-floor", &VAR_13);

  if (VAR_15 != -VAR_0) {
   int VAR_19;


   VAR_19 = VAR_5;
   if (!VAR_15) {
    switch (VAR_13) {
    case 1:
     VAR_19 = VAR_3;
     break;
    case 2:
     VAR_19 = VAR_4;
     break;
    case 3:
     VAR_19 = VAR_5;
     break;
    default:
     FUNC_0(1);
     FUNC_3(VAR_8,
       "%s: Invalid roof-floor option: %u\n",
       VAR_16->name, VAR_13);
     break;
    }
   }
   VAR_17->roof_floor = VAR_19;
  }

  VAR_15 = FUNC_8(VAR_18, "ti,mode-sleep", &VAR_13);
  if (!VAR_15)
   VAR_17->mode_sleep = VAR_13;

  VAR_15 = FUNC_7(VAR_18, "ti,smps-range");
  if (VAR_15)
   VAR_17->vsel = VAR_7;

  if (VAR_14 == VAR_6)
   VAR_10->enable_ldo8_tracking = FUNC_7(
      VAR_18, "ti,enable-ldo8-tracking");
 }

 VAR_10->ldo6_vibrator = FUNC_7(VAR_9, "ti,ldo6-vibrator");

 return 0;
}
