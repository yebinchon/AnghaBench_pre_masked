
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_config {int num_supplicants; int supplied_to; int attr_grp; } ;
struct platform_device {int dev; } ;
struct lp8788_charger {void* charger; void* battery; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int *,int *,struct power_supply_config*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5,
    struct lp8788_charger *VAR_6)
{
 struct power_supply_config VAR_7 = {};

 VAR_7.attr_grp = VAR_2;
 VAR_7.supplied_to = VAR_1;
 VAR_7.num_supplicants = FUNC_0(VAR_1);

 VAR_6->charger = FUNC_2(&VAR_5->dev,
           &VAR_4,
           &VAR_7);
 if (FUNC_1(VAR_6->charger))
  return -VAR_0;

 VAR_6->battery = FUNC_2(&VAR_5->dev,
           &VAR_3, ((void*)0));
 if (FUNC_1(VAR_6->battery)) {
  FUNC_3(VAR_6->charger);
  return -VAR_0;
 }

 return 0;
}
