
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zone_device {int tj_max; int cpu; } ;
struct thermal_zone_device {struct zone_device* devdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int*,int*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct thermal_zone_device *VAR_9, int VAR_10, int VAR_11)
{
 struct zone_device *VAR_12 = VAR_9->devdata;
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;

 if (VAR_10 >= VAR_1 || VAR_11 >= VAR_12->tj_max)
  return -VAR_0;

 VAR_18 = FUNC_0(VAR_12->cpu, VAR_2,
      &VAR_13, &VAR_14);
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_10) {
  VAR_15 = VAR_6;
  VAR_16 = VAR_8;
  VAR_17 = VAR_4;
 } else {
  VAR_15 = VAR_5;
  VAR_16 = VAR_7;
  VAR_17 = VAR_3;
 }
 VAR_13 &= ~VAR_15;




 if (!VAR_11) {
  VAR_13 &= ~VAR_17;
 } else {
  VAR_13 |= (VAR_12->tj_max - VAR_11)/1000 << VAR_16;
  VAR_13 |= VAR_17;
 }

 return FUNC_1(VAR_12->cpu, VAR_2,
   VAR_13, VAR_14);
}
