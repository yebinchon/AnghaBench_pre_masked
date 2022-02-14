
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_frequency_table {int driver_data; unsigned long frequency; } ;
struct clk_div_mult_table {unsigned long* divisors; int nr_divisors; unsigned long* multipliers; int nr_multipliers; } ;
struct clk {int nr_freqs; TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int,unsigned long*) ;

void FUNC_1(struct clk *VAR_2,
     struct cpufreq_frequency_table *VAR_3,
     int VAR_4,
     struct clk_div_mult_table *VAR_5,
     unsigned long *VAR_6)
{
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_2->nr_freqs = VAR_4;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8 = 1;
  VAR_7 = 1;

  if (VAR_5->divisors && VAR_10 < VAR_5->nr_divisors)
   VAR_8 = VAR_5->divisors[VAR_10];

  if (VAR_5->multipliers && VAR_10 < VAR_5->nr_multipliers)
   VAR_7 = VAR_5->multipliers[VAR_10];

  if (!VAR_8 || !VAR_7 || (VAR_6 && !FUNC_0(VAR_10, VAR_6)))
   VAR_9 = VAR_0;
  else
   VAR_9 = VAR_2->parent->rate * VAR_7 / VAR_8;

  VAR_3[VAR_10].driver_data = VAR_10;
  VAR_3[VAR_10].frequency = VAR_9;
 }


 VAR_3[VAR_10].driver_data = VAR_10;
 VAR_3[VAR_10].frequency = VAR_1;
}
