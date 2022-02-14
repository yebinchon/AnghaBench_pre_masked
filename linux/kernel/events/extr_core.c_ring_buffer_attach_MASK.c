
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int event_lock; int event_list; } ;
struct perf_event {int rcu_pending; int waitq; struct ring_buffer* rb; int rb_entry; int rcu_batches; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct perf_event*,int ) ;
 int FUNC_7 (struct ring_buffer*,struct ring_buffer*) ;
 int FUNC_8 (struct ring_buffer*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct perf_event *VAR_0,
          struct ring_buffer *VAR_1)
{
 struct ring_buffer *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 if (VAR_0->rb) {




  FUNC_0(VAR_0->rcu_pending);

  VAR_2 = VAR_0->rb;
  FUNC_9(&VAR_2->event_lock, VAR_3);
  FUNC_5(&VAR_0->rb_entry);
  FUNC_10(&VAR_2->event_lock, VAR_3);

  VAR_0->rcu_batches = FUNC_2();
  VAR_0->rcu_pending = 1;
 }

 if (VAR_1) {
  if (VAR_0->rcu_pending) {
   FUNC_1(VAR_0->rcu_batches);
   VAR_0->rcu_pending = 0;
  }

  FUNC_9(&VAR_1->event_lock, VAR_3);
  FUNC_4(&VAR_0->rb_entry, &VAR_1->event_list);
  FUNC_10(&VAR_1->event_lock, VAR_3);
 }
 if (FUNC_3(VAR_0))
  FUNC_6(VAR_0, 0);

 FUNC_7(VAR_0->rb, VAR_1);

 if (VAR_2) {
  FUNC_8(VAR_2);





  FUNC_11(&VAR_0->waitq);
 }
}
