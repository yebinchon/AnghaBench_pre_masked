
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pmu {int dummy; } ;
struct perf_event_context {struct pmu* pmu; int task; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event_context*) ;
 int FUNC_1 (struct task_struct*) ;
 struct perf_event_context* FUNC_2 (int,int ) ;

__attribute__((used)) static struct perf_event_context *
FUNC_3(struct pmu *VAR_1, struct task_struct *VAR_2)
{
 struct perf_event_context *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct perf_event_context), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_3);
 if (VAR_2)
  VAR_3->task = FUNC_1(VAR_2);
 VAR_3->pmu = VAR_1;

 return VAR_3;
}
