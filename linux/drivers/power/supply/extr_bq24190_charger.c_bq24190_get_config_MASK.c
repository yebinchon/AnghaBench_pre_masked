
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct power_supply_battery_info {int precharge_current_ua; int charge_term_current_ua; } ;
struct bq24190_dev_info {int sys_min; int iprechg; int iterm; TYPE_1__* dev; int charger; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const* const,int*) ;
 int FUNC_2 (int ,struct power_supply_battery_info*) ;

__attribute__((used)) static int FUNC_3(struct bq24190_dev_info *VAR_6)
{
 const char * const VAR_7 = "ti,system-minimum-microvolt";
 struct power_supply_battery_info VAR_8 = {};
 int VAR_9;

 if (FUNC_1(VAR_6->dev, VAR_7, &VAR_9) == 0) {
  VAR_9 /= 1000;
  if (VAR_9 >= VAR_5
   && VAR_9 <= VAR_4)
   VAR_6->sys_min = VAR_9;
  else
   FUNC_0(VAR_6->dev, "invalid value for %s: %u\n", VAR_7, VAR_9);
 }

 if (VAR_6->dev->of_node &&
     !FUNC_2(VAR_6->charger, &VAR_8)) {
  VAR_9 = VAR_8.precharge_current_ua / 1000;
  if (VAR_9 >= VAR_1
   && VAR_9 <= VAR_0)
   VAR_6->iprechg = VAR_9;
  else
   FUNC_0(VAR_6->dev, "invalid value for battery:precharge-current-microamp: %d\n",
     VAR_9);

  VAR_9 = VAR_8.charge_term_current_ua / 1000;
  if (VAR_9 >= VAR_3
   && VAR_9 <= VAR_2)
   VAR_6->iterm = VAR_9;
  else
   FUNC_0(VAR_6->dev, "invalid value for battery:charge-term-current-microamp: %d\n",
     VAR_9);
 }

 return 0;
}
