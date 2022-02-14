
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct bq27xxx_device_info {int opts; int dev; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bq27xxx_device_info*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct bq27xxx_device_info *VAR_6,
       union power_supply_propval *VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_6, VAR_3, 0);
 if (VAR_8 < 0) {
  FUNC_2(VAR_6->dev, "error reading current\n");
  return VAR_8;
 }

 if (VAR_6->opts & VAR_2) {
  VAR_9 = FUNC_0(VAR_6, VAR_4, 1);
  if (VAR_9 & VAR_0) {
   FUNC_1(VAR_6->dev, "negative current!\n");
   VAR_8 = -VAR_8;
  }

  VAR_7->intval = VAR_8 * VAR_1 / VAR_5;
 } else {

  VAR_7->intval = (int)((s16)VAR_8) * 1000;
 }

 return 0;
}
