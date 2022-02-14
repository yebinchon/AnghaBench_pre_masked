
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilco_ec_device {int dummy; } ;
struct power_supply_config {struct wilco_ec_device* drv_data; } ;
struct power_supply {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct power_supply*) ;
 struct wilco_ec_device* FUNC_1 (int ) ;
 struct power_supply* FUNC_2 (TYPE_1__*,int *,struct power_supply_config*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct wilco_ec_device *VAR_2 = FUNC_1(VAR_1->dev.parent);
 struct power_supply_config VAR_3 = {};
 struct power_supply *VAR_4;

 VAR_3.drv_data = VAR_2;
 VAR_4 = FUNC_2(&VAR_1->dev, &VAR_0, &VAR_3);

 return FUNC_0(VAR_4);
}
