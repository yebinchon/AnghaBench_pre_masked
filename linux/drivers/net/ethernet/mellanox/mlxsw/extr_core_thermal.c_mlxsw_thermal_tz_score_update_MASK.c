
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct mlxsw_thermal_trip {int temp; } ;
struct mlxsw_thermal {unsigned int tz_highest_score; struct thermal_zone_device* tz_highest_dev; } ;


 unsigned int FUNC_0 (int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct mlxsw_thermal *VAR_3,
       struct thermal_zone_device *VAR_4,
       struct mlxsw_thermal_trip *VAR_5,
       int VAR_6)
{
 struct mlxsw_thermal_trip *VAR_7 = VAR_5;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11 = 1;




 VAR_8 = VAR_1;
 for (VAR_10 = VAR_2; VAR_10 < VAR_0;
      VAR_10++, VAR_7++) {
  if (VAR_6 < VAR_7->temp) {
   VAR_9 = FUNC_0(VAR_6, VAR_7->temp - VAR_6);
   VAR_8 = VAR_9 * VAR_11;
   break;
  }
  VAR_11 *= 256;
 }

 if (VAR_8 > VAR_3->tz_highest_score) {
  VAR_3->tz_highest_score = VAR_8;
  VAR_3->tz_highest_dev = VAR_4;
 }
}
