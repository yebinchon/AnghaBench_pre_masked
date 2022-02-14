
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct bq24190_dev_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bq24190_dev_info*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct bq24190_dev_info *VAR_3,
  const union power_supply_propval *VAR_4)
{
 return FUNC_0(VAR_3, VAR_0,
   VAR_1,
   VAR_2, !VAR_4->intval);
}
