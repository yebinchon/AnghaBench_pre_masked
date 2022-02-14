
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct bq27xxx_device_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bq27xxx_device_info*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct bq27xxx_device_info *VAR_1,
       union power_supply_propval *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0, 0);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->dev, "error reading voltage\n");
  return VAR_3;
 }

 VAR_2->intval = VAR_3 * 1000;

 return 0;
}
