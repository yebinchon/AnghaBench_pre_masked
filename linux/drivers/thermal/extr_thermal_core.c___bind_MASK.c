
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int trips; } ;
struct thermal_cooling_device {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct thermal_zone_device*,struct thermal_cooling_device*,int) ;
 int FUNC_1 (struct thermal_zone_device*,int,struct thermal_cooling_device*,unsigned long,unsigned long,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct thermal_zone_device *VAR_1, int VAR_2,
     struct thermal_cooling_device *VAR_3,
     unsigned long *VAR_4,
     unsigned int VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1->trips; VAR_6++) {
  if (VAR_2 & (1 << VAR_6)) {
   unsigned long VAR_8, VAR_9;

   VAR_8 = VAR_0;
   VAR_9 = VAR_0;
   if (VAR_4) {
    VAR_9 = VAR_4[VAR_6 * 2];
    VAR_8 = VAR_4[VAR_6 * 2 + 1];
   }
   VAR_7 = FUNC_1(VAR_1, VAR_6, VAR_3,
              VAR_8, VAR_9,
              VAR_5);
   if (VAR_7)
    FUNC_0(VAR_1, VAR_3, VAR_7);
  }
 }
}
