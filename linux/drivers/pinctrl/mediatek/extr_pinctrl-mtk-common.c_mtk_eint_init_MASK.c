
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct mtk_pinctrl {TYPE_2__* eint; TYPE_1__* devdata; int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int * gpio_xlate; struct mtk_pinctrl* pctl; int * hw; int regs; TYPE_4__* dev; int irq; int base; } ;
struct TYPE_5__ {int eint_hw; int eint_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,struct resource*) ;
 TYPE_2__* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct device_node*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_6 (struct device_node*,char*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct mtk_pinctrl *VAR_6, struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct resource *VAR_9;

 if (!FUNC_6(VAR_8, "interrupt-controller"))
  return -VAR_1;

 VAR_6->eint = FUNC_3(VAR_6->dev, sizeof(*VAR_6->eint), VAR_3);
 if (!VAR_6->eint)
  return -VAR_2;

 VAR_9 = FUNC_7(VAR_7, VAR_4, 0);
 VAR_6->eint->base = FUNC_2(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_6->eint->base))
  return FUNC_1(VAR_6->eint->base);

 VAR_6->eint->irq = FUNC_4(VAR_8, 0);
 if (!VAR_6->eint->irq)
  return -VAR_0;

 VAR_6->eint->dev = &VAR_7->dev;




 VAR_6->eint->regs = VAR_6->devdata->eint_regs;
 VAR_6->eint->hw = &VAR_6->devdata->eint_hw;
 VAR_6->eint->pctl = VAR_6;
 VAR_6->eint->gpio_xlate = &VAR_5;

 return FUNC_5(VAR_6->eint);
}
