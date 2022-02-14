
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct owl_pinctrl_soc_data {int npins; int pins; } ;
struct TYPE_4__ {int free; int request; int set; int get; int direction_output; int direction_input; } ;
struct owl_pinctrl {int num_irq; int* irq; int clk; int pctrldev; int * dev; struct owl_pinctrl_soc_data* soc; TYPE_1__ chip; int lock; int base; } ;
struct TYPE_5__ {int npins; int pins; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,struct resource*) ;
 int* FUNC_8 (int *,int,int,int ) ;
 struct owl_pinctrl* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,TYPE_2__*,struct owl_pinctrl*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct owl_pinctrl*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_12 (struct platform_device*,int) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*) ;
 int FUNC_15 (struct platform_device*,struct owl_pinctrl*) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct platform_device *VAR_10,
    struct owl_pinctrl_soc_data *VAR_11)
{
 struct resource *VAR_12;
 struct owl_pinctrl *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_9(&VAR_10->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_13(VAR_10, VAR_2, 0);
 VAR_13->base = FUNC_7(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);


 VAR_13->clk = FUNC_6(&VAR_10->dev, ((void*)0));
 if (FUNC_0(VAR_13->clk)) {
  FUNC_4(&VAR_10->dev, "no clock defined\n");
  return FUNC_1(VAR_13->clk);
 }

 VAR_14 = FUNC_3(VAR_13->clk);
 if (VAR_14) {
  FUNC_4(&VAR_10->dev, "clk enable failed\n");
  return VAR_14;
 }

 FUNC_16(&VAR_13->lock);

 VAR_9.name = FUNC_5(&VAR_10->dev);
 VAR_9.pins = VAR_11->pins;
 VAR_9.npins = VAR_11->npins;

 VAR_13->chip.direction_input = VAR_3;
 VAR_13->chip.direction_output = VAR_4;
 VAR_13->chip.get = VAR_6;
 VAR_13->chip.set = VAR_8;
 VAR_13->chip.request = VAR_7;
 VAR_13->chip.free = VAR_5;

 VAR_13->soc = VAR_11;
 VAR_13->dev = &VAR_10->dev;

 VAR_13->pctrldev = FUNC_10(&VAR_10->dev,
     &VAR_9, VAR_13);
 if (FUNC_0(VAR_13->pctrldev)) {
  FUNC_4(&VAR_10->dev, "could not register Actions OWL pinmux driver\n");
  VAR_14 = FUNC_1(VAR_13->pctrldev);
  goto err_exit;
 }

 VAR_14 = FUNC_14(VAR_10);
 if (VAR_14 < 0)
  goto err_exit;

 VAR_13->num_irq = VAR_14;

 VAR_13->irq = FUNC_8(&VAR_10->dev, VAR_13->num_irq,
     sizeof(*VAR_13->irq), VAR_1);
 if (!VAR_13->irq) {
  VAR_14 = -VAR_0;
  goto err_exit;
 }

 for (VAR_15 = 0; VAR_15 < VAR_13->num_irq ; VAR_15++) {
  VAR_14 = FUNC_12(VAR_10, VAR_15);
  if (VAR_14 < 0)
   goto err_exit;
  VAR_13->irq[VAR_15] = VAR_14;
 }

 VAR_14 = FUNC_11(VAR_13);
 if (VAR_14)
  goto err_exit;

 FUNC_15(VAR_10, VAR_13);

 return 0;

err_exit:
 FUNC_2(VAR_13->clk);

 return VAR_14;
}
