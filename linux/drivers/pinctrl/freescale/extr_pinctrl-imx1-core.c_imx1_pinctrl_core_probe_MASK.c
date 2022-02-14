
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pinctrl_desc {scalar_t__ npins; scalar_t__ pins; int name; } ;
struct imx1_pinctrl_soc_info {TYPE_1__* dev; scalar_t__ npins; scalar_t__ pins; } ;
struct imx1_pinctrl {int pctl; TYPE_1__* dev; struct imx1_pinctrl_soc_info* info; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 struct imx1_pinctrl* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,struct pinctrl_desc*,struct imx1_pinctrl*) ;
 struct pinctrl_desc VAR_5 ;
 int FUNC_8 (struct platform_device*,struct imx1_pinctrl*,struct imx1_pinctrl_soc_info*) ;
 int FUNC_9 (int ,int *,int *,TYPE_1__*) ;
 int FUNC_10 (int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct imx1_pinctrl*) ;
 int FUNC_13 (struct resource*) ;

int FUNC_14(struct platform_device *VAR_6,
        struct imx1_pinctrl_soc_info *VAR_7)
{
 struct imx1_pinctrl *VAR_8;
 struct resource *VAR_9;
 struct pinctrl_desc *VAR_10;
 int VAR_11;

 if (!VAR_7 || !VAR_7->pins || !VAR_7->npins) {
  FUNC_2(&VAR_6->dev, "wrong pinctrl info\n");
  return -VAR_0;
 }
 VAR_7->dev = &VAR_6->dev;


 VAR_8 = FUNC_6(&VAR_6->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_11(VAR_6, VAR_4, 0);
 if (!VAR_9)
  return -VAR_1;

 VAR_8->base = FUNC_5(&VAR_6->dev, VAR_9->start,
   FUNC_13(VAR_9));
 if (!VAR_8->base)
  return -VAR_2;

 VAR_10 = &VAR_5;
 VAR_10->name = FUNC_4(&VAR_6->dev);
 VAR_10->pins = VAR_7->pins;
 VAR_10->npins = VAR_7->npins;

 VAR_11 = FUNC_8(VAR_6, VAR_8, VAR_7);
 if (VAR_11) {
  FUNC_2(&VAR_6->dev, "fail to probe dt properties\n");
  return VAR_11;
 }

 VAR_8->info = VAR_7;
 VAR_8->dev = VAR_7->dev;
 FUNC_12(VAR_6, VAR_8);
 VAR_8->pctl = FUNC_7(&VAR_6->dev, VAR_10, VAR_8);
 if (FUNC_0(VAR_8->pctl)) {
  FUNC_2(&VAR_6->dev, "could not register IMX pinctrl driver\n");
  return FUNC_1(VAR_8->pctl);
 }

 VAR_11 = FUNC_9(VAR_6->dev.of_node, ((void*)0), ((void*)0), &VAR_6->dev);
 if (VAR_11) {
  FUNC_10(VAR_8->pctl);
  FUNC_2(&VAR_6->dev, "Failed to populate subdevices\n");
  return VAR_11;
 }

 FUNC_3(&VAR_6->dev, "initialized IMX pinctrl driver\n");

 return 0;
}
