
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct intel_pinctrl_soc_data {int dummy; } ;


 struct intel_pinctrl_soc_data* FUNC_0 (int *) ;
 int FUNC_1 (struct platform_device*,struct intel_pinctrl_soc_data const*) ;

int FUNC_2(struct platform_device *VAR_0)
{
 const struct intel_pinctrl_soc_data *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->dev);
 return FUNC_1(VAR_0, VAR_1);
}
