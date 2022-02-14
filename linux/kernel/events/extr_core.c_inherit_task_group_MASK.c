
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct perf_event_context** perf_event_ctxp; } ;
struct perf_event_context {int pmu; } ;
struct TYPE_2__ {int inherit; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 struct perf_event_context* FUNC_0 (int ,struct task_struct*) ;
 int FUNC_1 (struct perf_event*,struct task_struct*,struct perf_event_context*,struct task_struct*,struct perf_event_context*) ;

__attribute__((used)) static int
FUNC_2(struct perf_event *VAR_1, struct task_struct *VAR_2,
     struct perf_event_context *VAR_3,
     struct task_struct *VAR_4, int VAR_5,
     int *VAR_6)
{
 int VAR_7;
 struct perf_event_context *VAR_8;

 if (!VAR_1->attr.inherit) {
  *VAR_6 = 0;
  return 0;
 }

 VAR_8 = VAR_4->perf_event_ctxp[VAR_5];
 if (!VAR_8) {






  VAR_8 = FUNC_0(VAR_3->pmu, VAR_4);
  if (!VAR_8)
   return -VAR_0;

  VAR_4->perf_event_ctxp[VAR_5] = VAR_8;
 }

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_8);

 if (VAR_7)
  *VAR_6 = 0;

 return VAR_7;
}
