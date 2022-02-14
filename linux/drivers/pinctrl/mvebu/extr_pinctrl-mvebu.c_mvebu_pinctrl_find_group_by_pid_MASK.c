
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_pinctrl_group {unsigned int* pins; unsigned int npins; } ;
struct mvebu_pinctrl {unsigned int num_groups; struct mvebu_pinctrl_group* groups; } ;



__attribute__((used)) static struct mvebu_pinctrl_group *FUNC_0(
 struct mvebu_pinctrl *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_groups; VAR_2++) {
  if (VAR_1 >= VAR_0->groups[VAR_2].pins[0] &&
      VAR_1 < VAR_0->groups[VAR_2].pins[0] +
   VAR_0->groups[VAR_2].npins)
   return &VAR_0->groups[VAR_2];
 }
 return ((void*)0);
}
