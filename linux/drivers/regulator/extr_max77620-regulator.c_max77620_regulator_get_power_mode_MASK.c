
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct max77620_regulator_info {unsigned int power_mode_mask; unsigned int power_mode_shift; int type; unsigned int cfg_addr; unsigned int volt_addr; } ;
struct max77620_regulator {int dev; int rmap; struct max77620_regulator_info** rinfo; } ;



 int FUNC_0 (int ,char*,int,unsigned int,int) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct max77620_regulator *VAR_0,
          int VAR_1)
{
 struct max77620_regulator_info *VAR_2 = VAR_0->rinfo[VAR_1];
 unsigned int VAR_3, VAR_4;
 u8 VAR_5 = VAR_2->power_mode_mask;
 u8 VAR_6 = VAR_2->power_mode_shift;
 int VAR_7;

 switch (VAR_2->type) {
 case 128:
  VAR_4 = VAR_2->cfg_addr;
  break;
 default:
  VAR_4 = VAR_2->volt_addr;
  break;
 }

 VAR_7 = FUNC_1(VAR_0->rmap, VAR_4, &VAR_3);
 if (VAR_7 < 0) {
  FUNC_0(VAR_0->dev, "Regulator %d: Reg 0x%02x read failed: %d\n",
   VAR_1, VAR_4, VAR_7);
  return VAR_7;
 }

 return (VAR_3 & VAR_5) >> VAR_6;
}
