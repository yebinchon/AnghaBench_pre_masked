
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct freq_table {int frequency; int power; } ;
struct device {int dummy; } ;
struct dev_pm_opp {int dummy; } ;
struct cpufreq_cooling_device {int max_level; TYPE_1__* policy; struct freq_table* freq_table; } ;
struct TYPE_2__ {int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct device*,char*,unsigned long) ;
 struct dev_pm_opp* FUNC_2 (struct device*,unsigned long*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct dev_pm_opp*) ;
 int FUNC_5 (struct dev_pm_opp*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (int,int) ;
 struct device* FUNC_8 (int) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct cpufreq_cooling_device *VAR_2,
        u32 VAR_3)
{
 struct freq_table *VAR_4 = VAR_2->freq_table;
 struct dev_pm_opp *VAR_5;
 struct device *VAR_6 = ((void*)0);
 int VAR_7 = 0, VAR_8 = VAR_2->policy->cpu, VAR_9;

 VAR_6 = FUNC_8(VAR_8);
 if (FUNC_10(!VAR_6)) {
  FUNC_9("No cpu device for cpu %d\n", VAR_8);
  return -VAR_1;
 }

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;





 if (VAR_7 != VAR_2->max_level + 1) {
  FUNC_6(VAR_6, "Number of OPPs not matching with max_levels\n");
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 <= VAR_2->max_level; VAR_9++) {
  unsigned long VAR_10 = VAR_4[VAR_9].frequency * 1000;
  u32 VAR_11 = VAR_4[VAR_9].frequency / 1000;
  u64 VAR_12;
  u32 VAR_13;





  VAR_5 = FUNC_2(VAR_6, &VAR_10);
  if (FUNC_0(VAR_5)) {
   FUNC_1(VAR_6, "failed to get opp for %lu frequency\n",
    VAR_10);
   return -VAR_0;
  }

  VAR_13 = FUNC_4(VAR_5) / 1000;
  FUNC_5(VAR_5);





  VAR_12 = (u64)VAR_3 * VAR_11 * VAR_13 * VAR_13;
  FUNC_7(VAR_12, 1000000000);


  VAR_4[VAR_9].power = VAR_12;
 }

 return 0;
}
