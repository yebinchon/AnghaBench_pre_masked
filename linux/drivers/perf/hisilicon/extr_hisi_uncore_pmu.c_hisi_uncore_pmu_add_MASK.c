
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw_perf_event {int state; int idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct TYPE_4__ {struct perf_event** hw_events; } ;
struct hisi_pmu {TYPE_2__ pmu_events; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_event_idx ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (struct perf_event*) ;
 struct hisi_pmu* FUNC_2 (int ) ;

int FUNC_3(struct perf_event *VAR_4, int VAR_5)
{
 struct hisi_pmu *VAR_6 = FUNC_2(VAR_4->pmu);
 struct hw_perf_event *VAR_7 = &VAR_4->hw;
 int VAR_8;

 VAR_7->state = VAR_2 | VAR_3;


 VAR_8 = VAR_6->ops->get_event_idx(VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_4->hw.idx = VAR_8;
 VAR_6->pmu_events.hw_events[VAR_8] = VAR_4;

 if (VAR_5 & VAR_1)
  FUNC_0(VAR_4, VAR_0);

 return 0;
}
