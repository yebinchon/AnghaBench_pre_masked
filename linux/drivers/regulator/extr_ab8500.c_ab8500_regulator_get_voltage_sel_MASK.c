
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct ab8500_regulator_info {int voltage_mask; int voltage_reg; int voltage_bank; TYPE_1__ desc; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct regulator_dev*) ;
 struct ab8500_regulator_info* FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_1)
{
 int VAR_2, VAR_3;
 struct ab8500_regulator_info *VAR_4 = FUNC_5(VAR_1);
 u8 VAR_5;

 if (VAR_4 == ((void*)0)) {
  FUNC_1(FUNC_4(VAR_1), "regulator info null pointer\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_3(VAR_4->voltage_mask) - 1;

 VAR_2 = FUNC_0(VAR_4->dev,
   VAR_4->voltage_bank, VAR_4->voltage_reg, &VAR_5);
 if (VAR_2 < 0) {
  FUNC_1(FUNC_4(VAR_1),
   "couldn't read voltage reg for regulator\n");
  return VAR_2;
 }

 FUNC_2(FUNC_4(VAR_1),
  "%s-get_voltage (bank, reg, mask, shift, value): "
  "0x%x, 0x%x, 0x%x, 0x%x, 0x%x\n",
  VAR_4->desc.name, VAR_4->voltage_bank,
  VAR_4->voltage_reg, VAR_4->voltage_mask,
  VAR_3, VAR_5);

 return (VAR_5 & VAR_4->voltage_mask) >> VAR_3;
}
