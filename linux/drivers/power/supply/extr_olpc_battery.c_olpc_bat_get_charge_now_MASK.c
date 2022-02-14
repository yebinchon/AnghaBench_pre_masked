
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (union power_supply_propval*) ;
 int FUNC_1 (int ,int *,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(union power_supply_propval *VAR_1)
{
 uint8_t VAR_2;
 union power_supply_propval VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, ((void*)0), 0, &VAR_2, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(&VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_1->intval = VAR_2 * (VAR_3.intval / 100);
 return 0;
}
