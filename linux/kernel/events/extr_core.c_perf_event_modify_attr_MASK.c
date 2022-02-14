
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int type; } ;
struct TYPE_2__ {int type; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct perf_event*,struct perf_event_attr*) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_2,
      struct perf_event_attr *VAR_3)
{
 if (VAR_2->attr.type != VAR_3->type)
  return -VAR_0;

 switch (VAR_2->attr.type) {
 case 128:
  return FUNC_0(VAR_2, VAR_3);
 default:

  return -VAR_1;
 }
}
