
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arch_hw_breakpoint {int dummy; } ;
struct TYPE_2__ {struct arch_hw_breakpoint info; } ;
struct perf_event {TYPE_1__ hw; int attr; } ;


 int FUNC_0 (struct perf_event*,int *,struct arch_hw_breakpoint*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;

int FUNC_3(struct perf_event *VAR_0)
{
 struct arch_hw_breakpoint VAR_1 = { };
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_0->attr, &VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_0);
  return VAR_2;
 }

 VAR_0->hw.info = VAR_1;

 return 0;
}
