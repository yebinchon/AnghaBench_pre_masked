
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max77620_regulator_info {int power_mode_mask; int power_mode_shift; int type; int cfg_addr; int volt_addr; } ;
struct max77620_regulator {int* current_power_mode; int dev; int rmap; struct max77620_regulator_info** rinfo; } ;



 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct max77620_regulator *VAR_0,
          int VAR_1, int VAR_2)
{
 struct max77620_regulator_info *VAR_3 = VAR_0->rinfo[VAR_2];
 u8 VAR_4 = VAR_3->power_mode_mask;
 u8 VAR_5 = VAR_3->power_mode_shift;
 u8 VAR_6;
 int VAR_7;

 switch (VAR_3->type) {
 case 128:
  VAR_6 = VAR_3->cfg_addr;
  break;
 default:
  VAR_6 = VAR_3->volt_addr;
  break;
 }

 VAR_7 = FUNC_1(VAR_0->rmap, VAR_6, VAR_4, VAR_1 << VAR_5);
 if (VAR_7 < 0) {
  FUNC_0(VAR_0->dev, "Regulator %d mode set failed: %d\n",
   VAR_2, VAR_7);
  return VAR_7;
 }
 VAR_0->current_power_mode[VAR_2] = VAR_1;

 return VAR_7;
}
