
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int sample_period; int last_period; int prev_count; int period_left; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct arm_pmu {int (* write_counter ) (struct perf_event*,int) ;} ;
typedef int s64 ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*,int) ;
 struct arm_pmu* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct perf_event *VAR_0)
{
 struct arm_pmu *VAR_1 = FUNC_5(VAR_0->pmu);
 struct hw_perf_event *VAR_2 = &VAR_0->hw;
 s64 VAR_3 = FUNC_1(&VAR_2->period_left);
 s64 VAR_4 = VAR_2->sample_period;
 u64 VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_0);
 if (FUNC_6(VAR_3 <= -VAR_4)) {
  VAR_3 = VAR_4;
  FUNC_2(&VAR_2->period_left, VAR_3);
  VAR_2->last_period = VAR_4;
  VAR_6 = 1;
 }

 if (FUNC_6(VAR_3 <= 0)) {
  VAR_3 += VAR_4;
  FUNC_2(&VAR_2->period_left, VAR_3);
  VAR_2->last_period = VAR_4;
  VAR_6 = 1;
 }







 if (VAR_3 > (VAR_5 >> 1))
  VAR_3 = (VAR_5 >> 1);

 FUNC_2(&VAR_2->prev_count, (u64)-VAR_3);

 VAR_1->write_counter(VAR_0, (u64)(-VAR_3) & VAR_5);

 FUNC_3(VAR_0);

 return VAR_6;
}
