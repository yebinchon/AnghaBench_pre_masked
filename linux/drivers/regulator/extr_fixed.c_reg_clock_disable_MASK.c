
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct fixed_voltage_data {int clk_enable_counter; int enable_clock; } ;


 int FUNC_0 (int ) ;
 struct fixed_voltage_data* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 struct fixed_voltage_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->enable_clock);
 VAR_1->clk_enable_counter--;

 return 0;
}
