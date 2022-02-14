
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct ab8500_fg_avg_cap {scalar_t__* time_stamps; size_t pos; int sum; int* samples; int nbr_samples; int avg; } ;
struct ab8500_fg {struct ab8500_fg_avg_cap avg_cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct ab8500_fg *VAR_2, int VAR_3)
{
 time64_t VAR_4 = FUNC_0();
 struct ab8500_fg_avg_cap *VAR_5 = &VAR_2->avg_cap;

 do {
  VAR_5->sum += VAR_3 - VAR_5->samples[VAR_5->pos];
  VAR_5->samples[VAR_5->pos] = VAR_3;
  VAR_5->time_stamps[VAR_5->pos] = VAR_4;
  VAR_5->pos++;

  if (VAR_5->pos == VAR_0)
   VAR_5->pos = 0;

  if (VAR_5->nbr_samples < VAR_0)
   VAR_5->nbr_samples++;





 } while (VAR_4 - VAR_1 > VAR_5->time_stamps[VAR_5->pos]);

 VAR_5->avg = VAR_5->sum / VAR_5->nbr_samples;

 return VAR_5->avg;
}
