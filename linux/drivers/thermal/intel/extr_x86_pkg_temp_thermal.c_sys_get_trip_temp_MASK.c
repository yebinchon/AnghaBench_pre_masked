
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct zone_device {unsigned long tj_max; int cpu; } ;
struct thermal_zone_device {struct zone_device* devdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_7,
        int VAR_8, int *VAR_9)
{
 struct zone_device *VAR_10 = VAR_7->devdata;
 unsigned long VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;

 if (VAR_8 >= VAR_1)
  return -VAR_0;

 if (VAR_8) {
  VAR_12 = VAR_4;
  VAR_13 = VAR_6;
 } else {
  VAR_12 = VAR_3;
  VAR_13 = VAR_5;
 }

 VAR_16 = FUNC_1(VAR_10->cpu, VAR_2,
      &VAR_14, &VAR_15);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_11 = (VAR_14 & VAR_12) >> VAR_13;
 if (VAR_11)
  *VAR_9 = VAR_10->tj_max - VAR_11 * 1000;
 else
  *VAR_9 = 0;
 FUNC_0("sys_get_trip_temp %d\n", *VAR_9);

 return 0;
}
