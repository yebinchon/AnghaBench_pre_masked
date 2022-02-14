
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int ngpio; int of_node; TYPE_6__* parent; } ;
struct wmt_pinctrl_data {int nbanks; TYPE_1__ gpio_chip; TYPE_6__* dev; int pctl_dev; int npins; int pins; int base; } ;
struct resource {int dummy; } ;
struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_13__ {int npins; int pins; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,struct resource*) ;
 int FUNC_6 (TYPE_6__*,TYPE_2__*,struct wmt_pinctrl_data*) ;
 int FUNC_7 (TYPE_1__*,struct wmt_pinctrl_data*) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ,int) ;
 int FUNC_9 (TYPE_1__*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct wmt_pinctrl_data*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_12(struct platform_device *VAR_3,
        struct wmt_pinctrl_data *VAR_4)
{
 int VAR_5;
 struct resource *VAR_6;

 VAR_6 = FUNC_10(VAR_3, VAR_0, 0);
 VAR_4->base = FUNC_5(&VAR_3->dev, VAR_6);
 if (FUNC_0(VAR_4->base))
  return FUNC_1(VAR_4->base);

 VAR_1.pins = VAR_4->pins;
 VAR_1.npins = VAR_4->npins;

 VAR_4->gpio_chip = VAR_2;
 VAR_4->gpio_chip.parent = &VAR_3->dev;
 VAR_4->gpio_chip.of_node = VAR_3->dev.of_node;
 VAR_4->gpio_chip.ngpio = VAR_4->nbanks * 32;

 FUNC_11(VAR_3, VAR_4);

 VAR_4->dev = &VAR_3->dev;

 VAR_4->pctl_dev = FUNC_6(&VAR_3->dev, &VAR_1, VAR_4);
 if (FUNC_0(VAR_4->pctl_dev)) {
  FUNC_2(&VAR_3->dev, "Failed to register pinctrl\n");
  return FUNC_1(VAR_4->pctl_dev);
 }

 VAR_5 = FUNC_7(&VAR_4->gpio_chip, VAR_4);
 if (VAR_5) {
  FUNC_2(&VAR_3->dev, "could not add GPIO chip\n");
  return VAR_5;
 }

 VAR_5 = FUNC_8(&VAR_4->gpio_chip, FUNC_4(VAR_4->dev),
         0, 0, VAR_4->nbanks * 32);
 if (VAR_5)
  goto fail_range;

 FUNC_3(&VAR_3->dev, "Pin controller initialized\n");

 return 0;

fail_range:
 FUNC_9(&VAR_4->gpio_chip);
 return VAR_5;
}
