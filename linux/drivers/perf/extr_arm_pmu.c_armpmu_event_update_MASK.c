
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hw_perf_event {int period_left; int prev_count; } ;
struct perf_event {int count; struct hw_perf_event hw; int pmu; } ;
struct arm_pmu {scalar_t__ (* read_counter ) (struct perf_event*) ;} ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (struct perf_event*) ;
 struct arm_pmu* FUNC_6 (int ) ;

u64 FUNC_7(struct perf_event *VAR_0)
{
 struct arm_pmu *VAR_1 = FUNC_6(VAR_0->pmu);
 struct hw_perf_event *VAR_2 = &VAR_0->hw;
 u64 VAR_3, VAR_4, VAR_5;
 u64 VAR_6 = FUNC_0(VAR_0);

again:
 VAR_4 = FUNC_3(&VAR_2->prev_count);
 VAR_5 = VAR_1->read_counter(VAR_0);

 if (FUNC_2(&VAR_2->prev_count, VAR_4,
        VAR_5) != VAR_4)
  goto again;

 VAR_3 = (VAR_5 - VAR_4) & VAR_6;

 FUNC_1(VAR_3, &VAR_0->count);
 FUNC_4(VAR_3, &VAR_2->period_left);

 return VAR_5;
}
