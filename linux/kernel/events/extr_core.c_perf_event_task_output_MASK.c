
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {TYPE_2__ header; int time; void* ptid; void* tid; void* ppid; void* pid; } ;
struct perf_task_event {TYPE_1__ event_id; struct task_struct* task; } ;
struct perf_sample_data {int dummy; } ;
struct perf_output_handle {int dummy; } ;
struct perf_event {int dummy; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct perf_event*,struct perf_output_handle*,struct perf_sample_data*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (TYPE_2__*,struct perf_sample_data*,struct perf_event*) ;
 void* FUNC_3 (struct perf_event*,struct task_struct*) ;
 int FUNC_4 (struct perf_event*) ;
 void* FUNC_5 (struct perf_event*,struct task_struct*) ;
 int FUNC_6 (struct perf_output_handle*,struct perf_event*,int) ;
 int FUNC_7 (struct perf_output_handle*) ;
 int FUNC_8 (struct perf_output_handle*,TYPE_1__) ;

__attribute__((used)) static void FUNC_9(struct perf_event *VAR_1,
       void *VAR_2)
{
 struct perf_task_event *VAR_3 = VAR_2;
 struct perf_output_handle VAR_4;
 struct perf_sample_data VAR_5;
 struct task_struct *VAR_6 = VAR_3->task;
 int VAR_7, VAR_8 = VAR_3->event_id.header.size;

 if (!FUNC_4(VAR_1))
  return;

 FUNC_2(&VAR_3->event_id.header, &VAR_5, VAR_1);

 VAR_7 = FUNC_6(&VAR_4, VAR_1,
    VAR_3->event_id.header.size);
 if (VAR_7)
  goto out;

 VAR_3->event_id.pid = FUNC_3(VAR_1, VAR_6);
 VAR_3->event_id.ppid = FUNC_3(VAR_1, VAR_0);

 VAR_3->event_id.tid = FUNC_5(VAR_1, VAR_6);
 VAR_3->event_id.ptid = FUNC_5(VAR_1, VAR_0);

 VAR_3->event_id.time = FUNC_1(VAR_1);

 FUNC_8(&VAR_4, VAR_3->event_id);

 FUNC_0(VAR_1, &VAR_4, &VAR_5);

 FUNC_7(&VAR_4);
out:
 VAR_3->event_id.header.size = VAR_8;
}
