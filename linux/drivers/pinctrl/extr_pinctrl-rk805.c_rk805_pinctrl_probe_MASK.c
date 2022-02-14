
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {void* ngpio; int of_node; TYPE_4__* parent; } ;
struct TYPE_15__ {void* npins; void* pins; } ;
struct rk805_pctrl_info {TYPE_2__ gpio_chip; int pctl; TYPE_1__ pinctrl_desc; TYPE_10__* rk808; void* pin_cfg; void* num_pin_groups; void* groups; void* num_functions; void* functions; void* num_pins; void* pins; TYPE_4__* dev; } ;
struct TYPE_17__ {TYPE_11__* parent; int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_14__ {int of_node; } ;
struct TYPE_13__ {int variant; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int FUNC_3 (TYPE_4__*,char*,...) ;
 TYPE_10__* FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,struct rk805_pctrl_info*) ;
 struct rk805_pctrl_info* FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_1__*,struct rk805_pctrl_info*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,void*) ;
 int FUNC_10 (struct platform_device*,struct rk805_pctrl_info*) ;
 void* VAR_3 ;
 TYPE_2__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_1__ VAR_7 ;
 void* VAR_8 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct rk805_pctrl_info *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_7(&VAR_9->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = &VAR_9->dev;
 VAR_10->dev->of_node = VAR_9->dev.parent->of_node;
 VAR_10->rk808 = FUNC_4(VAR_9->dev.parent);

 VAR_10->pinctrl_desc = VAR_7;
 VAR_10->gpio_chip = VAR_4;
 VAR_10->gpio_chip.parent = &VAR_9->dev;
 VAR_10->gpio_chip.of_node = VAR_9->dev.parent->of_node;

 FUNC_10(VAR_9, VAR_10);

 switch (VAR_10->rk808->variant) {
 case 128:
  VAR_10->pins = VAR_8;
  VAR_10->num_pins = FUNC_0(VAR_8);
  VAR_10->functions = VAR_5;
  VAR_10->num_functions = FUNC_0(VAR_5);
  VAR_10->groups = VAR_6;
  VAR_10->num_pin_groups = FUNC_0(VAR_6);
  VAR_10->pinctrl_desc.pins = VAR_8;
  VAR_10->pinctrl_desc.npins = FUNC_0(VAR_8);
  VAR_10->pin_cfg = VAR_3;
  VAR_10->gpio_chip.ngpio = FUNC_0(VAR_3);
  break;
 default:
  FUNC_3(&VAR_9->dev, "unsupported RK805 ID %lu\n",
   VAR_10->rk808->variant);
  return -VAR_0;
 }


 VAR_11 = FUNC_6(&VAR_9->dev, &VAR_10->gpio_chip, VAR_10);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_9->dev, "Couldn't add gpiochip\n");
  return VAR_11;
 }


 VAR_10->pctl = FUNC_8(&VAR_9->dev, &VAR_10->pinctrl_desc, VAR_10);
 if (FUNC_1(VAR_10->pctl)) {
  FUNC_3(&VAR_9->dev, "Couldn't add pinctrl\n");
  return FUNC_2(VAR_10->pctl);
 }


 VAR_11 = FUNC_9(&VAR_10->gpio_chip, FUNC_5(&VAR_9->dev),
         0, 0, VAR_10->gpio_chip.ngpio);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_9->dev, "Couldn't add gpiochip pin range\n");
  return VAR_11;
 }

 return 0;
}
