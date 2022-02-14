
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pinctrl_drv_data {struct samsung_pin_ctrl const* retention_ctrl; int irq; struct device* dev; } ;
struct samsung_pin_ctrl {int (* eint_wkup_init ) (struct samsung_pinctrl_drv_data*) ;int (* eint_gpio_init ) (struct samsung_pinctrl_drv_data*) ;TYPE_1__* retention_data; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct samsung_pin_ctrl const* (* init ) (struct samsung_pinctrl_drv_data*,TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct samsung_pin_ctrl const*) ;
 int FUNC_1 (struct samsung_pin_ctrl const*) ;
 int FUNC_2 (struct device*,char*) ;
 struct samsung_pinctrl_drv_data* FUNC_3 (struct device*,int,int ) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct platform_device*,struct samsung_pinctrl_drv_data*) ;
 int FUNC_6 (struct platform_device*,struct samsung_pinctrl_drv_data*) ;
 struct samsung_pin_ctrl* FUNC_7 (struct samsung_pinctrl_drv_data*,struct platform_device*) ;
 int FUNC_8 (struct platform_device*,struct samsung_pinctrl_drv_data*) ;
 int FUNC_9 (struct platform_device*,struct samsung_pinctrl_drv_data*) ;
 struct samsung_pin_ctrl const* FUNC_10 (struct samsung_pinctrl_drv_data*,TYPE_1__*) ;
 int FUNC_11 (struct samsung_pinctrl_drv_data*) ;
 int FUNC_12 (struct samsung_pinctrl_drv_data*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_3)
{
 struct samsung_pinctrl_drv_data *VAR_4;
 const struct samsung_pin_ctrl *VAR_5;
 struct device *VAR_6 = &VAR_3->dev;
 struct resource *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_3(VAR_6, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_7(VAR_4, VAR_3);
 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_3->dev, "driver data not available\n");
  return FUNC_1(VAR_5);
 }
 VAR_4->dev = VAR_6;

 VAR_7 = FUNC_4(VAR_3, VAR_2, 0);
 if (VAR_7)
  VAR_4->irq = VAR_7->start;

 if (VAR_5->retention_data) {
  VAR_4->retention_ctrl = VAR_5->retention_data->init(VAR_4,
         VAR_5->retention_data);
  if (FUNC_0(VAR_4->retention_ctrl))
   return FUNC_1(VAR_4->retention_ctrl);
 }

 VAR_8 = FUNC_8(VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_3, VAR_4);
 if (VAR_8) {
  FUNC_9(VAR_3, VAR_4);
  return VAR_8;
 }

 if (VAR_5->eint_gpio_init)
  VAR_5->eint_gpio_init(VAR_4);
 if (VAR_5->eint_wkup_init)
  VAR_5->eint_wkup_init(VAR_4);

 FUNC_5(VAR_3, VAR_4);

 return 0;
}
