
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stop_event_data {struct perf_event* event; } ;
struct ring_buffer {int dummy; } ;
struct remote_output {int err; struct ring_buffer* rb; } ;
struct perf_event {int rb; struct perf_event* parent; } ;


 int FUNC_0 (struct stop_event_data*) ;
 int FUNC_1 (struct perf_event*) ;
 struct ring_buffer* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0, void *VAR_1)
{
 struct perf_event *VAR_2 = VAR_0->parent;
 struct remote_output *VAR_3 = VAR_1;
 struct ring_buffer *VAR_4 = VAR_3->rb;
 struct stop_event_data VAR_5 = {
  .event = VAR_0,
 };

 if (!FUNC_1(VAR_0))
  return;

 if (!VAR_2)
  VAR_2 = VAR_0;
 if (FUNC_2(VAR_2->rb) == VAR_4)
  VAR_3->err = FUNC_0(&VAR_5);
}
