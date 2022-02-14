
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct ab8500_regulator_info {int update_mask; int update_reg; int update_bank; TYPE_1__ desc; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int,int) ;
 int FUNC_3 (struct regulator_dev*) ;
 struct ab8500_regulator_info* FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1)
{
 int VAR_2;
 struct ab8500_regulator_info *VAR_3 = FUNC_4(VAR_1);
 u8 VAR_4;

 if (VAR_3 == ((void*)0)) {
  FUNC_1(FUNC_3(VAR_1), "regulator info null pointer\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_0(VAR_3->dev,
  VAR_3->update_bank, VAR_3->update_reg, &VAR_4);
 if (VAR_2 < 0) {
  FUNC_1(FUNC_3(VAR_1),
   "couldn't read 0x%x register\n", VAR_3->update_reg);
  return VAR_2;
 }

 FUNC_2(FUNC_3(VAR_1),
  "%s-is_enabled (bank, reg, mask, value): 0x%x, 0x%x, 0x%x,"
  " 0x%x\n",
  VAR_3->desc.name, VAR_3->update_bank, VAR_3->update_reg,
  VAR_3->update_mask, VAR_4);

 if (VAR_4 & VAR_3->update_mask)
  return 1;
 else
  return 0;
}
