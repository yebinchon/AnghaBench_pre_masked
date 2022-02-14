
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct freq_table {scalar_t__ frequency; scalar_t__ power; } ;
struct cpufreq_cooling_device {int max_level; struct freq_table* freq_table; } ;



__attribute__((used)) static u32 FUNC_0(struct cpufreq_cooling_device *VAR_0,
        u32 VAR_1)
{
 int VAR_2;
 struct freq_table *VAR_3 = VAR_0->freq_table;

 for (VAR_2 = 1; VAR_2 <= VAR_0->max_level; VAR_2++)
  if (VAR_1 > VAR_3[VAR_2].frequency)
   break;

 return VAR_3[VAR_2 - 1].power;
}
