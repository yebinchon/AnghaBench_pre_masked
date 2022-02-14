
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; int config; } ;
struct TYPE_6__ {int config_base; } ;
struct perf_event {int attach_state; TYPE_3__ attr; TYPE_2__ hw; int cpu; TYPE_4__* pmu; } ;
struct TYPE_5__ {int dev; } ;
struct dsu_pmu {int active_cpu; TYPE_1__ pmu; int associated_cpus; } ;
struct TYPE_8__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct perf_event*) ;
 scalar_t__ FUNC_4 (struct perf_event*) ;
 scalar_t__ FUNC_5 (struct perf_event*) ;
 int VAR_4 ;
 struct dsu_pmu* FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_5)
{
 struct dsu_pmu *VAR_6 = FUNC_6(VAR_5->pmu);

 if (VAR_5->attr.type != VAR_5->pmu->type)
  return -VAR_1;


 if (FUNC_5(VAR_5)) {
  FUNC_2(VAR_6->pmu.dev, "Can't support sampling events\n");
  return -VAR_2;
 }


 if (VAR_5->cpu < 0 || VAR_5->attach_state & VAR_3) {
  FUNC_2(VAR_6->pmu.dev, "Can't support per-task counters\n");
  return -VAR_0;
 }

 if (FUNC_4(VAR_5)) {
  FUNC_2(VAR_6->pmu.dev, "Can't support filtering\n");
  return -VAR_0;
 }

 if (!FUNC_1(VAR_5->cpu, &VAR_6->associated_cpus)) {
  FUNC_2(VAR_6->pmu.dev,
    "Requested cpu is not associated with the DSU\n");
  return -VAR_0;
 }






 VAR_5->cpu = FUNC_0(&VAR_6->active_cpu);
 if (VAR_5->cpu >= VAR_4)
  return -VAR_0;
 if (!FUNC_3(VAR_5))
  return -VAR_0;

 VAR_5->hw.config_base = VAR_5->attr.config;
 return 0;
}
