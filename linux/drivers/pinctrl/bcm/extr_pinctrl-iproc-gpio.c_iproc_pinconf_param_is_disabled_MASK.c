
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_gpio {unsigned int nr_pinconf_disable; int* pinconf_disable; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;



__attribute__((used)) static bool FUNC_0(struct iproc_gpio *VAR_0,
         enum pin_config_param VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_0->nr_pinconf_disable)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_pinconf_disable; VAR_2++)
  if (VAR_0->pinconf_disable[VAR_2] == VAR_1)
   return 1;

 return 0;
}
