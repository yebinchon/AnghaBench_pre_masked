
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_config {int num_supplicants; int supplied_to; int attr_grp; struct bq24257_device* drv_data; } ;
struct bq24257_device {int charger; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,struct power_supply_config*) ;

__attribute__((used)) static int FUNC_3(struct bq24257_device *VAR_3)
{
 struct power_supply_config VAR_4 = { .drv_data = VAR_3, };

 VAR_4.attr_grp = VAR_1;
 VAR_4.supplied_to = VAR_0;
 VAR_4.num_supplicants = FUNC_0(VAR_0);

 VAR_3->charger = FUNC_2(VAR_3->dev,
       &VAR_2,
       &VAR_4);

 return FUNC_1(VAR_3->charger);
}
