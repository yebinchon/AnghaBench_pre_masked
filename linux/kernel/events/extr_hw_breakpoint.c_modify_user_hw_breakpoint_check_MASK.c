
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {scalar_t__ bp_type; } ;
struct arch_hw_breakpoint {int dummy; } ;
struct TYPE_2__ {struct arch_hw_breakpoint info; } ;
struct perf_event {TYPE_1__ hw; struct perf_event_attr attr; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event_attr*,struct perf_event_attr*) ;
 int FUNC_1 (struct perf_event*,struct perf_event_attr*,struct arch_hw_breakpoint*) ;
 scalar_t__ FUNC_2 (struct perf_event_attr*,struct perf_event_attr*,int) ;
 int FUNC_3 (struct perf_event*,scalar_t__,scalar_t__) ;

int
FUNC_4(struct perf_event *VAR_1, struct perf_event_attr *VAR_2,
           bool VAR_3)
{
 struct arch_hw_breakpoint VAR_4 = { };
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_3) {
  struct perf_event_attr VAR_6;

  VAR_6 = VAR_1->attr;
  FUNC_0(&VAR_6, VAR_2);
  if (FUNC_2(&VAR_6, VAR_2, sizeof(*VAR_2)))
   return -VAR_0;
 }

 if (VAR_1->attr.bp_type != VAR_2->bp_type) {
  VAR_5 = FUNC_3(VAR_1, VAR_1->attr.bp_type, VAR_2->bp_type);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_0(&VAR_1->attr, VAR_2);
 VAR_1->hw.info = VAR_4;

 return 0;
}
