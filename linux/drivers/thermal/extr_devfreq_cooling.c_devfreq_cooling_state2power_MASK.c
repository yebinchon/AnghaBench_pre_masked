
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct thermal_zone_device {int dummy; } ;
struct thermal_cooling_device {struct devfreq_cooling_device* devdata; } ;
struct devfreq_cooling_device {unsigned long freq_table_size; unsigned long* freq_table; scalar_t__* power_table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct devfreq_cooling_device*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct thermal_cooling_device *VAR_1,
           struct thermal_zone_device *VAR_2,
           unsigned long VAR_3,
           u32 *VAR_4)
{
 struct devfreq_cooling_device *VAR_5 = VAR_1->devdata;
 unsigned long VAR_6;
 u32 VAR_7;

 if (VAR_3 >= VAR_5->freq_table_size)
  return -VAR_0;

 VAR_6 = VAR_5->freq_table[VAR_3];
 VAR_7 = FUNC_0(VAR_5, VAR_6);

 *VAR_4 = VAR_5->power_table[VAR_3] + VAR_7;
 return 0;
}
