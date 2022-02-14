
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_8__* parent; int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_12__ {int of_node; TYPE_4__* parent; } ;
struct as3722_pctrl_info {TYPE_1__ gpio_chip; int pctl; void* num_pin_groups; void* pin_groups; void* num_functions; void* functions; void* num_pins; void* pins; int as3722; TYPE_4__* dev; } ;
struct TYPE_15__ {int of_node; } ;
struct TYPE_14__ {void* npins; void* pins; int name; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_3 ;
 void* VAR_4 ;
 TYPE_5__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 (TYPE_4__*,char*,...) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_4__*) ;
 struct as3722_pctrl_info* FUNC_6 (TYPE_4__*,int,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,struct as3722_pctrl_info*) ;
 int FUNC_8 (TYPE_1__*,struct as3722_pctrl_info*) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct platform_device*,struct as3722_pctrl_info*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct as3722_pctrl_info *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = &VAR_8->dev;
 VAR_9->dev->of_node = VAR_8->dev.parent->of_node;
 VAR_9->as3722 = FUNC_4(VAR_8->dev.parent);
 FUNC_11(VAR_8, VAR_9);

 VAR_9->pins = VAR_7;
 VAR_9->num_pins = FUNC_0(VAR_7);
 VAR_9->functions = VAR_4;
 VAR_9->num_functions = FUNC_0(VAR_4);
 VAR_9->pin_groups = VAR_6;
 VAR_9->num_pin_groups = FUNC_0(VAR_6);
 VAR_5.name = FUNC_5(&VAR_8->dev);
 VAR_5.pins = VAR_7;
 VAR_5.npins = FUNC_0(VAR_7);
 VAR_9->pctl = FUNC_7(&VAR_8->dev, &VAR_5,
          VAR_9);
 if (FUNC_1(VAR_9->pctl)) {
  FUNC_3(&VAR_8->dev, "Couldn't register pinctrl driver\n");
  return FUNC_2(VAR_9->pctl);
 }

 VAR_9->gpio_chip = VAR_3;
 VAR_9->gpio_chip.parent = &VAR_8->dev;
 VAR_9->gpio_chip.of_node = VAR_8->dev.parent->of_node;
 VAR_10 = FUNC_8(&VAR_9->gpio_chip, VAR_9);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_8->dev, "Couldn't register gpiochip, %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_9(&VAR_9->gpio_chip, FUNC_5(&VAR_8->dev),
    0, 0, VAR_0);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_8->dev, "Couldn't add pin range, %d\n", VAR_10);
  goto fail_range_add;
 }

 return 0;

fail_range_add:
 FUNC_10(&VAR_9->gpio_chip);
 return VAR_10;
}
