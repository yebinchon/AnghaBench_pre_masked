
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sample_type; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__* group_leader; } ;
struct TYPE_3__ {int nr_siblings; } ;


 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0)
{
 FUNC_1(VAR_0,
          VAR_0->group_leader->nr_siblings);
 FUNC_0(VAR_0, VAR_0->attr.sample_type);
}
