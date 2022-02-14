
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int perf_event_mutex; scalar_t__* perf_event_ctxp; } ;
struct pmu {int task_ctx_nr; int task_ctx_size; int pmu_cpu_context; } ;
struct perf_event_context {int pin_count; void* task_ctx_data; int lock; } ;
struct perf_event {int cpu; int attach_state; } ;
struct perf_cpu_context {struct perf_event_context ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct perf_event_context* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct perf_event_context* FUNC_1 (struct pmu*,struct task_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct perf_event_context*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct perf_cpu_context* FUNC_8 (int ,int) ;
 struct perf_event_context* FUNC_9 (struct task_struct*,int,unsigned long*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct perf_event_context*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (scalar_t__,struct perf_event_context*) ;
 struct perf_event_context* FUNC_14 (struct perf_event_context*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static struct perf_event_context *
FUNC_16(struct pmu *VAR_9, struct task_struct *VAR_10,
  struct perf_event *VAR_11)
{
 struct perf_event_context *VAR_12, *VAR_13 = ((void*)0);
 struct perf_cpu_context *VAR_14;
 void *VAR_15 = ((void*)0);
 unsigned long VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = VAR_11->cpu;

 if (!VAR_10) {

  if (FUNC_10() && !FUNC_2(VAR_0))
   return FUNC_0(-VAR_1);

  VAR_14 = FUNC_8(VAR_9->pmu_cpu_context, VAR_19);
  VAR_12 = &VAR_14->ctx;
  FUNC_3(VAR_12);
  ++VAR_12->pin_count;

  return VAR_12;
 }

 VAR_18 = -VAR_3;
 VAR_17 = VAR_9->task_ctx_nr;
 if (VAR_17 < 0)
  goto errout;

 if (VAR_11->attach_state & VAR_7) {
  VAR_15 = FUNC_5(VAR_9->task_ctx_size, VAR_6);
  if (!VAR_15) {
   VAR_18 = -VAR_4;
   goto errout;
  }
 }

retry:
 VAR_12 = FUNC_9(VAR_10, VAR_17, &VAR_16);
 if (VAR_12) {
  VAR_13 = FUNC_14(VAR_12);
  ++VAR_12->pin_count;

  if (VAR_15 && !VAR_12->task_ctx_data) {
   VAR_12->task_ctx_data = VAR_15;
   VAR_15 = ((void*)0);
  }
  FUNC_12(&VAR_12->lock, VAR_16);

  if (VAR_13)
   FUNC_11(VAR_13);
 } else {
  VAR_12 = FUNC_1(VAR_9, VAR_10);
  VAR_18 = -VAR_4;
  if (!VAR_12)
   goto errout;

  if (VAR_15) {
   VAR_12->task_ctx_data = VAR_15;
   VAR_15 = ((void*)0);
  }

  VAR_18 = 0;
  FUNC_6(&VAR_10->perf_event_mutex);




  if (VAR_10->flags & VAR_8)
   VAR_18 = -VAR_5;
  else if (VAR_10->perf_event_ctxp[VAR_17])
   VAR_18 = -VAR_2;
  else {
   FUNC_3(VAR_12);
   ++VAR_12->pin_count;
   FUNC_13(VAR_10->perf_event_ctxp[VAR_17], VAR_12);
  }
  FUNC_7(&VAR_10->perf_event_mutex);

  if (FUNC_15(VAR_18)) {
   FUNC_11(VAR_12);

   if (VAR_18 == -VAR_2)
    goto retry;
   goto errout;
  }
 }

 FUNC_4(VAR_15);
 return VAR_12;

errout:
 FUNC_4(VAR_15);
 return FUNC_0(VAR_18);
}
