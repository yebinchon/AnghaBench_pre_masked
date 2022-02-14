
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_table {unsigned int frequency; } ;
struct cpufreq_cooling_device {unsigned long max_level; struct freq_table* freq_table; } ;



__attribute__((used)) static unsigned long FUNC_0(struct cpufreq_cooling_device *VAR_0,
          unsigned int VAR_1)
{
 struct freq_table *VAR_2 = VAR_0->freq_table;
 unsigned long VAR_3;

 for (VAR_3 = 1; VAR_3 <= VAR_0->max_level; VAR_3++)
  if (VAR_1 > VAR_2[VAR_3].frequency)
   break;

 return VAR_3 - 1;
}
