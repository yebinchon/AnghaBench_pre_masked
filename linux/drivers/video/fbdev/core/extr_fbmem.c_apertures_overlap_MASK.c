
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aperture {scalar_t__ base; scalar_t__ size; } ;



__attribute__((used)) static bool FUNC_0(struct aperture *VAR_0, struct aperture *VAR_1)
{

 if (VAR_0->base == VAR_1->base)
  return 1;

 if (VAR_0->base > VAR_1->base && VAR_0->base < VAR_1->base + VAR_1->size)
  return 1;
 return 0;
}
