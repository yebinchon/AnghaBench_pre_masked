
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct mtk_pinctrl {TYPE_2__* eint; TYPE_1__* soc; int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {int * gpio_xlate; struct mtk_pinctrl* pctl; scalar_t__ hw; TYPE_4__* dev; int irq; int base; } ;
struct TYPE_6__ {scalar_t__ eint_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,struct resource*) ;
 TYPE_2__* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct device_node*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_8 (struct device_node*,char*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,char*) ;

int FUNC_10(struct mtk_pinctrl *VAR_7, struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct resource *VAR_10;

 if (!FUNC_0(VAR_0))
  return 0;

 if (!FUNC_8(VAR_9, "interrupt-controller"))
  return -VAR_2;

 VAR_7->eint = FUNC_5(VAR_7->dev, sizeof(*VAR_7->eint), VAR_4);
 if (!VAR_7->eint)
  return -VAR_3;

 VAR_10 = FUNC_9(VAR_8, VAR_5, "eint");
 if (!VAR_10) {
  FUNC_3(&VAR_8->dev, "Unable to get eint resource\n");
  return -VAR_2;
 }

 VAR_7->eint->base = FUNC_4(&VAR_8->dev, VAR_10);
 if (FUNC_1(VAR_7->eint->base))
  return FUNC_2(VAR_7->eint->base);

 VAR_7->eint->irq = FUNC_6(VAR_9, 0);
 if (!VAR_7->eint->irq)
  return -VAR_1;

 if (!VAR_7->soc->eint_hw)
  return -VAR_2;

 VAR_7->eint->dev = &VAR_8->dev;
 VAR_7->eint->hw = VAR_7->soc->eint_hw;
 VAR_7->eint->pctl = VAR_7;
 VAR_7->eint->gpio_xlate = &VAR_6;

 return FUNC_7(VAR_7->eint);
}
