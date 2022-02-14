
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mxs_pinctrl_soc_data {int npins; int pins; } ;
struct mxs_pinctrl_data {int base; int pctl; struct mxs_pinctrl_soc_data* soc; TYPE_2__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {int name; int npins; int pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 struct mxs_pinctrl_data* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (struct platform_device*,struct mxs_pinctrl_data*) ;
 int FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,struct mxs_pinctrl_data*) ;
 int FUNC_9 (struct platform_device*,struct mxs_pinctrl_data*) ;

int FUNC_10(struct platform_device *VAR_4,
        struct mxs_pinctrl_soc_data *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 struct mxs_pinctrl_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(&VAR_4->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = &VAR_4->dev;
 VAR_7->soc = VAR_5;

 VAR_7->base = FUNC_7(VAR_6, 0);
 if (!VAR_7->base)
  return -VAR_0;

 VAR_3.pins = VAR_7->soc->pins;
 VAR_3.npins = VAR_7->soc->npins;
 VAR_3.name = FUNC_3(&VAR_4->dev);

 FUNC_9(VAR_4, VAR_7);

 VAR_8 = FUNC_6(VAR_4, VAR_7);
 if (VAR_8) {
  FUNC_2(&VAR_4->dev, "dt probe failed: %d\n", VAR_8);
  goto err;
 }

 VAR_7->pctl = FUNC_8(&VAR_3, &VAR_4->dev, VAR_7);
 if (FUNC_0(VAR_7->pctl)) {
  FUNC_2(&VAR_4->dev, "Couldn't register MXS pinctrl driver\n");
  VAR_8 = FUNC_1(VAR_7->pctl);
  goto err;
 }

 return 0;

err:
 FUNC_5(VAR_7->base);
 return VAR_8;
}
