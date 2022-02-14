
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct atmel_pioctrl {int npins; struct atmel_group* groups; } ;
struct atmel_group {unsigned int pin; } ;


 struct atmel_pioctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static struct atmel_group *
FUNC_1(struct pinctrl_dev *VAR_0, unsigned VAR_1)
{
 struct atmel_pioctrl *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->npins; VAR_3++) {
  struct atmel_group *VAR_4 = VAR_2->groups + VAR_3;

  if (VAR_4->pin == VAR_1)
   return VAR_4;
 }

 return ((void*)0);
}
