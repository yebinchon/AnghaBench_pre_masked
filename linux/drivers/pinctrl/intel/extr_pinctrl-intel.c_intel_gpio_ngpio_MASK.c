
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pinctrl {int ncommunities; struct intel_community* communities; } ;
struct intel_padgroup {unsigned int gpio_base; unsigned int size; } ;
struct intel_community {int ngpps; struct intel_padgroup* gpps; } ;



__attribute__((used)) static unsigned FUNC_0(const struct intel_pinctrl *VAR_0)
{
 const struct intel_community *VAR_1;
 unsigned int VAR_2 = 0;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->ncommunities; VAR_3++) {
  VAR_1 = &VAR_0->communities[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_1->ngpps; VAR_4++) {
   const struct intel_padgroup *VAR_5 = &VAR_1->gpps[VAR_4];

   if (VAR_5->gpio_base < 0)
    continue;

   if (VAR_5->gpio_base + VAR_5->size > VAR_2)
    VAR_2 = VAR_5->gpio_base + VAR_5->size;
  }
 }

 return VAR_2;
}
