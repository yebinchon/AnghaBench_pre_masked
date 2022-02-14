
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sample_period; } ;
struct perf_event {TYPE_1__ hw; int pmu; } ;
struct arm_spe_pmu {int min_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct arm_spe_pmu* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_2)
{
 struct arm_spe_pmu *VAR_3 = FUNC_0(VAR_2->pmu);
 u64 VAR_4 = VAR_2->hw.sample_period;
 u64 VAR_5 = VAR_0
    << VAR_1;

 if (VAR_4 < VAR_3->min_period)
  VAR_4 = VAR_3->min_period;
 else if (VAR_4 > VAR_5)
  VAR_4 = VAR_5;
 else
  VAR_4 &= VAR_5;

 VAR_2->hw.sample_period = VAR_4;
}
