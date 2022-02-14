
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {int num_supplies; int num_supplicants; TYPE_1__* desc; int * supplied_to; int * supplied_from; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct power_supply *VAR_0,
      struct power_supply *VAR_1)
{
 int VAR_2;

 if (!VAR_1->supplied_from && !VAR_0->supplied_to)
  return 0;


 if (VAR_1->supplied_from) {
  if (!VAR_0->desc->name)
   return 0;
  for (VAR_2 = 0; VAR_2 < VAR_1->num_supplies; VAR_2++)
   if (!FUNC_0(VAR_0->desc->name, VAR_1->supplied_from[VAR_2]))
    return 1;
 } else {
  if (!VAR_1->desc->name)
   return 0;
  for (VAR_2 = 0; VAR_2 < VAR_0->num_supplicants; VAR_2++)
   if (!FUNC_0(VAR_0->supplied_to[VAR_2], VAR_1->desc->name))
    return 1;
 }

 return 0;
}
