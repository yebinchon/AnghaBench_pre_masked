
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct meson_pinctrl_data {int num_pins; int pins; int pmx_ops; } ;
struct TYPE_2__ {char* name; int npins; int pins; int * confops; int pmxops; int * pctlops; int owner; } ;
struct meson_pinctrl {int pcdev; struct device* dev; TYPE_1__ desc; struct meson_pinctrl_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*) ;
 struct meson_pinctrl* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_1__*,struct meson_pinctrl*) ;
 int FUNC_5 (struct meson_pinctrl*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct meson_pinctrl*,int ) ;
 scalar_t__ FUNC_7 (struct device*) ;

int FUNC_8(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct meson_pinctrl *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6, sizeof(struct meson_pinctrl), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_6;
 VAR_7->data = (struct meson_pinctrl_data *) FUNC_7(VAR_6);

 VAR_8 = FUNC_6(VAR_7, VAR_6->of_node);
 if (VAR_8)
  return VAR_8;

 VAR_7->desc.name = "pinctrl-meson";
 VAR_7->desc.owner = VAR_2;
 VAR_7->desc.pctlops = &VAR_3;
 VAR_7->desc.pmxops = VAR_7->data->pmx_ops;
 VAR_7->desc.confops = &VAR_4;
 VAR_7->desc.pins = VAR_7->data->pins;
 VAR_7->desc.npins = VAR_7->data->num_pins;

 VAR_7->pcdev = FUNC_4(VAR_7->dev, &VAR_7->desc, VAR_7);
 if (FUNC_0(VAR_7->pcdev)) {
  FUNC_2(VAR_7->dev, "can't register pinctrl device");
  return FUNC_1(VAR_7->pcdev);
 }

 return FUNC_5(VAR_7);
}
