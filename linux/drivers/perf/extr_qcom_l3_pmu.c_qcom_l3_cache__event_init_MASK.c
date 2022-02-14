
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct hw_perf_event {int idx; scalar_t__ sample_period; } ;
struct perf_event {int cpu; TYPE_2__* pmu; TYPE_1__ attr; struct hw_perf_event hw; } ;
struct l3cache_pmu {int cpumask; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct perf_event*) ;
 struct l3cache_pmu* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_2)
{
 struct l3cache_pmu *VAR_3 = FUNC_2(VAR_2->pmu);
 struct hw_perf_event *VAR_4 = &VAR_2->hw;




 if (VAR_2->attr.type != VAR_2->pmu->type)
  return -VAR_1;




 if (VAR_4->sample_period)
  return -VAR_0;





 if (VAR_2->cpu < 0)
  return -VAR_0;


 if (!FUNC_1(VAR_2))
  return -VAR_0;

 VAR_4->idx = -1;
 VAR_2->cpu = FUNC_0(&VAR_3->cpumask);

 return 0;
}
