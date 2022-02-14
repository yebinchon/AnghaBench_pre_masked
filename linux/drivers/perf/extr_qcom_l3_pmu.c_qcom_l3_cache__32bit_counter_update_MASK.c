
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int idx; int prev_count; } ;
struct perf_event {int count; TYPE_1__ hw; int pmu; } ;
struct l3cache_pmu {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct l3cache_pmu* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_0)
{
 struct l3cache_pmu *VAR_1 = FUNC_5(VAR_0->pmu);
 int VAR_2 = VAR_0->hw.idx;
 u32 VAR_3, VAR_4;

 do {
  VAR_3 = FUNC_3(&VAR_0->hw.prev_count);
  VAR_4 = FUNC_4(VAR_1->regs + FUNC_0(VAR_2));
 } while (FUNC_2(&VAR_0->hw.prev_count, VAR_3, VAR_4) != VAR_3);

 FUNC_1(VAR_4 - VAR_3, &VAR_0->count);
}
