
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_of_device_ops {int dummy; } ;
struct thermal_zone_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct thermal_zone_device* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct thermal_zone_device**) ;
 struct thermal_zone_device** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct thermal_zone_device**) ;
 struct thermal_zone_device* FUNC_5 (struct device*,int,void*,struct thermal_zone_of_device_ops const*) ;

struct thermal_zone_device *FUNC_6(
 struct device *VAR_3, int VAR_4,
 void *VAR_5, const struct thermal_zone_of_device_ops *VAR_6)
{
 struct thermal_zone_device **VAR_7, *VAR_8;

 VAR_7 = FUNC_3(VAR_2, sizeof(*VAR_7),
      VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
 if (FUNC_1(VAR_8)) {
  FUNC_4(VAR_7);
  return VAR_8;
 }

 *VAR_7 = VAR_8;
 FUNC_2(VAR_3, VAR_7);

 return VAR_8;
}
