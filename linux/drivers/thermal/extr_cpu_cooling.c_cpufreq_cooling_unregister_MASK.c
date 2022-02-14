
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct cpufreq_cooling_device* devdata; } ;
struct cpufreq_cooling_device {struct cpufreq_cooling_device* freq_table; struct cpufreq_cooling_device* idle_time; int id; int qos_req; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cpufreq_cooling_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct thermal_cooling_device*) ;

void FUNC_7(struct thermal_cooling_device *VAR_2)
{
 struct cpufreq_cooling_device *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->devdata;

 FUNC_4(&VAR_0);
 FUNC_3(&VAR_3->node);
 FUNC_5(&VAR_0);

 FUNC_6(VAR_2);
 FUNC_0(&VAR_3->qos_req);
 FUNC_1(&VAR_1, VAR_3->id);
 FUNC_2(VAR_3->idle_time);
 FUNC_2(VAR_3->freq_table);
 FUNC_2(VAR_3);
}
