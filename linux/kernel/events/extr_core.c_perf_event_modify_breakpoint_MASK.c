
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int dummy; } ;
struct TYPE_2__ {int disabled; } ;
struct perf_event {TYPE_1__ attr; } ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,struct perf_event_attr*,int) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_0,
      struct perf_event_attr *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);

 VAR_2 = FUNC_2(VAR_0, VAR_1, 1);

 if (!VAR_0->attr.disabled)
  FUNC_1(VAR_0);

 return VAR_2;
}
