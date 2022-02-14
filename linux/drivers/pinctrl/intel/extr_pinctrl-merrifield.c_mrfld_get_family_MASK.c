
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrfld_pinctrl {unsigned int nfamilies; int dev; struct mrfld_family* families; } ;
struct mrfld_family {unsigned int pin_base; unsigned int npins; } ;


 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static const struct mrfld_family *FUNC_1(struct mrfld_pinctrl *VAR_0,
         unsigned int VAR_1)
{
 const struct mrfld_family *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nfamilies; VAR_3++) {
  VAR_2 = &VAR_0->families[VAR_3];
  if (VAR_1 >= VAR_2->pin_base &&
      VAR_1 < VAR_2->pin_base + VAR_2->npins)
   return VAR_2;
 }

 FUNC_0(VAR_0->dev, "failed to find family for pin %u\n", VAR_1);
 return ((void*)0);
}
