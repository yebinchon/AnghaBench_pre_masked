
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_zone_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct thermal_zone_device*,int*,int*) ;

__attribute__((used)) static inline u32 FUNC_3(struct thermal_zone_device *VAR_2,
     int VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_3 < VAR_1)
  return VAR_0;

 FUNC_2(VAR_2, &VAR_5, &VAR_6);

 if (VAR_3 >= VAR_6)
  return 0;

 if (VAR_4)
  return (u32)(FUNC_0(VAR_6 - VAR_3, FUNC_1(VAR_5)));
 else
  return (u32)((VAR_6 - VAR_3) / FUNC_1(VAR_5));
}
