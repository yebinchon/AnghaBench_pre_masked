
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct devfreq_cooling_device* devdata; } ;
struct device {int dummy; } ;
struct devfreq_cooling_device {unsigned long cooling_state; unsigned long freq_table_size; struct devfreq* devfreq; } ;
struct TYPE_2__ {struct device* parent; } ;
struct devfreq {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,unsigned long) ;
 int FUNC_1 (struct devfreq_cooling_device*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct thermal_cooling_device *VAR_1,
      unsigned long VAR_2)
{
 struct devfreq_cooling_device *VAR_3 = VAR_1->devdata;
 struct devfreq *VAR_4 = VAR_3->devfreq;
 struct device *VAR_5 = VAR_4->dev.parent;
 int VAR_6;

 if (VAR_2 == VAR_3->cooling_state)
  return 0;

 FUNC_0(VAR_5, "Setting cooling state %lu\n", VAR_2);

 if (VAR_2 >= VAR_3->freq_table_size)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_3->cooling_state = VAR_2;

 return 0;
}
