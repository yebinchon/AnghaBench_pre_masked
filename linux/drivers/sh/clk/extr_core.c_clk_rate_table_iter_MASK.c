
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequency_table {unsigned long frequency; } ;
struct clk_rate_round_data {struct cpufreq_frequency_table* arg; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static long FUNC_0(unsigned int VAR_1,
    struct clk_rate_round_data *VAR_2)
{
 struct cpufreq_frequency_table *VAR_3 = VAR_2->arg;
 unsigned long VAR_4 = VAR_3[VAR_1].frequency;

 if (VAR_4 == VAR_0)
  VAR_4 = 0;

 return VAR_4;
}
