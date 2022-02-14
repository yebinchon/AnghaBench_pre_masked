
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct hw_perf_event {int idx; scalar_t__ state; int prev_count; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; int pmu; } ;
struct ddr_pmu {int dummy; } ;


 int FUNC_0 (struct ddr_pmu*,int ,int,int) ;
 int FUNC_1 (int *,int ) ;
 struct ddr_pmu* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0, int VAR_1)
{
 struct ddr_pmu *VAR_2 = FUNC_2(VAR_0->pmu);
 struct hw_perf_event *VAR_3 = &VAR_0->hw;
 int VAR_4 = VAR_3->idx;

 FUNC_1(&VAR_3->prev_count, 0);

 FUNC_0(VAR_2, VAR_0->attr.config, VAR_4, 1);

 VAR_3->state = 0;
}
