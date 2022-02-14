
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct zx_pinctrl_soc_info {int npins; int pins; } ;
struct zx_pinctrl {int pctldev; struct zx_pinctrl_soc_info* info; TYPE_1__* dev; int aux_base; int base; int lock; } ;
struct resource {int dummy; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pinctrl_desc {int * confops; int * pmxops; int * pctlops; int npins; int pins; int owner; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct resource*) ;
 void* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,struct pinctrl_desc*,struct zx_pinctrl*) ;
 int FUNC_8 (struct device_node*,int ) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (int ,char*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct zx_pinctrl*) ;
 int FUNC_13 (int *) ;
 int VAR_5 ;
 int FUNC_14 (struct platform_device*) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_15(struct platform_device *VAR_8,
      struct zx_pinctrl_soc_info *VAR_9)
{
 struct pinctrl_desc *VAR_10;
 struct zx_pinctrl *VAR_11;
 struct device_node *VAR_12;
 struct resource *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_6(&VAR_8->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_13(&VAR_11->lock);

 VAR_13 = FUNC_11(VAR_8, VAR_3, 0);
 VAR_11->base = FUNC_5(&VAR_8->dev, VAR_13);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 VAR_12 = FUNC_10(VAR_8->dev.of_node, "zte,auxiliary-controller", 0);
 if (!VAR_12) {
  FUNC_2(&VAR_8->dev, "failed to find auxiliary controller\n");
  return -VAR_0;
 }

 VAR_11->aux_base = FUNC_8(VAR_12, 0);
 FUNC_9(VAR_12);
 if (!VAR_11->aux_base)
  return -VAR_1;

 VAR_11->dev = &VAR_8->dev;
 VAR_11->info = VAR_9;

 VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->name = FUNC_4(&VAR_8->dev);
 VAR_10->owner = VAR_4;
 VAR_10->pins = VAR_9->pins;
 VAR_10->npins = VAR_9->npins;
 VAR_10->pctlops = &VAR_6;
 VAR_10->pmxops = &VAR_7;
 VAR_10->confops = &VAR_5;

 VAR_11->pctldev = FUNC_7(&VAR_8->dev, VAR_10, VAR_11);
 if (FUNC_0(VAR_11->pctldev)) {
  VAR_14 = FUNC_1(VAR_11->pctldev);
  FUNC_2(&VAR_8->dev, "failed to register pinctrl: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_12(VAR_8, VAR_11);

 VAR_14 = FUNC_14(VAR_8);
 if (VAR_14) {
  FUNC_2(&VAR_8->dev, "failed to build state: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_3(&VAR_8->dev, "initialized pinctrl driver\n");
 return 0;
}
