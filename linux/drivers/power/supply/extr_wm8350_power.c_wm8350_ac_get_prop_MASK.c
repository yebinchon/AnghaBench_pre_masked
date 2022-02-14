
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct wm8350 {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;


 int VAR_1 ;
 struct wm8350* FUNC_0 (int ) ;
 int FUNC_1 (struct wm8350*) ;
 int FUNC_2 (struct wm8350*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_2,
         enum power_supply_property VAR_3,
         union power_supply_propval *VAR_4)
{
 struct wm8350 *VAR_5 = FUNC_0(VAR_2->dev.parent);
 int VAR_6 = 0;

 switch (VAR_3) {
 case 129:
  VAR_4->intval = !!(FUNC_1(VAR_5) &
     VAR_1);
  break;
 case 128:
  VAR_4->intval = FUNC_2(VAR_5);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 return VAR_6;
}
