
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
struct perf_event {struct perf_event_attr const attr; } ;


 int VAR_0 ;
 struct perf_event_attr const* FUNC_0 (int ) ;

const struct perf_event_attr *FUNC_1(struct perf_event *VAR_1)
{
 if (!VAR_1)
  return FUNC_0(-VAR_0);

 return &VAR_1->attr;
}
