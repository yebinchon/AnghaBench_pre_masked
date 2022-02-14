
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {scalar_t__ state; int idx; int prev_count; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct arm_ccn {int dummy; } ;


 int FUNC_0 (struct arm_ccn*,int ) ;
 int FUNC_1 (struct perf_event*,int) ;
 int FUNC_2 (int *,int ) ;
 struct arm_ccn* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_0, int VAR_1)
{
 struct arm_ccn *VAR_2 = FUNC_3(VAR_0->pmu);
 struct hw_perf_event *VAR_3 = &VAR_0->hw;

 FUNC_2(&VAR_0->hw.prev_count,
   FUNC_0(VAR_2, VAR_3->idx));
 VAR_3->state = 0;


 FUNC_1(VAR_0, 1);
}
