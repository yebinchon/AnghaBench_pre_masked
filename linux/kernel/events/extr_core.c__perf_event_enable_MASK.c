
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int lock; } ;
struct perf_event {scalar_t__ state; struct perf_event_context* ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct perf_event*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_4)
{
 struct perf_event_context *VAR_5 = VAR_4->ctx;

 FUNC_1(&VAR_5->lock);
 if (VAR_4->state >= VAR_1 ||
     VAR_4->state < VAR_0) {
  FUNC_2(&VAR_5->lock);
  return;
 }
 if (VAR_4->state == VAR_0)
  VAR_4->state = VAR_2;
 FUNC_2(&VAR_5->lock);

 FUNC_0(VAR_4, VAR_3, ((void*)0));
}
