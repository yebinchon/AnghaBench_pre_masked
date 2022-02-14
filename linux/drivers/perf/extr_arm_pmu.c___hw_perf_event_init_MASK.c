
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; int type; } ;
struct hw_perf_event {int idx; unsigned long config_base; int sample_period; int last_period; int period_left; scalar_t__ event_base; scalar_t__ config; scalar_t__ flags; } ;
struct perf_event {struct perf_event* group_leader; TYPE_1__ attr; struct hw_perf_event hw; int pmu; } ;
struct arm_pmu {int (* map_event ) (struct perf_event*) ;scalar_t__ (* set_event_filter ) (struct hw_perf_event*,TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct perf_event*) ;
 scalar_t__ FUNC_5 (struct hw_perf_event*,TYPE_1__*) ;
 struct arm_pmu* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct perf_event*) ;

__attribute__((used)) static int
FUNC_8(struct perf_event *VAR_2)
{
 struct arm_pmu *VAR_3 = FUNC_6(VAR_2->pmu);
 struct hw_perf_event *VAR_4 = &VAR_2->hw;
 int VAR_5;

 VAR_4->flags = 0;
 VAR_5 = VAR_3->map_event(VAR_2);

 if (VAR_5 < 0) {
  FUNC_3("event %x:%llx not supported\n", VAR_2->attr.type,
    VAR_2->attr.config);
  return VAR_5;
 }







 VAR_4->idx = -1;
 VAR_4->config_base = 0;
 VAR_4->config = 0;
 VAR_4->event_base = 0;




 if (VAR_3->set_event_filter &&
     VAR_3->set_event_filter(VAR_4, &VAR_2->attr)) {
  FUNC_3("ARM performance counters do not support "
    "mode exclusion\n");
  return -VAR_1;
 }




 VAR_4->config_base |= (unsigned long)VAR_5;

 if (!FUNC_1(VAR_2)) {






  VAR_4->sample_period = FUNC_0(VAR_2) >> 1;
  VAR_4->last_period = VAR_4->sample_period;
  FUNC_2(&VAR_4->period_left, VAR_4->sample_period);
 }

 if (VAR_2->group_leader != VAR_2) {
  if (FUNC_7(VAR_2) != 0)
   return -VAR_0;
 }

 return 0;
}
