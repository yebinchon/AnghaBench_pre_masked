
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef scalar_t__ u8 ;
struct bq24190_dev_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bq24190_dev_info*,int ,int ,int ,int ,int ,int*) ;
 int FUNC_2 (struct bq24190_dev_info*,int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct bq24190_dev_info *VAR_6,
  union power_supply_propval *VAR_7)
{
 u8 VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_0,
   VAR_3, VAR_4,
   VAR_5,
   FUNC_0(VAR_5), &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_0,
   VAR_1,
   VAR_2, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;


 if (VAR_8)
  VAR_9 /= 5;

 VAR_7->intval = VAR_9;
 return 0;
}
