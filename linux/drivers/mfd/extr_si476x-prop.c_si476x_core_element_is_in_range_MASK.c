
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct si476x_property_range {scalar_t__ high; scalar_t__ low; } ;



__attribute__((used)) static bool FUNC_0(u16 VAR_0,
         const struct si476x_property_range VAR_1[],
         size_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_0 <= VAR_1[VAR_3].high && VAR_0 >= VAR_1[VAR_3].low)
   return 1;

 return 0;
}
