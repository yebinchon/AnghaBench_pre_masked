
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int trips; } ;
struct thermal_cooling_device {int dummy; } ;


 int FUNC_0 (struct thermal_zone_device*,int,struct thermal_cooling_device*) ;

__attribute__((used)) static void FUNC_1(struct thermal_zone_device *VAR_0, int VAR_1,
       struct thermal_cooling_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->trips; VAR_3++)
  if (VAR_1 & (1 << VAR_3))
   FUNC_0(VAR_0, VAR_3, VAR_2);
}
