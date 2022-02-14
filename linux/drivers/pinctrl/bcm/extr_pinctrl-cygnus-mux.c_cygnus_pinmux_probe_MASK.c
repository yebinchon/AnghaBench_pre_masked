
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct pinctrl_pin_desc {int * drv_data; int name; int number; } ;
struct cygnus_pinctrl {void* pctl; void* num_functions; TYPE_2__* functions; void* num_groups; TYPE_2__* groups; void* base1; void* base0; int lock; int * dev; } ;
struct TYPE_8__ {int gpio_mux; int name; int pin; } ;
struct TYPE_7__ {unsigned int npins; struct pinctrl_pin_desc* pins; } ;


 void* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct cygnus_pinctrl*) ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,struct resource*) ;
 struct pinctrl_pin_desc* FUNC_6 (int *,unsigned int,int,int ) ;
 struct cygnus_pinctrl* FUNC_7 (int *,int,int ) ;
 void* FUNC_8 (int *,TYPE_1__*,struct cygnus_pinctrl*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int) ;
 int FUNC_10 (struct platform_device*,struct cygnus_pinctrl*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 struct cygnus_pinctrl *VAR_8;
 struct resource *VAR_9;
 int VAR_10, VAR_11;
 struct pinctrl_pin_desc *VAR_12;
 unsigned VAR_13 = FUNC_0(VAR_6);

 VAR_8 = FUNC_7(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->dev = &VAR_7->dev;
 FUNC_10(VAR_7, VAR_8);
 FUNC_11(&VAR_8->lock);

 VAR_9 = FUNC_9(VAR_7, VAR_2, 0);
 VAR_8->base0 = FUNC_5(&VAR_7->dev, VAR_9);
 if (FUNC_1(VAR_8->base0)) {
  FUNC_4(&VAR_7->dev, "unable to map I/O space\n");
  return FUNC_2(VAR_8->base0);
 }

 VAR_9 = FUNC_9(VAR_7, VAR_2, 1);
 VAR_8->base1 = FUNC_5(&VAR_7->dev, VAR_9);
 if (FUNC_1(VAR_8->base1)) {
  FUNC_4(&VAR_7->dev, "unable to map I/O space\n");
  return FUNC_2(VAR_8->base1);
 }

 VAR_11 = FUNC_3(VAR_8);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "unable to initialize IOMUX log\n");
  return VAR_11;
 }

 VAR_12 = FUNC_6(&VAR_7->dev, VAR_13, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
  VAR_12[VAR_10].number = VAR_6[VAR_10].pin;
  VAR_12[VAR_10].name = VAR_6[VAR_10].name;
  VAR_12[VAR_10].drv_data = &VAR_6[VAR_10].gpio_mux;
 }

 VAR_8->groups = VAR_4;
 VAR_8->num_groups = FUNC_0(VAR_4);
 VAR_8->functions = VAR_3;
 VAR_8->num_functions = FUNC_0(VAR_3);
 VAR_5.pins = VAR_12;
 VAR_5.npins = VAR_13;

 VAR_8->pctl = FUNC_8(&VAR_7->dev, &VAR_5,
   VAR_8);
 if (FUNC_1(VAR_8->pctl)) {
  FUNC_4(&VAR_7->dev, "unable to register Cygnus IOMUX pinctrl\n");
  return FUNC_2(VAR_8->pctl);
 }

 return 0;
}
