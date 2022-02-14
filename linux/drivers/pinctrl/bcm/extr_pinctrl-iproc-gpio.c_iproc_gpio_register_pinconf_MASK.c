
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_pin_desc {int number; int name; } ;
struct pinctrl_desc {int npins; int * confops; struct pinctrl_pin_desc* pins; int * pctlops; int name; } ;
struct gpio_chip {int ngpio; } ;
struct iproc_gpio {int pctl; int dev; struct gpio_chip gc; struct pinctrl_desc pctldesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,int) ;
 struct pinctrl_pin_desc* FUNC_5 (int ,int,int,int ) ;
 int FUNC_6 (int ,struct pinctrl_desc*,struct iproc_gpio*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct iproc_gpio *VAR_4)
{
 struct pinctrl_desc *VAR_5 = &VAR_4->pctldesc;
 struct pinctrl_pin_desc *VAR_6;
 struct gpio_chip *VAR_7 = &VAR_4->gc;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_4->dev, VAR_7->ngpio, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_7->ngpio; VAR_8++) {
  VAR_6[VAR_8].number = VAR_8;
  VAR_6[VAR_8].name = FUNC_4(VAR_4->dev, VAR_1,
           "gpio-%d", VAR_8);
  if (!VAR_6[VAR_8].name)
   return -VAR_0;
 }

 VAR_5->name = FUNC_3(VAR_4->dev);
 VAR_5->pctlops = &VAR_3;
 VAR_5->pins = VAR_6;
 VAR_5->npins = VAR_7->ngpio;
 VAR_5->confops = &VAR_2;

 VAR_4->pctl = FUNC_6(VAR_4->dev, VAR_5, VAR_4);
 if (FUNC_0(VAR_4->pctl)) {
  FUNC_2(VAR_4->dev, "unable to register pinctrl device\n");
  return FUNC_1(VAR_4->pctl);
 }

 return 0;
}
