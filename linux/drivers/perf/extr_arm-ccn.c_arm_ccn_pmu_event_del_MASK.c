
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int pmu; } ;
struct TYPE_2__ {int hrtimer; } ;
struct arm_ccn {TYPE_1__ dt; int irq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct arm_ccn*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,int ) ;
 int FUNC_3 (int *) ;
 struct arm_ccn* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_1, int VAR_2)
{
 struct arm_ccn *VAR_3 = FUNC_4(VAR_1->pmu);

 FUNC_2(VAR_1, VAR_0);

 FUNC_1(VAR_1);

 if (!VAR_3->irq && FUNC_0(VAR_3) == 0)
  FUNC_3(&VAR_3->dt.hrtimer);
}
