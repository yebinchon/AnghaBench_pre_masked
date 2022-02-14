
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx2_uncore_pmu {scalar_t__ cpu; scalar_t__ max_events; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ config; } ;
struct hw_perf_event {scalar_t__ config; } ;
struct perf_event {int attach_state; scalar_t__ cpu; TYPE_1__ attr; TYPE_2__* pmu; struct hw_perf_event hw; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 scalar_t__ VAR_3 ;
 struct tx2_uncore_pmu* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 struct tx2_uncore_pmu *VAR_6;


 if (VAR_4->attr.type != VAR_4->pmu->type)
  return -VAR_1;






 if (FUNC_0(VAR_4) || VAR_4->attach_state & VAR_2)
  return -VAR_0;

 if (VAR_4->cpu < 0)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_4->pmu);
 if (VAR_6->cpu >= VAR_3)
  return -VAR_0;
 VAR_4->cpu = VAR_6->cpu;

 if (VAR_4->attr.config >= VAR_6->max_events)
  return -VAR_0;


 VAR_5->config = VAR_4->attr.config;


 if (!FUNC_2(VAR_4))
  return -VAR_0;

 return 0;
}
