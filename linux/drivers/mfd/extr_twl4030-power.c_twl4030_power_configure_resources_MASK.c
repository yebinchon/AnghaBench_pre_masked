
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_resconfig {scalar_t__ resource; } ;
struct twl4030_power_data {struct twl4030_resconfig* board_config; struct twl4030_resconfig* resource_config; } ;


 int FUNC_0 (struct twl4030_resconfig*) ;
 int FUNC_1 (struct twl4030_resconfig*,struct twl4030_resconfig*) ;

__attribute__((used)) static int
FUNC_2(const struct twl4030_power_data *VAR_0)
{
 struct twl4030_resconfig *VAR_1 = VAR_0->resource_config;
 struct twl4030_resconfig *VAR_2 = VAR_0->board_config;
 int VAR_3;

 if (VAR_1) {
  if (VAR_2)
   FUNC_1(VAR_1, VAR_2);

  while (VAR_1->resource) {
   VAR_3 = FUNC_0(VAR_1);
   if (VAR_3)
    return VAR_3;
   VAR_1++;
  }
 }

 return 0;
}
