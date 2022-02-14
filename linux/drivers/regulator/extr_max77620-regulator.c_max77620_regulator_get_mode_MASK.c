
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max77620_regulator_info {scalar_t__ type; int cfg_addr; } ;
struct max77620_regulator {int dev; int rmap; struct max77620_regulator_info** rinfo; } ;






 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct max77620_regulator*,int) ;
 struct max77620_regulator* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_5(struct regulator_dev *VAR_5)
{
 struct max77620_regulator *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = FUNC_3(VAR_5);
 struct max77620_regulator_info *VAR_8 = VAR_6->rinfo[VAR_7];
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11, VAR_12;
 unsigned int VAR_13;

 VAR_10 = FUNC_1(VAR_6, VAR_7);
 if (VAR_10 < 0)
  return 0;

 VAR_11 = VAR_10;

 if (VAR_8->type == VAR_0) {
  VAR_10 = FUNC_4(VAR_6->rmap, VAR_8->cfg_addr, &VAR_13);
  if (VAR_10 < 0) {
   FUNC_0(VAR_6->dev, "Reg 0x%02x read failed: %d\n",
    VAR_8->cfg_addr, VAR_10);
   return VAR_10;
  }
  VAR_9 = !!(VAR_13 & VAR_1);
 }

 switch (VAR_11) {
 case 128:
 case 131:
  if (VAR_9)
   VAR_12 = VAR_2;
  else
   VAR_12 = VAR_4;
  break;
 case 129:
 case 130:
  VAR_12 = VAR_3;
  break;
 default:
  return 0;
 }

 return VAR_12;
}
