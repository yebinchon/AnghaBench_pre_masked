
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct devfreq_cooling_device* devdata; } ;
struct devfreq_cooling_device {struct devfreq_cooling_device* freq_table; struct devfreq_cooling_device* power_table; int id; int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct devfreq_cooling_device*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct thermal_cooling_device *VAR_1)
{
 struct devfreq_cooling_device *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->devdata;

 FUNC_2(VAR_2->cdev);
 FUNC_0(&VAR_0, VAR_2->id);
 FUNC_1(VAR_2->power_table);
 FUNC_1(VAR_2->freq_table);

 FUNC_1(VAR_2);
}
