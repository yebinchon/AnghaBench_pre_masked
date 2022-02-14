
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swevent_htable {int dummy; } ;
struct hw_perf_event {int state; int sample_period; int last_period; } ;
struct perf_event {int hlist_entry; struct hw_perf_event hw; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct hlist_head* FUNC_1 (struct swevent_htable*,struct perf_event*) ;
 int FUNC_2 (int *,struct hlist_head*) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;
 int VAR_2 ;
 struct swevent_htable* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_3, int VAR_4)
{
 struct swevent_htable *VAR_5 = FUNC_6(&VAR_2);
 struct hw_perf_event *VAR_6 = &VAR_3->hw;
 struct hlist_head *VAR_7;

 if (FUNC_3(VAR_3)) {
  VAR_6->last_period = VAR_6->sample_period;
  FUNC_5(VAR_3);
 }

 VAR_6->state = !(VAR_4 & VAR_1);

 VAR_7 = FUNC_1(VAR_5, VAR_3);
 if (FUNC_0(!VAR_7))
  return -VAR_0;

 FUNC_2(&VAR_3->hlist_entry, VAR_7);
 FUNC_4(VAR_3);

 return 0;
}
