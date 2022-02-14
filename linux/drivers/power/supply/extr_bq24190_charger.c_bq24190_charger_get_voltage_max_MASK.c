
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct bq24190_dev_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_1(struct bq24190_dev_info *VAR_1,
  union power_supply_propval *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0) - 1;

 VAR_2->intval = VAR_0[VAR_3];
 return 0;
}
