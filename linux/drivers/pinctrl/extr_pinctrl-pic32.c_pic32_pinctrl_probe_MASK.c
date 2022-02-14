
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct pic32_pinctrl {int pctldev; void* npins; void* pins; void* nbanks; void* gpio_banks; void* ngroups; void* groups; void* nfunctions; void* functions; int clk; int reg_base; int * dev; } ;
struct TYPE_3__ {void* num_custom_params; void* custom_params; void* npins; void* pins; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct pic32_pinctrl*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,struct resource*) ;
 struct pic32_pinctrl* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,TYPE_1__*,struct pic32_pinctrl*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_1__ VAR_7 ;
 void* VAR_8 ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct pic32_pinctrl *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_8(&VAR_9->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->dev = &VAR_9->dev;
 FUNC_5(&VAR_9->dev, VAR_10);

 VAR_11 = FUNC_10(VAR_9, VAR_2, 0);
 VAR_10->reg_base = FUNC_7(&VAR_9->dev, VAR_11);
 if (FUNC_1(VAR_10->reg_base))
  return FUNC_2(VAR_10->reg_base);

 VAR_10->clk = FUNC_6(&VAR_9->dev, ((void*)0));
 if (FUNC_1(VAR_10->clk)) {
  VAR_12 = FUNC_2(VAR_10->clk);
  FUNC_4(&VAR_9->dev, "clk get failed\n");
  return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_10->clk);
 if (VAR_12) {
  FUNC_4(&VAR_9->dev, "clk enable failed\n");
  return VAR_12;
 }

 VAR_10->pins = VAR_8;
 VAR_10->npins = FUNC_0(VAR_8);
 VAR_10->functions = VAR_3;
 VAR_10->nfunctions = FUNC_0(VAR_3);
 VAR_10->groups = VAR_5;
 VAR_10->ngroups = FUNC_0(VAR_5);
 VAR_10->gpio_banks = VAR_4;
 VAR_10->nbanks = FUNC_0(VAR_4);

 VAR_7.pins = VAR_10->pins;
 VAR_7.npins = VAR_10->npins;
 VAR_7.custom_params = VAR_6;
 VAR_7.num_custom_params = FUNC_0(VAR_6);

 VAR_10->pctldev = FUNC_9(&VAR_9->dev, &VAR_7,
           VAR_10);
 if (FUNC_1(VAR_10->pctldev)) {
  FUNC_4(&VAR_9->dev, "Failed to register pinctrl device\n");
  return FUNC_2(VAR_10->pctldev);
 }

 return 0;
}
