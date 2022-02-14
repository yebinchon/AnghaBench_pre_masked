
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct thermal_governor* governor; } ;
struct thermal_governor {int (* bind_to_tz ) (struct thermal_zone_device*) ;int name; int (* unbind_from_tz ) (struct thermal_zone_device*) ;} ;


 int FUNC_0 (struct thermal_zone_device*,int ) ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int FUNC_2 (struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_0,
    struct thermal_governor *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->governor && VAR_0->governor->unbind_from_tz)
  VAR_0->governor->unbind_from_tz(VAR_0);

 if (VAR_1 && VAR_1->bind_to_tz) {
  VAR_2 = VAR_1->bind_to_tz(VAR_0);
  if (VAR_2) {
   FUNC_0(VAR_0, VAR_1->name);

   return VAR_2;
  }
 }

 VAR_0->governor = VAR_1;

 return VAR_2;
}
