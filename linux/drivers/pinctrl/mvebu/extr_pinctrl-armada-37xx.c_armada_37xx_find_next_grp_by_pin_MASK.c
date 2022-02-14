
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_37xx_pinctrl {int ngroups; struct armada_37xx_pin_group* groups; } ;
struct armada_37xx_pin_group {int npins; int extra_npins; int* pins; } ;



__attribute__((used)) static struct armada_37xx_pin_group *FUNC_0(
 struct armada_37xx_pinctrl *VAR_0, int VAR_1, int *VAR_2)
{
 while (*VAR_2 < VAR_0->ngroups) {
  struct armada_37xx_pin_group *VAR_3 = &VAR_0->groups[*VAR_2];
  int VAR_4;

  *VAR_2 = *VAR_2 + 1;
  for (VAR_4 = 0; VAR_4 < (VAR_3->npins + VAR_3->extra_npins); VAR_4++)
   if (VAR_3->pins[VAR_4] == VAR_1)
    return VAR_3;
 }
 return ((void*)0);
}
