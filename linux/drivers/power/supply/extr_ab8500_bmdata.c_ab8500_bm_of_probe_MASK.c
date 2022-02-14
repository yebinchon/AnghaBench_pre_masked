
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct batres_vs_temp {int dummy; } ;
struct abx500_bm_data {int no_maintenance; int chg_unknown_bat; int n_btypes; TYPE_1__* bat_type; int adc_therm; } ;
struct TYPE_2__ {int charge_full_design; int termination_vol; int recharge_cap; int normal_cur_lvl; int normal_vol_lvl; struct batres_vs_temp const* batres_tbl; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 char* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 struct batres_vs_temp* VAR_4 ;
 struct batres_vs_temp* VAR_5 ;
 struct batres_vs_temp* VAR_6 ;

int FUNC_7(struct device *VAR_7,
         struct device_node *VAR_8,
         struct abx500_bm_data *VAR_9)
{
 const struct batres_vs_temp *VAR_10;
 struct device_node *VAR_11;
 const char *VAR_12;
 int VAR_13;


 VAR_11 = FUNC_4(VAR_8, "battery", 0);
 if (!VAR_11) {
  FUNC_0(VAR_7, "battery node or reference missing\n");
  return -VAR_2;
 }

 VAR_12 = FUNC_2(VAR_11, "stericsson,battery-type", ((void*)0));
 if (!VAR_12) {
  FUNC_1(VAR_7, "missing property battery-name/type\n");
  FUNC_3(VAR_11);
  return -VAR_2;
 }

 if (FUNC_6(VAR_12, "LION", 4) == 0) {
  VAR_9->no_maintenance = 1;
  VAR_9->chg_unknown_bat = 1;
  VAR_9->bat_type[VAR_1].charge_full_design = 2600;
  VAR_9->bat_type[VAR_1].termination_vol = 4150;
  VAR_9->bat_type[VAR_1].recharge_cap = 95;
  VAR_9->bat_type[VAR_1].normal_cur_lvl = 520;
  VAR_9->bat_type[VAR_1].normal_vol_lvl = 4200;
 }

 if (FUNC_5(VAR_11, "thermistor-on-batctrl")) {
  if (FUNC_6(VAR_12, "LION", 4) == 0)
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_6;
 } else {
  VAR_9->n_btypes = 4;
  VAR_9->bat_type = VAR_3;
  VAR_9->adc_therm = VAR_0;
  VAR_10 = VAR_5;
 }


 for (VAR_13 = 0; VAR_13 < VAR_9->n_btypes; ++VAR_13)
  VAR_9->bat_type[VAR_13].batres_tbl = VAR_10;

 FUNC_3(VAR_11);

 return 0;
}
