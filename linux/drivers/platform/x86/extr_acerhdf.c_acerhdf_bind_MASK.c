
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct thermal_cooling_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thermal_cooling_device* VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*,int ,struct thermal_cooling_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_4,
   struct thermal_cooling_device *VAR_5)
{

 if (VAR_5 != VAR_3)
  return 0;

 if (FUNC_1(VAR_4, 0, VAR_5,
   VAR_1, VAR_1,
   VAR_2)) {
  FUNC_0("error binding cooling dev\n");
  return -VAR_0;
 }
 return 0;
}
