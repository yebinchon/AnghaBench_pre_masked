
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct perf_event {int pmu; } ;
struct TYPE_2__ {unsigned long* used_mask; } ;
struct hisi_pmu {int num_counters; TYPE_1__ pmu_events; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (int,unsigned long*) ;
 struct hisi_pmu* FUNC_2 (int ) ;

int FUNC_3(struct perf_event *VAR_1)
{
 struct hisi_pmu *VAR_2 = FUNC_2(VAR_1->pmu);
 unsigned long *VAR_3 = VAR_2->pmu_events.used_mask;
 u32 VAR_4 = VAR_2->num_counters;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 == VAR_4)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_3);

 return VAR_5;
}
