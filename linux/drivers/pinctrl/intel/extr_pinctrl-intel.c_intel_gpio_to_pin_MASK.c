
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pinctrl {int ncommunities; struct intel_community* communities; } ;
struct intel_padgroup {unsigned int gpio_base; unsigned int size; int base; } ;
struct intel_community {int ngpps; struct intel_padgroup* gpps; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct intel_pinctrl *VAR_1, unsigned int VAR_2,
        const struct intel_community **VAR_3,
        const struct intel_padgroup **VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->ncommunities; VAR_5++) {
  const struct intel_community *VAR_6 = &VAR_1->communities[VAR_5];
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_6->ngpps; VAR_7++) {
   const struct intel_padgroup *VAR_8 = &VAR_6->gpps[VAR_7];

   if (VAR_8->gpio_base < 0)
    continue;

   if (VAR_2 >= VAR_8->gpio_base &&
       VAR_2 < VAR_8->gpio_base + VAR_8->size) {
    int VAR_9;

    VAR_9 = VAR_8->base + VAR_2 - VAR_8->gpio_base;
    if (VAR_3)
     *VAR_3 = VAR_6;
    if (VAR_4)
     *VAR_4 = VAR_8;

    return VAR_9;
   }
  }
 }

 return -VAR_0;
}
