
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {TYPE_1__* desc; int num_supplicants; scalar_t__ supplied_to; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int ac_conn; int usb_conn; } ;
struct ab8500_btemp {TYPE_2__ events; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_3__ {int num_properties; int* properties; int type; int name; } ;





 int FUNC_0 (struct ab8500_btemp*,int) ;
 struct power_supply* FUNC_1 (struct device*) ;
 int FUNC_2 (char const**,int ,int ) ;
 struct ab8500_btemp* FUNC_3 (struct power_supply*) ;
 scalar_t__ FUNC_4 (struct power_supply*,int,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, void *VAR_1)
{
 struct power_supply *VAR_2;
 struct power_supply *VAR_3 = FUNC_1(VAR_0);
 const char **VAR_4 = (const char **)VAR_3->supplied_to;
 struct ab8500_btemp *VAR_5;
 union power_supply_propval VAR_6;
 int VAR_7;

 VAR_2 = (struct power_supply *)VAR_1;
 VAR_5 = FUNC_3(VAR_2);





 VAR_7 = FUNC_2(VAR_4, VAR_3->num_supplicants, VAR_2->desc->name);
 if (VAR_7 < 0)
  return 0;


 for (VAR_7 = 0; VAR_7 < VAR_3->desc->num_properties; VAR_7++) {
  enum power_supply_property VAR_8;
  VAR_8 = VAR_3->desc->properties[VAR_7];

  if (FUNC_4(VAR_3, VAR_8, &VAR_6))
   continue;

  switch (VAR_8) {
  case 130:
   switch (VAR_3->desc->type) {
   case 129:

    if (!VAR_6.intval && VAR_5->events.ac_conn) {
     VAR_5->events.ac_conn = 0;
    }

    else if (VAR_6.intval && !VAR_5->events.ac_conn) {
     VAR_5->events.ac_conn = 1;
     if (!VAR_5->events.usb_conn)
      FUNC_0(VAR_5, 1);
    }
    break;
   case 128:

    if (!VAR_6.intval && VAR_5->events.usb_conn) {
     VAR_5->events.usb_conn = 0;
    }

    else if (VAR_6.intval && !VAR_5->events.usb_conn) {
     VAR_5->events.usb_conn = 1;
     if (!VAR_5->events.ac_conn)
      FUNC_0(VAR_5, 1);
    }
    break;
   default:
    break;
   }
   break;
  default:
   break;
  }
 }
 return 0;
}
