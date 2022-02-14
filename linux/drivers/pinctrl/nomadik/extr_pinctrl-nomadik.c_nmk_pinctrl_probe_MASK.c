
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct nmk_pinctrl {struct nmk_gpio_chip* pctl; TYPE_1__* dev; TYPE_2__* soc; int prcm_base; } ;
struct nmk_gpio_chip {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {int npins; int pins; } ;
struct TYPE_12__ {int npins; int pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nmk_gpio_chip*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (struct nmk_gpio_chip*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct nmk_pinctrl* FUNC_4 (TYPE_1__*,int,int ) ;
 struct nmk_gpio_chip* FUNC_5 (TYPE_1__*,TYPE_3__*,struct nmk_pinctrl*) ;
 struct nmk_gpio_chip* FUNC_6 (struct device_node*,struct platform_device*) ;
 int FUNC_7 (TYPE_2__**) ;
 int FUNC_8 (TYPE_2__**) ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (TYPE_2__**) ;
 int FUNC_10 (struct device_node*,int ) ;
 struct of_device_id* FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (struct device_node*) ;
 struct device_node* FUNC_13 (struct device_node*,char*,int) ;
 int FUNC_14 (struct platform_device*,struct nmk_pinctrl*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 const struct of_device_id *VAR_11;
 struct device_node *VAR_12 = VAR_10->dev.of_node;
 struct device_node *VAR_13;
 struct nmk_pinctrl *VAR_14;
 unsigned int VAR_15 = 0;
 int VAR_16;

 VAR_14 = FUNC_4(&VAR_10->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_11 = FUNC_11(VAR_9, &VAR_10->dev);
 if (!VAR_11)
  return -VAR_1;
 VAR_15 = (unsigned int) VAR_11->data;


 if (VAR_15 == VAR_7)
  FUNC_9(&VAR_14->soc);
 if (VAR_15 == VAR_5)
  FUNC_7(&VAR_14->soc);
 if (VAR_15 == VAR_6)
  FUNC_8(&VAR_14->soc);
 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  struct device_node *VAR_17;
  struct nmk_gpio_chip *VAR_18;

  VAR_17 = FUNC_13(VAR_12, "nomadik-gpio-chips", VAR_16);
  if (VAR_17) {
   FUNC_3(&VAR_10->dev,
     "populate NMK GPIO %d \"%pOFn\"\n",
     VAR_16, VAR_17);
   VAR_18 = FUNC_6(VAR_17, VAR_10);
   if (FUNC_0(VAR_18))
    FUNC_2(&VAR_10->dev,
     "could not populate nmk chip struct "
     "- continue anyway\n");
   FUNC_12(VAR_17);
  }
 }

 VAR_13 = FUNC_13(VAR_12, "prcm", 0);
 if (VAR_13)
  VAR_14->prcm_base = FUNC_10(VAR_13, 0);
 if (!VAR_14->prcm_base) {
  if (VAR_15 == VAR_7) {
   FUNC_3(&VAR_10->dev,
     "No PRCM base, "
     "assuming no ALT-Cx control is available\n");
  } else {
   FUNC_2(&VAR_10->dev, "missing PRCM base address\n");
   return -VAR_0;
  }
 }

 VAR_8.pins = VAR_14->soc->pins;
 VAR_8.npins = VAR_14->soc->npins;
 VAR_14->dev = &VAR_10->dev;

 VAR_14->pctl = FUNC_5(&VAR_10->dev, &VAR_8, VAR_14);
 if (FUNC_0(VAR_14->pctl)) {
  FUNC_2(&VAR_10->dev, "could not register Nomadik pinctrl driver\n");
  return FUNC_1(VAR_14->pctl);
 }

 FUNC_14(VAR_10, VAR_14);
 FUNC_3(&VAR_10->dev, "initialized Nomadik pin control driver\n");

 return 0;
}
