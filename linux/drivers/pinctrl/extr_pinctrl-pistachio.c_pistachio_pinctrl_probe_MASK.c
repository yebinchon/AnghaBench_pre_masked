
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct pistachio_pinctrl {int pctldev; void* npins; void* pins; void* nbanks; void* gpio_banks; void* ngroups; void* groups; void* nfunctions; void* functions; int base; int * dev; } ;
struct TYPE_3__ {void* npins; void* pins; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct pistachio_pinctrl*) ;
 int FUNC_5 (int *,struct resource*) ;
 struct pistachio_pinctrl* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,TYPE_1__*,struct pistachio_pinctrl*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_8 (struct pistachio_pinctrl*) ;
 void* VAR_5 ;
 TYPE_1__ VAR_6 ;
 void* VAR_7 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct pistachio_pinctrl *VAR_9;
 struct resource *VAR_10;

 VAR_9 = FUNC_6(&VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->dev = &VAR_8->dev;
 FUNC_4(&VAR_8->dev, VAR_9);

 VAR_10 = FUNC_9(VAR_8, VAR_2, 0);
 VAR_9->base = FUNC_5(&VAR_8->dev, VAR_10);
 if (FUNC_1(VAR_9->base))
  return FUNC_2(VAR_9->base);

 VAR_9->pins = VAR_7;
 VAR_9->npins = FUNC_0(VAR_7);
 VAR_9->functions = VAR_3;
 VAR_9->nfunctions = FUNC_0(VAR_3);
 VAR_9->groups = VAR_5;
 VAR_9->ngroups = FUNC_0(VAR_5);
 VAR_9->gpio_banks = VAR_4;
 VAR_9->nbanks = FUNC_0(VAR_4);

 VAR_6.pins = VAR_9->pins;
 VAR_6.npins = VAR_9->npins;

 VAR_9->pctldev = FUNC_7(&VAR_8->dev, &VAR_6,
           VAR_9);
 if (FUNC_1(VAR_9->pctldev)) {
  FUNC_3(&VAR_8->dev, "Failed to register pinctrl device\n");
  return FUNC_2(VAR_9->pctldev);
 }

 return FUNC_8(VAR_9);
}
