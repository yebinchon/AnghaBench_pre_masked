
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int idx; } ;
struct perf_event {TYPE_1__ hw; int pmu; } ;
struct dsu_pmu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dsu_pmu*,int ) ;
 int FUNC_1 (struct perf_event*) ;
 struct dsu_pmu* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_2, int VAR_3)
{
 struct dsu_pmu *VAR_4 = FUNC_2(VAR_2->pmu);

 if (VAR_2->hw.state & VAR_0)
  return;
 FUNC_0(VAR_4, VAR_2->hw.idx);
 FUNC_1(VAR_2);
 VAR_2->hw.state |= VAR_0 | VAR_1;
}
