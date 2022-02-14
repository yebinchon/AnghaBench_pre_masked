
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regulator_desc {size_t id; } ;
struct regulator_config {struct max77620_regulator* driver_data; } ;
struct max77620_regulator_pdata {int active_fps_src; int active_fps_pu_slot; int active_fps_pd_slot; int suspend_fps_src; int suspend_fps_pu_slot; int suspend_fps_pd_slot; int power_ok; int ramp_rate_setting; } ;
struct max77620_regulator {struct max77620_regulator_pdata* reg_pdata; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct max77620_regulator*,size_t) ;
 int FUNC_1 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1,
    const struct regulator_desc *VAR_2,
    struct regulator_config *VAR_3)
{
 struct max77620_regulator *VAR_4 = VAR_3->driver_data;
 struct max77620_regulator_pdata *VAR_5 = &VAR_4->reg_pdata[VAR_2->id];
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, "maxim,active-fps-source", &VAR_6);
 VAR_5->active_fps_src = (!VAR_7) ? VAR_6 : VAR_0;

 VAR_7 = FUNC_1(VAR_1, "maxim,active-fps-power-up-slot", &VAR_6);
 VAR_5->active_fps_pu_slot = (!VAR_7) ? VAR_6 : -1;

 VAR_7 = FUNC_1(
   VAR_1, "maxim,active-fps-power-down-slot", &VAR_6);
 VAR_5->active_fps_pd_slot = (!VAR_7) ? VAR_6 : -1;

 VAR_7 = FUNC_1(VAR_1, "maxim,suspend-fps-source", &VAR_6);
 VAR_5->suspend_fps_src = (!VAR_7) ? VAR_6 : -1;

 VAR_7 = FUNC_1(
   VAR_1, "maxim,suspend-fps-power-up-slot", &VAR_6);
 VAR_5->suspend_fps_pu_slot = (!VAR_7) ? VAR_6 : -1;

 VAR_7 = FUNC_1(
   VAR_1, "maxim,suspend-fps-power-down-slot", &VAR_6);
 VAR_5->suspend_fps_pd_slot = (!VAR_7) ? VAR_6 : -1;

 VAR_7 = FUNC_1(VAR_1, "maxim,power-ok-control", &VAR_6);
 if (!VAR_7)
  VAR_5->power_ok = VAR_6;
 else
  VAR_5->power_ok = -1;

 VAR_7 = FUNC_1(VAR_1, "maxim,ramp-rate-setting", &VAR_6);
 VAR_5->ramp_rate_setting = (!VAR_7) ? VAR_6 : 0;

 return FUNC_0(VAR_4, VAR_2->id);
}
