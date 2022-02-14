
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct bq24190_dev_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bq24190_dev_info*,int ,int ,int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct bq24190_dev_info *VAR_4,
  union power_supply_propval *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_0,
   VAR_1, VAR_2,
   VAR_3,
   FUNC_0(VAR_3), &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->intval = VAR_6;
 return 0;
}
