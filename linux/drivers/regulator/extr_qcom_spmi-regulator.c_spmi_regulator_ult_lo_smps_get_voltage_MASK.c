
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_voltage_range {int range_sel; } ;
struct spmi_regulator {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,int ,struct spmi_voltage_range const*) ;
 struct spmi_voltage_range* FUNC_2 (struct spmi_regulator*) ;
 int FUNC_3 (struct spmi_regulator*,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3)
{
 struct spmi_regulator *VAR_4 = FUNC_0(VAR_3);
 const struct spmi_voltage_range *VAR_5;
 u8 VAR_6;

 FUNC_3(VAR_4, VAR_1, &VAR_6, 1);

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->range_sel == 1)
  VAR_6 &= ~VAR_2;

 return FUNC_1(VAR_4, VAR_6, VAR_5);
}
