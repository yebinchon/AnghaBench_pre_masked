
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int last_period; int sample_period; int period_left; } ;
struct perf_event {struct hw_perf_event hw; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

u64 FUNC_3(struct perf_event *VAR_0)
{
 struct hw_perf_event *VAR_1 = &VAR_0->hw;
 u64 VAR_2 = VAR_1->last_period;
 u64 VAR_3, VAR_4;
 s64 VAR_5, VAR_6;

 VAR_1->last_period = VAR_1->sample_period;

again:
 VAR_5 = VAR_6 = FUNC_2(&VAR_1->period_left);
 if (VAR_6 < 0)
  return 0;

 VAR_3 = FUNC_0(VAR_2 + VAR_6, VAR_2);
 VAR_4 = VAR_3 * VAR_2;
 VAR_6 -= VAR_4;
 if (FUNC_1(&VAR_1->period_left, VAR_5, VAR_6) != VAR_5)
  goto again;

 return VAR_3;
}
