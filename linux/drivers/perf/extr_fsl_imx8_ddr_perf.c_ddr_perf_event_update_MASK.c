
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hw_perf_event {int idx; int prev_count; } ;
struct perf_event {int count; struct hw_perf_event hw; int pmu; } ;
struct ddr_pmu {int dummy; } ;


 scalar_t__ FUNC_0 (struct ddr_pmu*,int) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 struct ddr_pmu* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_0)
{
 struct ddr_pmu *VAR_1 = FUNC_4(VAR_0->pmu);
 struct hw_perf_event *VAR_2 = &VAR_0->hw;
 u64 VAR_3, VAR_4, VAR_5;
 int VAR_6 = VAR_2->idx;

 do {
  VAR_4 = FUNC_3(&VAR_2->prev_count);
  VAR_5 = FUNC_0(VAR_1, VAR_6);
 } while (FUNC_2(&VAR_2->prev_count, VAR_4,
   VAR_5) != VAR_4);

 VAR_3 = (VAR_5 - VAR_4) & 0xFFFFFFFF;

 FUNC_1(VAR_3, &VAR_0->count);
}
