
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int lock; } ;
struct perf_event {scalar_t__ state; struct perf_event_context* ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_2)
{
 struct perf_event_context *VAR_3 = VAR_2->ctx;

 FUNC_1(&VAR_3->lock);
 if (VAR_2->state <= VAR_0) {
  FUNC_2(&VAR_3->lock);
  return;
 }
 FUNC_2(&VAR_3->lock);

 FUNC_0(VAR_2, VAR_1, ((void*)0));
}
