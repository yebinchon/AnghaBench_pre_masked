
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef scalar_t__ u8 ;
struct bq24190_dev_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bq24190_dev_info*,int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct bq24190_dev_info *VAR_9,
  union power_supply_propval *VAR_10)
{
 u8 VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_0(VAR_9, VAR_3,
   VAR_4,
   VAR_5,
   &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;


 if (!VAR_11) {
  VAR_12 = VAR_7;
 } else {
  VAR_13 = FUNC_0(VAR_9, VAR_0,
    VAR_1,
    VAR_2,
    &VAR_11);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_12 = (VAR_11) ? VAR_8 :
        VAR_6;
 }

 VAR_10->intval = VAR_12;

 return 0;
}
