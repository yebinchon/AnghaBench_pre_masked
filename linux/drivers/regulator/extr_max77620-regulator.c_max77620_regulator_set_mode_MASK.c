
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct max77620_regulator_pdata {unsigned int current_mode; } ;
struct max77620_regulator_info {scalar_t__ type; int cfg_addr; } ;
struct max77620_regulator {int* enable_power_mode; int dev; int rmap; struct max77620_regulator_pdata* reg_pdata; struct max77620_regulator_info** rinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct max77620_regulator*,int,int) ;
 struct max77620_regulator* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_5,
           unsigned int VAR_6)
{
 struct max77620_regulator *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = FUNC_3(VAR_5);
 struct max77620_regulator_info *VAR_9 = VAR_7->rinfo[VAR_8];
 struct max77620_regulator_pdata *VAR_10 = &VAR_7->reg_pdata[VAR_8];
 bool VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 u8 VAR_14;

 switch (VAR_6) {
 case 130:
  VAR_11 = 1;
  VAR_12 = VAR_2;
  break;

 case 128:
  VAR_12 = VAR_2;
  break;

 case 129:
  VAR_12 = VAR_1;
  break;

 default:
  FUNC_0(VAR_7->dev, "Regulator %d mode %d is invalid\n",
   VAR_8, VAR_6);
  return -VAR_0;
 }

 if (VAR_9->type != VAR_3)
  goto skip_fpwm;

 VAR_14 = (VAR_11) ? VAR_4 : 0;
 VAR_13 = FUNC_4(VAR_7->rmap, VAR_9->cfg_addr,
     VAR_4, VAR_14);
 if (VAR_13 < 0) {
  FUNC_0(VAR_7->dev, "Reg 0x%02x update failed: %d\n",
   VAR_9->cfg_addr, VAR_13);
  return VAR_13;
 }
 VAR_10->current_mode = VAR_6;

skip_fpwm:
 VAR_13 = FUNC_1(VAR_7, VAR_12, VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_7->enable_power_mode[VAR_8] = VAR_12;

 return 0;
}
