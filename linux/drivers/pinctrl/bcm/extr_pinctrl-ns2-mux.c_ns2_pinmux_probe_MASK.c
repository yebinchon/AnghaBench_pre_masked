
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct pinctrl_pin_desc {TYPE_2__* drv_data; int name; int number; } ;
struct ns2_pinctrl {void* pctl; void* num_functions; TYPE_2__* functions; void* num_groups; TYPE_2__* groups; void* pinconf_base; int base1; void* base0; int lock; int * dev; } ;
struct TYPE_8__ {int name; int pin; } ;
struct TYPE_7__ {unsigned int npins; struct pinctrl_pin_desc* pins; } ;


 void* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 void* FUNC_5 (int *,struct resource*) ;
 struct pinctrl_pin_desc* FUNC_6 (int *,unsigned int,int,int ) ;
 struct ns2_pinctrl* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct ns2_pinctrl*) ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 void* FUNC_9 (TYPE_1__*,int *,struct ns2_pinctrl*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int) ;
 int FUNC_11 (struct platform_device*,struct ns2_pinctrl*) ;
 int FUNC_12 (struct resource*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct ns2_pinctrl *VAR_9;
 struct resource *VAR_10;
 int VAR_11, VAR_12;
 struct pinctrl_pin_desc *VAR_13;
 unsigned int VAR_14 = FUNC_0(VAR_7);

 VAR_9 = FUNC_7(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = &VAR_8->dev;
 FUNC_11(VAR_8, VAR_9);
 FUNC_13(&VAR_9->lock);

 VAR_10 = FUNC_10(VAR_8, VAR_3, 0);
 VAR_9->base0 = FUNC_5(&VAR_8->dev, VAR_10);
 if (FUNC_1(VAR_9->base0))
  return FUNC_2(VAR_9->base0);

 VAR_10 = FUNC_10(VAR_8, VAR_3, 1);
 if (!VAR_10)
  return -VAR_0;
 VAR_9->base1 = FUNC_4(&VAR_8->dev, VAR_10->start,
     FUNC_12(VAR_10));
 if (!VAR_9->base1) {
  FUNC_3(&VAR_8->dev, "unable to map I/O space\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_10(VAR_8, VAR_3, 2);
 VAR_9->pinconf_base = FUNC_5(&VAR_8->dev, VAR_10);
 if (FUNC_1(VAR_9->pinconf_base))
  return FUNC_2(VAR_9->pinconf_base);

 VAR_12 = FUNC_8(VAR_9);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "unable to initialize IOMUX log\n");
  return VAR_12;
 }

 VAR_13 = FUNC_6(&VAR_8->dev, VAR_14, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
  VAR_13[VAR_11].number = VAR_7[VAR_11].pin;
  VAR_13[VAR_11].name = VAR_7[VAR_11].name;
  VAR_13[VAR_11].drv_data = &VAR_7[VAR_11];
 }

 VAR_9->groups = VAR_5;
 VAR_9->num_groups = FUNC_0(VAR_5);
 VAR_9->functions = VAR_4;
 VAR_9->num_functions = FUNC_0(VAR_4);
 VAR_6.pins = VAR_13;
 VAR_6.npins = VAR_14;

 VAR_9->pctl = FUNC_9(&VAR_6, &VAR_8->dev,
   VAR_9);
 if (FUNC_1(VAR_9->pctl)) {
  FUNC_3(&VAR_8->dev, "unable to register IOMUX pinctrl\n");
  return FUNC_2(VAR_9->pctl);
 }

 return 0;
}
