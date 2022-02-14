
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_attr {int dummy; } ;
struct perf_event {int dummy; } ;
typedef int perf_overflow_handler_t ;


 struct perf_event* FUNC_0 (struct perf_event_attr*,int,struct task_struct*,int ,void*) ;

struct perf_event *
FUNC_1(struct perf_event_attr *VAR_0,
       perf_overflow_handler_t VAR_1,
       void *VAR_2,
       struct task_struct *VAR_3)
{
 return FUNC_0(VAR_0, -1, VAR_3, VAR_1,
      VAR_2);
}
