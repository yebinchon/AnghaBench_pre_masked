
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ config; } ;
struct hw_perf_event {int idx; scalar_t__ config_base; } ;
struct perf_event {int attach_state; int cpu; TYPE_1__ attr; TYPE_2__* pmu; struct hw_perf_event hw; } ;
struct hisi_pmu {scalar_t__ check_event; int on_cpu; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 struct hisi_pmu* FUNC_2 (TYPE_2__*) ;

int FUNC_3(struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 struct hisi_pmu *VAR_6;

 if (VAR_4->attr.type != VAR_4->pmu->type)
  return -VAR_1;






 if (FUNC_1(VAR_4) || VAR_4->attach_state & VAR_3)
  return -VAR_2;





 if (VAR_4->cpu < 0)
  return -VAR_0;





 if (!FUNC_0(VAR_4))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4->pmu);
 if (VAR_4->attr.config > VAR_6->check_event)
  return -VAR_0;

 if (VAR_6->on_cpu == -1)
  return -VAR_0;





 VAR_5->idx = -1;
 VAR_5->config_base = VAR_4->attr.config;


 VAR_4->cpu = VAR_6->on_cpu;

 return 0;
}
