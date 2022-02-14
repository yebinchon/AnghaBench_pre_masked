
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int inherit_stat; } ;
struct perf_event {scalar_t__ state; int total_time_running; int total_time_enabled; int count; TYPE_2__* pmu; TYPE_1__ attr; } ;
struct TYPE_4__ {int (* read ) (struct perf_event*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_1,
         struct perf_event *VAR_2)
{
 u64 VAR_3;

 if (!VAR_1->attr.inherit_stat)
  return;
 if (VAR_1->state == VAR_0)
  VAR_1->pmu->read(VAR_1);

 FUNC_3(VAR_1);





 VAR_3 = FUNC_0(&VAR_2->count);
 VAR_3 = FUNC_2(&VAR_1->count, VAR_3);
 FUNC_1(&VAR_2->count, VAR_3);

 FUNC_6(VAR_1->total_time_enabled, VAR_2->total_time_enabled);
 FUNC_6(VAR_1->total_time_running, VAR_2->total_time_running);




 FUNC_4(VAR_1);
 FUNC_4(VAR_2);
}
