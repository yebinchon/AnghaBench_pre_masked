
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct l3cache_event_ops {int (* update ) (struct perf_event*) ;} ;


 struct l3cache_event_ops* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0)
{
 const struct l3cache_event_ops *VAR_1 = FUNC_0(VAR_0);

 VAR_1->update(VAR_0);
}
