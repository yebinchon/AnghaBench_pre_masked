
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum power_supply_usb_type { ____Placeholder_power_supply_usb_type } power_supply_usb_type ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 char** VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
       enum power_supply_usb_type *VAR_3,
       ssize_t VAR_4,
       union power_supply_propval *VAR_5,
       char *VAR_6)
{
 enum power_supply_usb_type VAR_7;
 ssize_t VAR_8 = 0;
 bool VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
  VAR_7 = VAR_3[VAR_10];

  if (VAR_5->intval == VAR_7) {
   VAR_8 += FUNC_1(VAR_6 + VAR_8, "[%s] ",
      VAR_1[VAR_7]);
   VAR_9 = 1;
  } else {
   VAR_8 += FUNC_1(VAR_6 + VAR_8, "%s ",
      VAR_1[VAR_7]);
  }
 }

 if (!VAR_9) {
  FUNC_0(VAR_2, "driver reporting unsupported connected type\n");
  return -VAR_0;
 }

 if (VAR_8)
  VAR_6[VAR_8 - 1] = '\n';

 return VAR_8;
}
