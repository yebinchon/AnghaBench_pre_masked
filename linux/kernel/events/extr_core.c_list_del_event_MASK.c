
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int generation; int nr_stat; int nr_events; int lock; } ;
struct TYPE_2__ {scalar_t__ inherit_stat; } ;
struct perf_event {int attach_state; scalar_t__ state; struct perf_event* group_leader; int event_entry; TYPE_1__ attr; struct perf_event_context* ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_event*,struct perf_event_context*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct perf_event *VAR_2, struct perf_event_context *VAR_3)
{
 FUNC_0(VAR_2->ctx != VAR_3);
 FUNC_4(&VAR_3->lock);




 if (!(VAR_2->attach_state & VAR_0))
  return;

 VAR_2->attach_state &= ~VAR_0;

 FUNC_3(VAR_2, VAR_3, 0);

 VAR_3->nr_events--;
 if (VAR_2->attr.inherit_stat)
  VAR_3->nr_stat--;

 FUNC_2(&VAR_2->event_entry);

 if (VAR_2->group_leader == VAR_2)
  FUNC_1(VAR_2, VAR_3);
 if (VAR_2->state > VAR_1)
  FUNC_5(VAR_2, VAR_1);

 VAR_3->generation++;
}
