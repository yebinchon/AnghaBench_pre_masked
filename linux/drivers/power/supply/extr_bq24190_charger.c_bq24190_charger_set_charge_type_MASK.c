
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
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
 int VAR_9 ;



 int FUNC_0 (struct bq24190_dev_info*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct bq24190_dev_info *VAR_10,
  const union power_supply_propval *VAR_11)
{
 u8 VAR_12, VAR_13, VAR_14;
 int VAR_15;
 switch (VAR_11->intval) {
 case 129:
  VAR_12 = 0x0;
  break;
 case 128:
  VAR_12 = 0x1;
  VAR_13 = 0x1;
  VAR_14 = 0x0;
  break;
 case 130:
  VAR_12 = 0x1;
  VAR_13 = 0x0;
  VAR_14 = 0x1;
  break;
 default:
  return -VAR_9;
 }

 if (VAR_12) {
  VAR_15 = FUNC_0(VAR_10, VAR_0,
    VAR_1,
    VAR_2,
    VAR_13);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_15 = FUNC_0(VAR_10, VAR_3,
    VAR_4,
    VAR_5,
    VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
 }

 return FUNC_0(VAR_10, VAR_6,
   VAR_7,
   VAR_8, VAR_12);
}
