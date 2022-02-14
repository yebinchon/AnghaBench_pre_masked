
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * perf_event_ctxp; } ;
struct perf_event_context {struct task_struct* task; int lock; int refcount; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct perf_event_context* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct perf_event_context *
FUNC_9(struct task_struct *VAR_1, int VAR_2, unsigned long *VAR_3)
{
 struct perf_event_context *VAR_4;

retry:
 FUNC_2(*VAR_3);
 FUNC_6();
 VAR_4 = FUNC_5(VAR_1->perf_event_ctxp[VAR_2]);
 if (VAR_4) {
  FUNC_3(&VAR_4->lock);
  if (VAR_4 != FUNC_5(VAR_1->perf_event_ctxp[VAR_2])) {
   FUNC_4(&VAR_4->lock);
   FUNC_7();
   FUNC_1(*VAR_3);
   goto retry;
  }

  if (VAR_4->task == VAR_0 ||
      !FUNC_8(&VAR_4->refcount)) {
   FUNC_4(&VAR_4->lock);
   VAR_4 = ((void*)0);
  } else {
   FUNC_0(VAR_4->task != VAR_1);
  }
 }
 FUNC_7();
 if (!VAR_4)
  FUNC_1(*VAR_3);
 return VAR_4;
}
