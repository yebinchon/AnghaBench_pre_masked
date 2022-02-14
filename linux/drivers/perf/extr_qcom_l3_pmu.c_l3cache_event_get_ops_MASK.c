
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct l3cache_event_ops {int dummy; } ;


 struct l3cache_event_ops const VAR_0 ;
 struct l3cache_event_ops const VAR_1 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;

__attribute__((used)) static
const struct l3cache_event_ops *FUNC_1(struct perf_event *VAR_2)
{
 if (FUNC_0(VAR_2))
  return &VAR_0;
 else
  return &VAR_1;
}
