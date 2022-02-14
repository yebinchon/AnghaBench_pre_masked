
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_desc {char* name; int npins; struct pinctrl_pin_desc* pins; int * confops; int * pmxops; int * pctlops; int owner; } ;
struct samsung_pinctrl_drv_data {int nr_pins; int pin_base; int nr_banks; int pctl_dev; struct samsung_pin_bank* pin_banks; struct pinctrl_desc pctl; } ;
struct TYPE_4__ {char* name; int id; int pin_base; int base; TYPE_1__* gc; int npins; } ;
struct TYPE_3__ {int ngpio; } ;
struct samsung_pin_bank {int nr_pins; char* name; int pin_base; TYPE_2__ grange; TYPE_1__ gpio_chip; } ;
struct platform_device {int dev; } ;
struct pinctrl_pin_desc {int number; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*) ;
 struct pinctrl_pin_desc* FUNC_4 (int *,int,int,int ) ;
 char* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,struct pinctrl_desc*,struct samsung_pinctrl_drv_data*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct platform_device*,struct samsung_pinctrl_drv_data*) ;
 int VAR_6 ;
 int FUNC_9 (char*,char*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7,
        struct samsung_pinctrl_drv_data *VAR_8)
{
 struct pinctrl_desc *VAR_9 = &VAR_8->pctl;
 struct pinctrl_pin_desc *VAR_10, *VAR_11;
 struct samsung_pin_bank *VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_9->name = "samsung-pinctrl";
 VAR_9->owner = VAR_3;
 VAR_9->pctlops = &VAR_4;
 VAR_9->pmxops = &VAR_6;
 VAR_9->confops = &VAR_5;

 VAR_10 = FUNC_4(&VAR_7->dev,
          VAR_8->nr_pins, sizeof(*VAR_10),
          VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_9->pins = VAR_10;
 VAR_9->npins = VAR_8->nr_pins;


 for (VAR_14 = 0, VAR_11 = VAR_10; VAR_14 < VAR_9->npins; VAR_14++, VAR_11++)
  VAR_11->number = VAR_14 + VAR_8->pin_base;





 VAR_13 = FUNC_5(&VAR_7->dev,
     FUNC_2(sizeof(char), VAR_2,
          VAR_8->nr_pins),
     VAR_1);
 if (!VAR_13)
  return -VAR_0;


 for (VAR_15 = 0; VAR_15 < VAR_8->nr_banks; VAR_15++) {
  VAR_12 = &VAR_8->pin_banks[VAR_15];
  for (VAR_14 = 0; VAR_14 < VAR_12->nr_pins; VAR_14++) {
   FUNC_9(VAR_13, "%s-%d", VAR_12->name, VAR_14);
   VAR_11 = VAR_10 + VAR_12->pin_base + VAR_14;
   VAR_11->name = VAR_13;
   VAR_13 += VAR_2;
  }
 }

 VAR_16 = FUNC_8(VAR_7, VAR_8);
 if (VAR_16)
  return VAR_16;

 VAR_8->pctl_dev = FUNC_6(&VAR_7->dev, VAR_9,
        VAR_8);
 if (FUNC_0(VAR_8->pctl_dev)) {
  FUNC_3(&VAR_7->dev, "could not register pinctrl driver\n");
  return FUNC_1(VAR_8->pctl_dev);
 }

 for (VAR_15 = 0; VAR_15 < VAR_8->nr_banks; ++VAR_15) {
  VAR_12 = &VAR_8->pin_banks[VAR_15];
  VAR_12->grange.name = VAR_12->name;
  VAR_12->grange.id = VAR_15;
  VAR_12->grange.pin_base = VAR_8->pin_base
      + VAR_12->pin_base;
  VAR_12->grange.base = VAR_12->grange.pin_base;
  VAR_12->grange.npins = VAR_12->gpio_chip.ngpio;
  VAR_12->grange.gc = &VAR_12->gpio_chip;
  FUNC_7(VAR_8->pctl_dev, &VAR_12->grange);
 }

 return 0;
}
