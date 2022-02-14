
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int rotate_necessary; int pmu; } ;
struct perf_event {int dummy; } ;
struct perf_cpu_context {struct perf_event_context* task_ctx; struct perf_event_context ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_cpu_context*,int ) ;
 struct perf_event* FUNC_1 (struct perf_event_context*) ;
 int FUNC_2 (struct perf_event_context*,struct perf_cpu_context*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_4 (struct perf_cpu_context*,struct perf_event_context*) ;
 int FUNC_5 (struct perf_cpu_context*,struct perf_event_context*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct perf_event_context*,struct perf_event*) ;

__attribute__((used)) static bool FUNC_9(struct perf_cpu_context *VAR_2)
{
 struct perf_event *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 struct perf_event_context *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;






 VAR_6 = VAR_2->ctx.rotate_necessary;
 VAR_5 = VAR_2->task_ctx;
 VAR_7 = VAR_5 ? VAR_5->rotate_necessary : 0;

 if (!(VAR_6 || VAR_7))
  return 0;

 FUNC_3(VAR_2, VAR_2->task_ctx);
 FUNC_6(VAR_2->ctx.pmu);

 if (VAR_7)
  VAR_4 = FUNC_1(VAR_5);
 if (VAR_6)
  VAR_3 = FUNC_1(&VAR_2->ctx);





 if (VAR_4 || (VAR_5 && VAR_3))
  FUNC_2(VAR_5, VAR_2, VAR_0);
 if (VAR_3)
  FUNC_0(VAR_2, VAR_0);

 if (VAR_4)
  FUNC_8(VAR_5, VAR_4);
 if (VAR_3)
  FUNC_8(&VAR_2->ctx, VAR_3);

 FUNC_5(VAR_2, VAR_5, VAR_1);

 FUNC_7(VAR_2->ctx.pmu);
 FUNC_4(VAR_2, VAR_2->task_ctx);

 return 1;
}
