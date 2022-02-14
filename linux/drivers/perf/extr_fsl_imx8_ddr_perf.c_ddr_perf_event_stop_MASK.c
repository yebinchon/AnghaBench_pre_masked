
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct hw_perf_event {int idx; int state; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; int pmu; } ;
struct ddr_pmu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ddr_pmu*,int ,int,int) ;
 int FUNC_1 (struct perf_event*) ;
 struct ddr_pmu* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_1, int VAR_2)
{
 struct ddr_pmu *VAR_3 = FUNC_2(VAR_1->pmu);
 struct hw_perf_event *VAR_4 = &VAR_1->hw;
 int VAR_5 = VAR_4->idx;

 FUNC_0(VAR_3, VAR_1->attr.config, VAR_5, 0);
 FUNC_1(VAR_1);

 VAR_4->state |= VAR_0;
}
