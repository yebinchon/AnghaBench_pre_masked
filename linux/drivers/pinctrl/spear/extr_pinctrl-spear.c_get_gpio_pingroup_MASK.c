
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spear_pmx {TYPE_1__* machdata; } ;
struct spear_gpio_pingroup {int npins; unsigned int* pins; } ;
struct TYPE_2__ {int ngpio_pingroups; struct spear_gpio_pingroup* gpio_pingroups; } ;



__attribute__((used)) static struct spear_gpio_pingroup *FUNC_0(struct spear_pmx *VAR_0,
  unsigned VAR_1)
{
 struct spear_gpio_pingroup *VAR_2;
 int VAR_3, VAR_4;

 if (!VAR_0->machdata->gpio_pingroups)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0->machdata->ngpio_pingroups; VAR_3++) {
  VAR_2 = &VAR_0->machdata->gpio_pingroups[VAR_3];

  for (VAR_4 = 0; VAR_4 < VAR_2->npins; VAR_4++) {
   if (VAR_2->pins[VAR_4] == VAR_1)
    return VAR_2;
  }
 }

 return ((void*)0);
}
