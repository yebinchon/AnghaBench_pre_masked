
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sprd_pins_info {int dummy; } ;
struct sprd_pinctrl_soc_info {int npins; TYPE_1__* pins; } ;
struct sprd_pinctrl {int pctl; int * dev; struct sprd_pinctrl_soc_info* info; int base; } ;
struct platform_device {int dev; } ;
struct pinctrl_pin_desc {struct sprd_pinctrl_soc_info* drv_data; int name; int number; } ;
struct TYPE_5__ {int npins; int name; struct pinctrl_pin_desc* pins; } ;
struct TYPE_4__ {int name; int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 struct pinctrl_pin_desc* FUNC_4 (int *,int,int,int ) ;
 void* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (TYPE_2__*,int *,void*) ;
 int FUNC_8 (struct platform_device*,struct sprd_pinctrl*) ;
 int FUNC_9 (struct sprd_pinctrl*,struct sprd_pins_info*,int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_10 (struct sprd_pinctrl*) ;

int FUNC_11(struct platform_device *VAR_3,
       struct sprd_pins_info *VAR_4,
       int VAR_5)
{
 struct sprd_pinctrl *VAR_6;
 struct sprd_pinctrl_soc_info *VAR_7;
 struct pinctrl_pin_desc *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = FUNC_5(&VAR_3->dev, sizeof(struct sprd_pinctrl),
     VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->base = FUNC_6(VAR_3, 0);
 if (FUNC_0(VAR_6->base))
  return FUNC_1(VAR_6->base);

 VAR_7 = FUNC_5(&VAR_3->dev,
        sizeof(struct sprd_pinctrl_soc_info),
        VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6->info = VAR_7;
 VAR_6->dev = &VAR_3->dev;
 FUNC_8(VAR_3, VAR_6);

 VAR_9 = FUNC_9(VAR_6, VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_2(&VAR_3->dev, "fail to add pins information\n");
  return VAR_9;
 }

 VAR_9 = FUNC_10(VAR_6);
 if (VAR_9) {
  FUNC_2(&VAR_3->dev, "fail to parse dt properties\n");
  return VAR_9;
 }

 VAR_8 = FUNC_4(&VAR_3->dev,
    VAR_7->npins,
    sizeof(struct pinctrl_pin_desc),
    VAR_1);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_7->npins; VAR_10++) {
  VAR_8[VAR_10].number = VAR_7->pins[VAR_10].number;
  VAR_8[VAR_10].name = VAR_7->pins[VAR_10].name;
  VAR_8[VAR_10].drv_data = VAR_7;
 }

 VAR_2.pins = VAR_8;
 VAR_2.name = FUNC_3(&VAR_3->dev);
 VAR_2.npins = VAR_7->npins;

 VAR_6->pctl = FUNC_7(&VAR_2,
        &VAR_3->dev, (void *)VAR_6);
 if (FUNC_0(VAR_6->pctl)) {
  FUNC_2(&VAR_3->dev, "could not register pinctrl driver\n");
  return FUNC_1(VAR_6->pctl);
 }

 return 0;
}
