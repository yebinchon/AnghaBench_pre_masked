
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mvebu_pinctrl_soc_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mvebu_pinctrl_soc_info {void* ngpioranges; void* gpioranges; void* nmodes; void* modes; void* ncontrols; void* controls; scalar_t__ variant; } ;


 void* FUNC_0 (void*) ;
 struct mvebu_pinctrl_soc_info VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_4)
{
 struct mvebu_pinctrl_soc_info *VAR_5 = &VAR_0;

 VAR_5->variant = 0;
 VAR_5->controls = VAR_1;
 VAR_5->ncontrols = FUNC_0(VAR_1);
 VAR_5->modes = VAR_3;
 VAR_5->nmodes = FUNC_0(VAR_3);
 VAR_5->gpioranges = VAR_2;
 VAR_5->ngpioranges = FUNC_0(VAR_2);

 VAR_4->dev.platform_data = VAR_5;

 return FUNC_1(VAR_4);
}
