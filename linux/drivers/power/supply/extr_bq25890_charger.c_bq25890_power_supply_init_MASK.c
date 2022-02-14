
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_config {int num_supplicants; int supplied_to; struct bq25890_device* drv_data; } ;
struct bq25890_device {int charger; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,struct power_supply_config*) ;

__attribute__((used)) static int FUNC_3(struct bq25890_device *VAR_2)
{
 struct power_supply_config VAR_3 = { .drv_data = VAR_2, };

 VAR_3.supplied_to = VAR_0;
 VAR_3.num_supplicants = FUNC_0(VAR_0);

 VAR_2->charger = FUNC_2(VAR_2->dev, &VAR_1,
         &VAR_3);

 return FUNC_1(VAR_2->charger);
}
