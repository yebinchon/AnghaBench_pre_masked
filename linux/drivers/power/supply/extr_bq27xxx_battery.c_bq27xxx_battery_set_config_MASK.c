
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_battery_info {int charge_full_design_uah; int energy_full_design_uwh; int voltage_min_design_uv; } ;
struct bq27xxx_dm_buf {scalar_t__ class; scalar_t__ block; scalar_t__ dirty; } ;
struct bq27xxx_device_info {int opts; } ;


 struct bq27xxx_dm_buf FUNC_0 (struct bq27xxx_device_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bq27xxx_device_info*,struct bq27xxx_dm_buf*) ;
 int FUNC_3 (struct bq27xxx_device_info*) ;
 scalar_t__ FUNC_4 (struct bq27xxx_device_info*) ;
 int FUNC_5 (struct bq27xxx_device_info*,struct bq27xxx_dm_buf*,int ,int) ;
 int FUNC_6 (struct bq27xxx_device_info*,struct bq27xxx_dm_buf*) ;
 int FUNC_7 (struct bq27xxx_device_info*,int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct bq27xxx_device_info *VAR_7,
           struct power_supply_battery_info *VAR_8)
{
 struct bq27xxx_dm_buf VAR_9 = FUNC_0(VAR_7, VAR_0);
 struct bq27xxx_dm_buf VAR_10 = FUNC_0(VAR_7, VAR_2);
 bool VAR_11;

 if (FUNC_4(VAR_7) < 0)
  return;

 if (VAR_8->charge_full_design_uah != -VAR_6 &&
     VAR_8->energy_full_design_uwh != -VAR_6) {
  FUNC_2(VAR_7, &VAR_9);

  FUNC_5(VAR_7, &VAR_9,
     VAR_0,
     VAR_8->charge_full_design_uah / 1000);
  FUNC_5(VAR_7, &VAR_9,
     VAR_1,
     VAR_8->energy_full_design_uwh / 1000);
 }

 if (VAR_8->voltage_min_design_uv != -VAR_6) {
  bool VAR_12 = VAR_9.class == VAR_10.class && VAR_9.block == VAR_10.block;
  if (!VAR_12)
   FUNC_2(VAR_7, &VAR_10);
  FUNC_5(VAR_7, VAR_12 ? &VAR_9 : &VAR_10,
     VAR_2,
     VAR_8->voltage_min_design_uv / 1000);
 }

 VAR_11 = VAR_9.dirty || VAR_10.dirty;

 FUNC_6(VAR_7, &VAR_9);
 FUNC_6(VAR_7, &VAR_10);

 FUNC_3(VAR_7);

 if (VAR_11 && !(VAR_7->opts & VAR_3)) {
  FUNC_7(VAR_7, VAR_4, VAR_5, 0);
  FUNC_1(300);
 }

}
