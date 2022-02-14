
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct tx2_uncore_pmu {int type; unsigned long prorate_factor; } ;
struct hw_perf_event {int prev_count; int event_base; } ;
struct perf_event {int count; int pmu; struct hw_perf_event hw; } ;
typedef unsigned long s64 ;
typedef enum tx2_uncore_type { ____Placeholder_tx2_uncore_type } tx2_uncore_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,int *) ;
 unsigned long FUNC_2 (int *,unsigned long) ;
 struct tx2_uncore_pmu* FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_2)
{
 s64 VAR_3, VAR_4, VAR_5 = 0;
 struct hw_perf_event *VAR_6 = &VAR_2->hw;
 struct tx2_uncore_pmu *VAR_7;
 enum tx2_uncore_type VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_3(VAR_2->pmu);
 VAR_8 = VAR_7->type;
 VAR_9 = VAR_7->prorate_factor;

 VAR_5 = FUNC_4(VAR_6->event_base);
 VAR_3 = FUNC_2(&VAR_6->prev_count, VAR_5);


 VAR_4 = (u32)(((1UL << 32) - VAR_3) + VAR_5);


 if (VAR_8 == VAR_1 &&
   FUNC_0(VAR_2) == VAR_0)
  VAR_4 = VAR_4/4;





 FUNC_1(VAR_4 * VAR_9, &VAR_2->count);
}
