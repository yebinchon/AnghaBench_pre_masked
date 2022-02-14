
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct TYPE_3__ {int used_mask; } ;
struct hisi_pmu {TYPE_2__* ops; int num_counters; TYPE_1__ pmu_events; } ;
struct TYPE_4__ {int (* start_counters ) (struct hisi_pmu*) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hisi_pmu*) ;
 struct hisi_pmu* FUNC_2 (struct pmu*) ;

void FUNC_3(struct pmu *VAR_0)
{
 struct hisi_pmu *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = FUNC_0(VAR_1->pmu_events.used_mask,
        VAR_1->num_counters);

 if (!VAR_2)
  return;

 VAR_1->ops->start_counters(VAR_1);
}
