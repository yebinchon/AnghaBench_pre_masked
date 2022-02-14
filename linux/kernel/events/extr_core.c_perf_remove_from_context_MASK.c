
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int lock; int mutex; } ;
struct perf_event {int attach_state; struct perf_event_context* ctx; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct perf_event*,int ,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_4, unsigned long VAR_5)
{
 struct perf_event_context *VAR_6 = VAR_4->ctx;

 FUNC_2(&VAR_6->mutex);

 FUNC_1(VAR_4, VAR_3, (void *)VAR_5);







 FUNC_0(VAR_4->attach_state & VAR_1);
 if ((VAR_5 & VAR_0) &&
     (VAR_4->attach_state & VAR_2)) {




  FUNC_4(&VAR_6->lock);
  FUNC_3(VAR_4);
  FUNC_5(&VAR_6->lock);
 }
}
