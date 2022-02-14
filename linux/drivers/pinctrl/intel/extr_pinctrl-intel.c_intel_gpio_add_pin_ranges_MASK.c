
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pinctrl {int dev; int chip; } ;
struct intel_padgroup {scalar_t__ gpio_base; int size; int base; } ;
struct intel_community {int ngpps; struct intel_padgroup* gpps; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct intel_pinctrl *VAR_0,
         const struct intel_community *VAR_1)
{
 int VAR_2 = 0, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->ngpps; VAR_3++) {
  const struct intel_padgroup *VAR_4 = &VAR_1->gpps[VAR_3];

  if (VAR_4->gpio_base < 0)
   continue;

  VAR_2 = FUNC_1(&VAR_0->chip, FUNC_0(VAR_0->dev),
          VAR_4->gpio_base, VAR_4->base,
          VAR_4->size);
  if (VAR_2)
   return VAR_2;
 }

 return VAR_2;
}
