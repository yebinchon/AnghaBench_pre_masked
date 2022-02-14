
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct spear_pmx {int pctl; struct spear_pinctrl_machdata* machdata; TYPE_2__* dev; int vbase; } ;
struct spear_pinctrl_machdata {int npins; int pins; scalar_t__ modes_supported; } ;
struct resource {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {int npins; int pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,struct resource*) ;
 struct spear_pmx* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,struct spear_pmx*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct spear_pmx*) ;
 scalar_t__ FUNC_9 (struct spear_pmx*,int) ;
 TYPE_1__ VAR_5 ;

int FUNC_10(struct platform_device *VAR_6,
   struct spear_pinctrl_machdata *VAR_7)
{
 struct device_node *VAR_8 = VAR_6->dev.of_node;
 struct resource *VAR_9;
 struct spear_pmx *VAR_10;

 if (!VAR_7)
  return -VAR_1;

 VAR_10 = FUNC_4(&VAR_6->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_9 = FUNC_7(VAR_6, VAR_4, 0);
 VAR_10->vbase = FUNC_3(&VAR_6->dev, VAR_9);
 if (FUNC_0(VAR_10->vbase))
  return FUNC_1(VAR_10->vbase);

 VAR_10->dev = &VAR_6->dev;
 VAR_10->machdata = VAR_7;


 if (VAR_7->modes_supported) {
  int VAR_11 = 0;

  if (FUNC_6(VAR_8, "st,pinmux-mode", &VAR_11)) {
   FUNC_2(&VAR_6->dev, "OF: pinmux mode not passed\n");
   return -VAR_0;
  }

  if (FUNC_9(VAR_10, VAR_11)) {
   FUNC_2(&VAR_6->dev, "OF: Couldn't configure mode: %x\n",
     VAR_11);
   return -VAR_0;
  }
 }

 FUNC_8(VAR_6, VAR_10);

 VAR_5.pins = VAR_7->pins;
 VAR_5.npins = VAR_7->npins;

 VAR_10->pctl = FUNC_5(&VAR_6->dev, &VAR_5, VAR_10);
 if (FUNC_0(VAR_10->pctl)) {
  FUNC_2(&VAR_6->dev, "Couldn't register pinctrl driver\n");
  return FUNC_1(VAR_10->pctl);
 }

 return 0;
}
