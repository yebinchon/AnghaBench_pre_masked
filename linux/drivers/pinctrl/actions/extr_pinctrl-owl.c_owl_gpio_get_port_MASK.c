
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct owl_pinctrl {TYPE_1__* soc; } ;
struct owl_gpio_port {unsigned int pins; } ;
struct TYPE_2__ {unsigned int nports; struct owl_gpio_port* ports; } ;



__attribute__((used)) static const struct owl_gpio_port *
FUNC_0(struct owl_pinctrl *VAR_0, unsigned int *VAR_1)
{
 unsigned int VAR_2 = 0, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->soc->nports; VAR_3++) {
  const struct owl_gpio_port *VAR_4 = &VAR_0->soc->ports[VAR_3];

  if (*VAR_1 >= VAR_2 && *VAR_1 < VAR_2 + VAR_4->pins) {
   *VAR_1 -= VAR_2;
   return VAR_4;
  }

  VAR_2 += VAR_4->pins;
 }

 return ((void*)0);
}
