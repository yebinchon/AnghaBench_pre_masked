
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_power_data {scalar_t__ use_poweroff; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static bool FUNC_1(const struct twl4030_power_data *VAR_0,
     struct device_node *VAR_1)
{
 if (VAR_0 && VAR_0->use_poweroff)
  return 1;

 if (FUNC_0(VAR_1, "ti,system-power-controller"))
  return 1;

 if (FUNC_0(VAR_1, "ti,use_poweroff"))
  return 1;

 return 0;
}
