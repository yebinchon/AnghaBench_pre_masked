
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int total_cap; int max_volt; int internal_resist; int min_volt; int table_len; int init_cap; int regmap; int dev; void* init_clbcnt; scalar_t__ base; int battery; scalar_t__ alarm_cap; int cap_table; } ;
struct power_supply_battery_ocv_table {int dummy; } ;
struct power_supply_battery_info {int charge_full_design_uah; int constant_charge_voltage_max_uv; int factory_internal_resistance_uohm; int voltage_min_design_uv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct power_supply_battery_ocv_table*,int,int ) ;
 struct power_supply_battery_ocv_table* FUNC_2 (struct power_supply_battery_info*,int,int*) ;
 int FUNC_3 (int ,struct power_supply_battery_info*) ;
 scalar_t__ FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,struct power_supply_battery_info*) ;
 int FUNC_6 (int ,scalar_t__,int,int) ;
 int FUNC_7 (struct sc27xx_fgu_data*) ;
 void* FUNC_8 (struct sc27xx_fgu_data*,int) ;
 int FUNC_9 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_10 (struct sc27xx_fgu_data*,void*) ;
 int FUNC_11 (struct sc27xx_fgu_data*,int) ;

__attribute__((used)) static int FUNC_12(struct sc27xx_fgu_data *VAR_15)
{
 struct power_supply_battery_info VAR_16 = { };
 struct power_supply_battery_ocv_table *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_18 = FUNC_3(VAR_15->battery, &VAR_16);
 if (VAR_18) {
  FUNC_0(VAR_15->dev, "failed to get battery information\n");
  return VAR_18;
 }

 VAR_15->total_cap = VAR_16.charge_full_design_uah / 1000;
 VAR_15->max_volt = VAR_16.constant_charge_voltage_max_uv / 1000;
 VAR_15->internal_resist = VAR_16.factory_internal_resistance_uohm / 1000;
 VAR_15->min_volt = VAR_16.voltage_min_design_uv;





 VAR_17 = FUNC_2(&VAR_16, 20, &VAR_15->table_len);
 if (!VAR_17)
  return -VAR_0;

 VAR_15->cap_table = FUNC_1(VAR_15->dev, VAR_17,
           VAR_15->table_len * sizeof(*VAR_17),
           VAR_2);
 if (!VAR_15->cap_table) {
  FUNC_5(VAR_15->battery, &VAR_16);
  return -VAR_1;
 }

 VAR_15->alarm_cap = FUNC_4(VAR_15->cap_table,
            VAR_15->table_len,
            VAR_15->min_volt);
 if (!VAR_15->alarm_cap)
  VAR_15->alarm_cap += 1;

 FUNC_5(VAR_15->battery, &VAR_16);

 VAR_18 = FUNC_7(VAR_15);
 if (VAR_18)
  return VAR_18;


 VAR_18 = FUNC_6(VAR_15->regmap, VAR_14,
     VAR_8, VAR_8);
 if (VAR_18) {
  FUNC_0(VAR_15->dev, "failed to enable fgu\n");
  return VAR_18;
 }


 VAR_18 = FUNC_6(VAR_15->regmap, VAR_3,
     VAR_13, VAR_13);
 if (VAR_18) {
  FUNC_0(VAR_15->dev, "failed to enable fgu RTC clock\n");
  goto disable_fgu;
 }

 VAR_18 = FUNC_6(VAR_15->regmap, VAR_15->base + VAR_9,
     VAR_10, VAR_10);
 if (VAR_18) {
  FUNC_0(VAR_15->dev, "failed to clear interrupt status\n");
  goto disable_clk;
 }






 VAR_20 = FUNC_11(VAR_15, VAR_15->min_volt / 1000);
 VAR_18 = FUNC_6(VAR_15->regmap, VAR_15->base + VAR_11,
     VAR_12, VAR_20);
 if (VAR_18) {
  FUNC_0(VAR_15->dev, "failed to set fgu low overload\n");
  goto disable_clk;
 }
 VAR_19 = FUNC_8(VAR_15, 1);

 VAR_18 = FUNC_6(VAR_15->regmap, VAR_15->base + VAR_5,
     VAR_6, VAR_19);
 if (VAR_18) {
  FUNC_0(VAR_15->dev, "failed to set low delta coulomb counter\n");
  goto disable_clk;
 }

 VAR_18 = FUNC_6(VAR_15->regmap, VAR_15->base + VAR_4,
     VAR_6,
     VAR_19 >> VAR_7);
 if (VAR_18) {
  FUNC_0(VAR_15->dev, "failed to set high delta coulomb counter\n");
  goto disable_clk;
 }






 VAR_18 = FUNC_9(VAR_15, &VAR_15->init_cap);
 if (VAR_18) {
  FUNC_0(VAR_15->dev, "failed to get boot capacity\n");
  goto disable_clk;
 }





 VAR_15->init_clbcnt = FUNC_8(VAR_15, VAR_15->init_cap);
 VAR_18 = FUNC_10(VAR_15, VAR_15->init_clbcnt);
 if (VAR_18) {
  FUNC_0(VAR_15->dev, "failed to initialize coulomb counter\n");
  goto disable_clk;
 }

 return 0;

disable_clk:
 FUNC_6(VAR_15->regmap, VAR_3, VAR_13, 0);
disable_fgu:
 FUNC_6(VAR_15->regmap, VAR_14, VAR_8, 0);

 return VAR_18;
}
