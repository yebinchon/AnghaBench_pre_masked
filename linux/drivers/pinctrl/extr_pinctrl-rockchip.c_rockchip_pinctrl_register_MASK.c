
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pinctrl_desc {char* name; int npins; struct pinctrl_pin_desc* pins; int * confops; int * pmxops; int * pctlops; int owner; } ;
struct rockchip_pinctrl {int pctl_dev; TYPE_1__* ctrl; struct pinctrl_desc pctl; } ;
struct TYPE_6__ {int id; TYPE_2__* gc; int npins; int base; int pin_base; int name; } ;
struct TYPE_5__ {int ngpio; int base; } ;
struct rockchip_pin_bank {int nr_pins; TYPE_3__ grange; TYPE_2__ gpio_chip; int pin_base; int name; } ;
struct platform_device {int dev; } ;
struct pinctrl_pin_desc {int number; int name; } ;
struct TYPE_4__ {int nr_banks; struct rockchip_pin_bank* pin_banks; int nr_pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 struct pinctrl_pin_desc* FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *,struct pinctrl_desc*,struct rockchip_pinctrl*) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct platform_device*,struct rockchip_pinctrl*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6,
     struct rockchip_pinctrl *VAR_7)
{
 struct pinctrl_desc *VAR_8 = &VAR_7->pctl;
 struct pinctrl_pin_desc *VAR_9, *VAR_10;
 struct rockchip_pin_bank *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;

 VAR_8->name = "rockchip-pinctrl";
 VAR_8->owner = VAR_2;
 VAR_8->pctlops = &VAR_3;
 VAR_8->pmxops = &VAR_5;
 VAR_8->confops = &VAR_4;

 VAR_9 = FUNC_3(&VAR_6->dev,
          VAR_7->ctrl->nr_pins, sizeof(*VAR_9),
          VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_8->pins = VAR_9;
 VAR_8->npins = VAR_7->ctrl->nr_pins;

 VAR_10 = VAR_9;
 for (VAR_13 = 0 , VAR_15 = 0; VAR_13 < VAR_7->ctrl->nr_banks; VAR_13++) {
  VAR_11 = &VAR_7->ctrl->pin_banks[VAR_13];
  for (VAR_12 = 0; VAR_12 < VAR_11->nr_pins; VAR_12++, VAR_15++) {
   VAR_10->number = VAR_15;
   VAR_10->name = FUNC_5(VAR_1, "%s-%d",
      VAR_11->name, VAR_12);
   VAR_10++;
  }
 }

 VAR_14 = FUNC_7(VAR_6, VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_7->pctl_dev = FUNC_4(&VAR_6->dev, VAR_8, VAR_7);
 if (FUNC_0(VAR_7->pctl_dev)) {
  FUNC_2(&VAR_6->dev, "could not register pinctrl driver\n");
  return FUNC_1(VAR_7->pctl_dev);
 }

 for (VAR_13 = 0; VAR_13 < VAR_7->ctrl->nr_banks; ++VAR_13) {
  VAR_11 = &VAR_7->ctrl->pin_banks[VAR_13];
  VAR_11->grange.name = VAR_11->name;
  VAR_11->grange.id = VAR_13;
  VAR_11->grange.pin_base = VAR_11->pin_base;
  VAR_11->grange.base = VAR_11->gpio_chip.base;
  VAR_11->grange.npins = VAR_11->gpio_chip.ngpio;
  VAR_11->grange.gc = &VAR_11->gpio_chip;
  FUNC_6(VAR_7->pctl_dev, &VAR_11->grange);
 }

 return 0;
}
