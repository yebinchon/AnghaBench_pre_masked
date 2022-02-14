
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_resconfig {scalar_t__ resource; } ;



__attribute__((used)) static void FUNC_0(struct twl4030_resconfig *VAR_0,
      struct twl4030_resconfig *VAR_1)
{
 while (VAR_0->resource) {
  struct twl4030_resconfig *VAR_2 = VAR_1;

  while (VAR_2->resource) {
   if (VAR_2->resource == VAR_0->resource) {
    *VAR_0 = *VAR_2;
    break;
   }
   VAR_2++;
  }
  VAR_0++;
 }
}
