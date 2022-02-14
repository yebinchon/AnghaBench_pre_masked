
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; scalar_t__ idx; } ;
struct perf_event {TYPE_1__ hw; int pmu; } ;
struct dsu_pmu {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dsu_pmu*,scalar_t__) ;
 int FUNC_2 (struct dsu_pmu*,struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 struct dsu_pmu* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_3, int VAR_4)
{
 struct dsu_pmu *VAR_5 = FUNC_4(VAR_3->pmu);


 if (VAR_4 & VAR_1)
  FUNC_0(!(VAR_3->hw.state & VAR_2));
 FUNC_3(VAR_3);
 if (VAR_3->hw.idx != VAR_0)
  FUNC_2(VAR_5, VAR_3);
 VAR_3->hw.state = 0;
 FUNC_1(VAR_5, VAR_3->hw.idx);
}
