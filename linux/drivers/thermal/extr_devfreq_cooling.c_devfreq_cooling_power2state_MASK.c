
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct thermal_zone_device {int dummy; } ;
struct thermal_cooling_device {struct devfreq_cooling_device* devdata; } ;
struct devfreq_dev_status {unsigned long current_frequency; unsigned long total_time; scalar_t__ busy_time; } ;
struct devfreq_cooling_device {unsigned long res_util; int freq_table_size; unsigned long* power_table; int capped_state; TYPE_1__* power_ops; struct devfreq* devfreq; } ;
struct devfreq {struct devfreq_dev_status last_status; } ;
typedef unsigned long s32 ;
struct TYPE_2__ {scalar_t__ get_real_power; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct devfreq_cooling_device*,unsigned long) ;
 int FUNC_1 (struct thermal_cooling_device*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct thermal_cooling_device *VAR_1,
           struct thermal_zone_device *VAR_2,
           u32 VAR_3, unsigned long *VAR_4)
{
 struct devfreq_cooling_device *VAR_5 = VAR_1->devdata;
 struct devfreq *VAR_6 = VAR_5->devfreq;
 struct devfreq_dev_status *VAR_7 = &VAR_6->last_status;
 unsigned long VAR_8 = VAR_7->current_frequency;
 unsigned long VAR_9;
 s32 VAR_10;
 u32 VAR_11;
 s32 VAR_12;
 int VAR_13;

 if (VAR_5->power_ops->get_real_power) {

  VAR_12 = VAR_3 * VAR_5->res_util;
  VAR_12 /= VAR_0;
 } else {
  VAR_11 = FUNC_0(VAR_5, VAR_8);

  VAR_10 = VAR_3 - VAR_11;
  VAR_10 = VAR_10 > 0 ? VAR_10 : 0;


  VAR_9 = VAR_7->busy_time ?: 1;
  VAR_12 = (VAR_10 * VAR_7->total_time) / VAR_9;
 }





 for (VAR_13 = 0; VAR_13 < VAR_5->freq_table_size - 1; VAR_13++)
  if (VAR_12 >= VAR_5->power_table[VAR_13])
   break;

 *VAR_4 = VAR_13;
 VAR_5->capped_state = VAR_13;
 FUNC_1(VAR_1, VAR_8, *VAR_4, VAR_3);
 return 0;
}
