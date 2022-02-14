
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequency_table {int dummy; } ;
struct clk_rate_round_data {int max; unsigned long rate; struct cpufreq_frequency_table* arg; int func; int min; } ;
struct clk {int nr_freqs; } ;


 long VAR_0 ;
 long FUNC_0 (struct clk_rate_round_data*) ;
 int VAR_1 ;

long FUNC_1(struct clk *VAR_2,
     struct cpufreq_frequency_table *VAR_3,
     unsigned long VAR_4)
{
 struct clk_rate_round_data VAR_5 = {
  .min = 0,
  .max = VAR_2->nr_freqs - 1,
  .func = VAR_1,
  .arg = VAR_3,
  .rate = VAR_4,
 };

 if (VAR_2->nr_freqs < 1)
  return -VAR_0;

 return FUNC_0(&VAR_5);
}
