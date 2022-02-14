
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; struct mvebu_pinctrl_soc_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int dummy; } ;
struct mvebu_pinctrl_soc_info {int nmodes; int modes; void* ngpioranges; TYPE_2__* gpioranges; void* ncontrols; TYPE_2__* controls; scalar_t__ variant; } ;
struct TYPE_6__ {int npins; } ;


 void* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 struct mvebu_pinctrl_soc_info VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct platform_device*,int ,int ) ;
 struct of_device_id* FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_6)
{
 struct mvebu_pinctrl_soc_info *VAR_7 = &VAR_4;
 const struct of_device_id *VAR_8 =
  FUNC_2(VAR_5, &VAR_6->dev);

 if (!VAR_8 || !VAR_6->dev.parent)
  return -VAR_0;

 VAR_7->variant = 0;
 VAR_7->controls = VAR_1;
 VAR_7->ncontrols = FUNC_0(VAR_1);
 VAR_7->gpioranges = VAR_2;
 VAR_7->ngpioranges = FUNC_0(VAR_2);
 VAR_7->modes = VAR_3;
 VAR_7->nmodes = VAR_1[0].npins;

 VAR_6->dev.platform_data = VAR_7;

 return FUNC_1(VAR_6, VAR_6->dev.parent, 0);
}
