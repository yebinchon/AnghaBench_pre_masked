
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa_pinctrl {int npins; struct pxa_desc_pin* ppins; } ;
struct TYPE_2__ {scalar_t__ name; } ;
struct pxa_desc_pin {struct pxa_desc_function* functions; TYPE_1__ pin; } ;
struct pxa_desc_function {scalar_t__ name; } ;


 int strcmp (scalar_t__,char const*) ;

__attribute__((used)) static struct pxa_desc_function *
pxa_desc_by_func_group(struct pxa_pinctrl *pctl, const char *pin_name,
         const char *func_name)
{
 int i;
 struct pxa_desc_function *df;

 for (i = 0; i < pctl->npins; i++) {
  const struct pxa_desc_pin *pin = pctl->ppins + i;

  if (!strcmp(pin->pin.name, pin_name))
   for (df = pin->functions; df->name; df++)
    if (!strcmp(df->name, func_name))
     return df;
 }

 return ((void*)0);
}
