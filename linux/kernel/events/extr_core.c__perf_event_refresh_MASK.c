
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ inherit; } ;
struct perf_event {int event_limit; TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_1, int VAR_2)
{



 if (VAR_1->attr.inherit || !FUNC_2(VAR_1))
  return -VAR_0;

 FUNC_1(VAR_2, &VAR_1->event_limit);
 FUNC_0(VAR_1);

 return 0;
}
