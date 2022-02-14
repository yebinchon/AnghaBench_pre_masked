
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum power_supply_type { ____Placeholder_power_supply_type } power_supply_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,char const*) ;
 int FUNC_1 (struct device*,char*,char const**) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static enum power_supply_type FUNC_3(struct device *VAR_5)
{
 const char *VAR_6;

 if (!FUNC_1(VAR_5, "charger-type", &VAR_6)) {
  if (!FUNC_2("unknown", VAR_6))
   return VAR_2;
  if (!FUNC_2("battery", VAR_6))
   return VAR_0;
  if (!FUNC_2("ups", VAR_6))
   return VAR_3;
  if (!FUNC_2("mains", VAR_6))
   return VAR_1;
  if (!FUNC_2("usb-sdp", VAR_6))
   return VAR_4;
  if (!FUNC_2("usb-dcp", VAR_6))
   return VAR_4;
  if (!FUNC_2("usb-cdp", VAR_6))
   return VAR_4;
  if (!FUNC_2("usb-aca", VAR_6))
   return VAR_4;
 }
 FUNC_0(VAR_5, "unknown charger type %s\n", VAR_6);

 return VAR_2;
}
