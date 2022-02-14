
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;



__attribute__((used)) static int FUNC_0(int VAR_0,
    union power_supply_propval *VAR_1)
{
 if (VAR_0 < 0)
  return VAR_0;

 VAR_1->intval = VAR_0;

 return 0;
}
