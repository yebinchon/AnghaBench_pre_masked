
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bp_type; } ;
struct perf_event {TYPE_1__ attr; } ;


 int FUNC_0 (struct perf_event*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;

int FUNC_2(struct perf_event *VAR_1)
{
 if (FUNC_1(&VAR_0))
  return -1;

 FUNC_0(VAR_1, VAR_1->attr.bp_type);

 return 0;
}
