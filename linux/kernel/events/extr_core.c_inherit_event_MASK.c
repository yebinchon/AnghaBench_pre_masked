
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct task_struct {int dummy; } ;
struct pmu {int task_ctx_size; } ;
struct perf_event_context {int lock; scalar_t__ task_ctx_data; } ;
struct hw_perf_event {int period_left; void* last_period; void* sample_period; } ;
struct TYPE_2__ {scalar_t__ freq; } ;
struct perf_event {int state; int attach_state; int child_mutex; int child_list; int overflow_handler_context; int overflow_handler; struct perf_event_context* ctx; struct hw_perf_event hw; TYPE_1__ attr; int refcount; struct pmu* pmu; int cpu; struct perf_event* parent; } ;
typedef enum perf_event_state { ____Placeholder_perf_event_state } perf_event_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event_context*) ;
 scalar_t__ FUNC_5 (struct perf_event*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct perf_event*) ;
 int FUNC_12 (struct perf_event*) ;
 struct perf_event* FUNC_13 (TYPE_1__*,int ,struct task_struct*,struct perf_event*,struct perf_event*,int *,int *,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static struct perf_event *
FUNC_16(struct perf_event *VAR_4,
       struct task_struct *VAR_5,
       struct perf_event_context *VAR_6,
       struct task_struct *VAR_7,
       struct perf_event *VAR_8,
       struct perf_event_context *VAR_9)
{
 enum perf_event_state VAR_10 = VAR_4->state;
 struct perf_event *VAR_11;
 unsigned long VAR_12;







 if (VAR_4->parent)
  VAR_4 = VAR_4->parent;

 VAR_11 = FUNC_13(&VAR_4->attr,
        VAR_4->cpu,
        VAR_7,
        VAR_8, VAR_4,
        ((void*)0), ((void*)0), -1);
 if (FUNC_0(VAR_11))
  return VAR_11;


 if ((VAR_11->attach_state & VAR_1) &&
     !VAR_9->task_ctx_data) {
  struct pmu *VAR_13 = VAR_11->pmu;

  VAR_9->task_ctx_data = FUNC_6(VAR_13->task_ctx_size,
         VAR_0);
  if (!VAR_9->task_ctx_data) {
   FUNC_3(VAR_11);
   return ((void*)0);
  }
 }







 FUNC_9(&VAR_4->child_mutex);
 if (FUNC_5(VAR_4) ||
     !FUNC_2(&VAR_4->refcount)) {
  FUNC_10(&VAR_4->child_mutex);

  FUNC_3(VAR_11);
  return ((void*)0);
 }

 FUNC_4(VAR_9);






 if (VAR_10 >= VAR_2)
  VAR_11->state = VAR_2;
 else
  VAR_11->state = VAR_3;

 if (VAR_4->attr.freq) {
  u64 VAR_14 = VAR_4->hw.sample_period;
  struct hw_perf_event *VAR_15 = &VAR_11->hw;

  VAR_15->sample_period = VAR_14;
  VAR_15->last_period = VAR_14;

  FUNC_8(&VAR_15->period_left, VAR_14);
 }

 VAR_11->ctx = VAR_9;
 VAR_11->overflow_handler = VAR_4->overflow_handler;
 VAR_11->overflow_handler_context
  = VAR_4->overflow_handler_context;




 FUNC_11(VAR_11);
 FUNC_12(VAR_11);




 FUNC_14(&VAR_9->lock, VAR_12);
 FUNC_1(VAR_11, VAR_9);
 FUNC_15(&VAR_9->lock, VAR_12);




 FUNC_7(&VAR_11->child_list, &VAR_4->child_list);
 FUNC_10(&VAR_4->child_mutex);

 return VAR_11;
}
