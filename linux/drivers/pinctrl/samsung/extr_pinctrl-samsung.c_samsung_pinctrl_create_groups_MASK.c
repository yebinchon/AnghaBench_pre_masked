
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_desc {int npins; struct pinctrl_pin_desc* pins; } ;
struct samsung_pinctrl_drv_data {struct pinctrl_desc pctl; } ;
struct samsung_pin_group {int num_pins; int * pins; int name; } ;
struct pinctrl_pin_desc {int number; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct samsung_pin_group* FUNC_0 (int ) ;
 int VAR_1 ;
 struct samsung_pin_group* FUNC_1 (struct device*,int,int,int ) ;

__attribute__((used)) static struct samsung_pin_group *FUNC_2(
    struct device *VAR_2,
    struct samsung_pinctrl_drv_data *VAR_3,
    unsigned int *VAR_4)
{
 struct pinctrl_desc *VAR_5 = &VAR_3->pctl;
 struct samsung_pin_group *VAR_6, *VAR_7;
 const struct pinctrl_pin_desc *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_1(VAR_2, VAR_5->npins, sizeof(*VAR_6),
    VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_7 = VAR_6;

 VAR_8 = VAR_5->pins;
 for (VAR_9 = 0; VAR_9 < VAR_5->npins; ++VAR_9, ++VAR_8, ++VAR_7) {
  VAR_7->name = VAR_8->name;
  VAR_7->pins = &VAR_8->number;
  VAR_7->num_pins = 1;
 }

 *VAR_4 = VAR_5->npins;
 return VAR_6;
}
