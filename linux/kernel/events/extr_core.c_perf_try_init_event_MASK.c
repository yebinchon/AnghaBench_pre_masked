
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {scalar_t__ task_ctx_nr; int (* event_init ) (struct perf_event*) ;int capabilities; int module; } ;
struct perf_event_context {int dummy; } ;
struct perf_event {int (* destroy ) (struct perf_event*) ;struct perf_event* group_leader; struct pmu* pmu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int ) ;
 struct perf_event_context* FUNC_4 (struct perf_event*,int ) ;
 int FUNC_5 (struct perf_event*,struct perf_event_context*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (struct perf_event*) ;
 int FUNC_7 (struct perf_event*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct pmu *VAR_7, struct perf_event *VAR_8)
{
 struct perf_event_context *VAR_9 = ((void*)0);
 int VAR_10;

 if (!FUNC_8(VAR_7->module))
  return -VAR_1;







 if (VAR_8->group_leader != VAR_8 && VAR_7->task_ctx_nr != VAR_6) {




  VAR_9 = FUNC_4(VAR_8->group_leader,
       VAR_5);
  FUNC_0(!VAR_9);
 }

 VAR_8->pmu = VAR_7;
 VAR_10 = VAR_7->event_init(VAR_8);

 if (VAR_9)
  FUNC_5(VAR_8->group_leader, VAR_9);

 if (!VAR_10) {
  if (!(VAR_7->capabilities & VAR_3) &&
      FUNC_2(VAR_8))
   VAR_10 = -VAR_2;

  if (VAR_7->capabilities & VAR_4 &&
      FUNC_1(VAR_8))
   VAR_10 = -VAR_0;

  if (VAR_10 && VAR_8->destroy)
   VAR_8->destroy(VAR_8);
 }

 if (VAR_10)
  FUNC_3(VAR_7->module);

 return VAR_10;
}
