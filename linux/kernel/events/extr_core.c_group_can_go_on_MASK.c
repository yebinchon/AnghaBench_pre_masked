
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ exclusive; } ;
struct perf_event {int group_caps; TYPE_1__ attr; } ;
struct perf_cpu_context {scalar_t__ active_oncpu; scalar_t__ exclusive; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_1,
      struct perf_cpu_context *VAR_2,
      int VAR_3)
{



 if (VAR_1->group_caps & VAR_0)
  return 1;




 if (VAR_2->exclusive)
  return 0;




 if (VAR_1->attr.exclusive && VAR_2->active_oncpu)
  return 0;




 return VAR_3;
}
