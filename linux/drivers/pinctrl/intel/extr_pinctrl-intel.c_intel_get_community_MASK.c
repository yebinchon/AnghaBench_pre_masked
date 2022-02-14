
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pinctrl {int ncommunities; int dev; struct intel_community* communities; } ;
struct intel_community {unsigned int pin_base; unsigned int npins; } ;


 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static struct intel_community *FUNC_1(struct intel_pinctrl *VAR_0,
         unsigned int VAR_1)
{
 struct intel_community *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->ncommunities; VAR_3++) {
  VAR_2 = &VAR_0->communities[VAR_3];
  if (VAR_1 >= VAR_2->pin_base &&
      VAR_1 < VAR_2->pin_base + VAR_2->npins)
   return VAR_2;
 }

 FUNC_0(VAR_0->dev, "failed to find community for pin %u\n", VAR_1);
 return ((void*)0);
}
