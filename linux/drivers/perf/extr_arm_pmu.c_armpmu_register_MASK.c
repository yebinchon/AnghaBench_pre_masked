
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capabilities; } ;
struct arm_pmu {int num_events; int name; TYPE_1__ pmu; int set_event_filter; } ;


 int VAR_0 ;
 struct arm_pmu* VAR_1 ;
 int FUNC_0 (struct arm_pmu*) ;
 int FUNC_1 (struct arm_pmu*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,int ,int ) ;

int FUNC_4(struct arm_pmu *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 if (!VAR_2->set_event_filter)
  VAR_2->pmu.capabilities |= VAR_0;

 VAR_3 = FUNC_2(&VAR_2->pmu, VAR_2->name, -1);
 if (VAR_3)
  goto out_destroy;

 if (!VAR_1)
  VAR_1 = VAR_2;

 FUNC_3("enabled with %s PMU driver, %d counters available\n",
  VAR_2->name, VAR_2->num_events);

 return 0;

out_destroy:
 FUNC_0(VAR_2);
 return VAR_3;
}
