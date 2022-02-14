
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int state; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;
struct TYPE_2__ {int hrtimer; } ;
struct arm_ccn {TYPE_1__ dt; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arm_ccn*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,int ) ;
 struct arm_ccn* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_4, int VAR_5)
{
 int VAR_6;
 struct hw_perf_event *VAR_7 = &VAR_4->hw;
 struct arm_ccn *VAR_8 = FUNC_6(VAR_4->pmu);

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;






 if (!VAR_8->irq && FUNC_0(VAR_8) == 1)
  FUNC_5(&VAR_8->dt.hrtimer, FUNC_4(),
         VAR_0);

 FUNC_2(VAR_4);

 VAR_7->state = VAR_3;

 if (VAR_5 & VAR_1)
  FUNC_3(VAR_4, VAR_2);

 return 0;
}
