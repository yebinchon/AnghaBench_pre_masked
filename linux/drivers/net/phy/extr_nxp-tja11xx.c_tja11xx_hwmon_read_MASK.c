
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct phy_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct phy_device* FUNC_0 (struct device*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_8,
         enum hwmon_sensor_types VAR_9,
         u32 VAR_10, int VAR_11, long *VAR_12)
{
 struct phy_device *VAR_13 = FUNC_0(VAR_8);
 int VAR_14;

 if (VAR_9 == VAR_4 && VAR_10 == VAR_5) {
  VAR_14 = FUNC_1(VAR_13, VAR_1);
  if (VAR_14 < 0)
   return VAR_14;

  *VAR_12 = !!(VAR_14 & VAR_2);
  return 0;
 }

 if (VAR_9 == VAR_6 && VAR_10 == VAR_7) {
  VAR_14 = FUNC_1(VAR_13, VAR_1);
  if (VAR_14 < 0)
   return VAR_14;

  *VAR_12 = !!(VAR_14 & VAR_3);
  return 0;
 }

 return -VAR_0;
}
