
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_context {int dummy; } ;
struct perf_cpu_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_cpu_context*,int ,struct task_struct*) ;
 int FUNC_1 (struct perf_event_context*,struct perf_cpu_context*,int ,struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct perf_cpu_context *VAR_2,
    struct perf_event_context *VAR_3,
    struct task_struct *VAR_4)
{
 FUNC_0(VAR_2, VAR_1, VAR_4);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_2, VAR_1, VAR_4);
 FUNC_0(VAR_2, VAR_0, VAR_4);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_2, VAR_0, VAR_4);
}
