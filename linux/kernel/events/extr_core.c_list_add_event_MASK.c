
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int generation; int nr_stat; int nr_events; int event_list; int lock; } ;
struct TYPE_2__ {scalar_t__ inherit_stat; } ;
struct perf_event {int attach_state; TYPE_1__ attr; int event_entry; int event_caps; int group_caps; struct perf_event* group_leader; int tstamp; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct perf_event*,struct perf_event_context*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*) ;

__attribute__((used)) static void
FUNC_6(struct perf_event *VAR_1, struct perf_event_context *VAR_2)
{
 FUNC_4(&VAR_2->lock);

 FUNC_0(VAR_1->attach_state & VAR_0);
 VAR_1->attach_state |= VAR_0;

 VAR_1->tstamp = FUNC_5(VAR_1);






 if (VAR_1->group_leader == VAR_1) {
  VAR_1->group_caps = VAR_1->event_caps;
  FUNC_1(VAR_1, VAR_2);
 }

 FUNC_3(VAR_1, VAR_2, 1);

 FUNC_2(&VAR_1->event_entry, &VAR_2->event_list);
 VAR_2->nr_events++;
 if (VAR_1->attr.inherit_stat)
  VAR_2->nr_stat++;

 VAR_2->generation++;
}
