
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct fixed_voltage_data {scalar_t__ clk_enable_counter; } ;


 struct fixed_voltage_data* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0)
{
 struct fixed_voltage_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->clk_enable_counter > 0;
}
