
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_pinctrl_data {unsigned int nconfigs; struct aspeed_pin_config const* configs; } ;
struct aspeed_pin_config {int param; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 scalar_t__ FUNC_0 (unsigned int,struct aspeed_pin_config const*) ;

__attribute__((used)) static inline const struct aspeed_pin_config *FUNC_1(
  const struct aspeed_pinctrl_data *VAR_0,
  unsigned int VAR_1,
  enum pin_config_param VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nconfigs; VAR_3++) {
  if (VAR_2 == VAR_0->configs[VAR_3].param &&
    FUNC_0(VAR_1, &VAR_0->configs[VAR_3]))
   return &VAR_0->configs[VAR_3];
 }

 return ((void*)0);
}
