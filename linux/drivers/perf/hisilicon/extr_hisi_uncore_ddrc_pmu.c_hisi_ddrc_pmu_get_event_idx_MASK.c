
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int dummy; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct TYPE_2__ {unsigned long* used_mask; } ;
struct hisi_pmu {TYPE_1__ pmu_events; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw_perf_event*) ;
 int FUNC_1 (int,unsigned long*) ;
 scalar_t__ FUNC_2 (int,unsigned long*) ;
 struct hisi_pmu* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_1)
{
 struct hisi_pmu *VAR_2 = FUNC_3(VAR_1->pmu);
 unsigned long *VAR_3 = VAR_2->pmu_events.used_mask;
 struct hw_perf_event *VAR_4 = &VAR_1->hw;

 int VAR_5 = FUNC_0(VAR_4);

 if (FUNC_2(VAR_5, VAR_3))
  return -VAR_0;

 FUNC_1(VAR_5, VAR_3);

 return VAR_5;
}
