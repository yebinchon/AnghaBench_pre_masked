
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpufreq_cooling_device {int last_load; } ;


 int FUNC_0 (struct cpufreq_cooling_device*,unsigned long) ;

__attribute__((used)) static u32 FUNC_1(struct cpufreq_cooling_device *VAR_0,
        unsigned long VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return (VAR_2 * VAR_0->last_load) / 100;
}
