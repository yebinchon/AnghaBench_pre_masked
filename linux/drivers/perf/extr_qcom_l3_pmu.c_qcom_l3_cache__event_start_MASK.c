
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {scalar_t__ state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct l3cache_event_ops {int (* start ) (struct perf_event*) ;} ;


 struct l3cache_event_ops* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0, int VAR_1)
{
 struct hw_perf_event *VAR_2 = &VAR_0->hw;
 const struct l3cache_event_ops *VAR_3 = FUNC_0(VAR_0);

 VAR_2->state = 0;
 VAR_3->start(VAR_0);
}
