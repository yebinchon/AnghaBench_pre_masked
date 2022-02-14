
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct pinctrl_pin_desc {int number; int name; } ;
struct pinctrl_desc {char* name; int npins; struct pinctrl_pin_desc* pins; int * confops; int * pmxops; int * pctlops; int owner; } ;
struct armada_37xx_pmx_func {int dummy; } ;
struct armada_37xx_pinctrl {int pctl_dev; void* funcs; int ngroups; int groups; struct pinctrl_desc pctl; struct armada_37xx_pin_data* data; } ;
struct armada_37xx_pin_data {int nr_pins; int name; int ngroups; int groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct armada_37xx_pinctrl*) ;
 int FUNC_3 (struct armada_37xx_pinctrl*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,int,int,int ) ;
 int FUNC_6 (int *,struct pinctrl_desc*,struct armada_37xx_pinctrl*) ;
 int FUNC_7 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6,
     struct armada_37xx_pinctrl *VAR_7)
{
 const struct armada_37xx_pin_data *VAR_8 = VAR_7->data;
 struct pinctrl_desc *VAR_9 = &VAR_7->pctl;
 struct pinctrl_pin_desc *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 VAR_7->groups = VAR_8->groups;
 VAR_7->ngroups = VAR_8->ngroups;

 VAR_9->name = "armada_37xx-pinctrl";
 VAR_9->owner = VAR_2;
 VAR_9->pctlops = &VAR_3;
 VAR_9->pmxops = &VAR_5;
 VAR_9->confops = &VAR_4;

 VAR_10 = FUNC_5(&VAR_6->dev,
          VAR_8->nr_pins, sizeof(*VAR_10),
          VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9->pins = VAR_10;
 VAR_9->npins = VAR_8->nr_pins;

 VAR_11 = VAR_10;
 for (VAR_12 = 0; VAR_12 < VAR_8->nr_pins; VAR_12++) {
  VAR_11->number = VAR_12;
  VAR_11->name = FUNC_7(VAR_1, "%s-%d",
     VAR_8->name, VAR_12);
  VAR_11++;
 }





 VAR_7->funcs = FUNC_5(&VAR_6->dev,
       VAR_8->nr_pins,
       sizeof(struct armada_37xx_pmx_func),
       VAR_1);
 if (!VAR_7->funcs)
  return -VAR_0;


 VAR_13 = FUNC_3(VAR_7);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_7);
 if (VAR_13)
  return VAR_13;

 VAR_7->pctl_dev = FUNC_6(&VAR_6->dev, VAR_9, VAR_7);
 if (FUNC_0(VAR_7->pctl_dev)) {
  FUNC_4(&VAR_6->dev, "could not register pinctrl driver\n");
  return FUNC_1(VAR_7->pctl_dev);
 }

 return 0;
}
