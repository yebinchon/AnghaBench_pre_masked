
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct perf_event_context {scalar_t__ task; int lock; } ;
struct perf_event {TYPE_4__* cgrp; struct perf_event_context* ctx; } ;
struct TYPE_5__ {int lock; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; TYPE_1__ ctx; } ;
struct TYPE_6__ {int cgroup; } ;
struct perf_cgroup {TYPE_2__ css; } ;
struct TYPE_7__ {int cgroup; } ;
struct TYPE_8__ {TYPE_3__ css; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct perf_cpu_context* FUNC_1 (struct perf_event_context*) ;
 int FUNC_2 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct perf_cpu_context*,struct perf_event_context*,int ) ;
 int FUNC_5 (struct perf_event_context*,struct perf_cpu_context*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct perf_event*) ;
 scalar_t__ FUNC_7 (struct perf_event*) ;
 struct perf_cgroup* FUNC_8 (scalar_t__,struct perf_event_context*) ;
 int FUNC_9 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(void *VAR_3)
{
 struct perf_event *VAR_4 = VAR_3;
 struct perf_event_context *VAR_5 = VAR_4->ctx;
 struct perf_cpu_context *VAR_6 = FUNC_1(VAR_5);
 struct perf_event_context *VAR_7 = VAR_6->task_ctx;
 bool VAR_8 = 1;
 int VAR_9 = 0;

 FUNC_10(&VAR_6->ctx.lock);
 if (VAR_5->task) {
  FUNC_10(&VAR_5->lock);
  VAR_7 = VAR_5;

  VAR_8 = (VAR_5->task == VAR_2);
  if (FUNC_11(VAR_5->task) && !VAR_8) {
   VAR_9 = -VAR_0;
   goto unlock;
  }

  FUNC_0(VAR_8 && VAR_6->task_ctx && VAR_6->task_ctx != VAR_5);
 } else if (VAR_7) {
  FUNC_10(&VAR_7->lock);
 }
 if (VAR_8) {
  FUNC_5(VAR_5, VAR_6, VAR_1);
  FUNC_2(VAR_4, VAR_5);
  FUNC_4(VAR_6, VAR_7, FUNC_6(VAR_4));
 } else {
  FUNC_2(VAR_4, VAR_5);
 }

unlock:
 FUNC_9(VAR_6, VAR_7);

 return VAR_9;
}
