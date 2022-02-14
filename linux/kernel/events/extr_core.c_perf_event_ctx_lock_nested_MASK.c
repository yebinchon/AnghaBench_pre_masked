
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int mutex; int refcount; } ;
struct perf_event {struct perf_event_context* ctx; } ;


 struct perf_event_context* FUNC_0 (struct perf_event_context*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_event_context*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct perf_event_context *
FUNC_7(struct perf_event *VAR_0, int VAR_1)
{
 struct perf_event_context *VAR_2;

again:
 FUNC_4();
 VAR_2 = FUNC_0(VAR_0->ctx);
 if (!FUNC_6(&VAR_2->refcount)) {
  FUNC_5();
  goto again;
 }
 FUNC_5();

 FUNC_1(&VAR_2->mutex, VAR_1);
 if (VAR_0->ctx != VAR_2) {
  FUNC_2(&VAR_2->mutex);
  FUNC_3(VAR_2);
  goto again;
 }

 return VAR_2;
}
