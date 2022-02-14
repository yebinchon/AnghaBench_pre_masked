
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stop_event_data {scalar_t__ restart; struct perf_event* event; } ;
struct perf_event {TYPE_1__* pmu; int oncpu; int state; } ;
struct TYPE_2__ {int (* start ) (struct perf_event*,int ) ;int (* stop ) (struct perf_event*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct perf_event*,int ) ;
 int FUNC_4 (struct perf_event*,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 struct stop_event_data *VAR_4 = VAR_3;
 struct perf_event *VAR_5 = VAR_4->event;


 if (FUNC_0(VAR_5->state) != VAR_2)
  return 0;


 FUNC_2();





 if (FUNC_0(VAR_5->oncpu) != FUNC_1())
  return -VAR_0;

 VAR_5->pmu->stop(VAR_5, VAR_1);
 if (VAR_4->restart)
  VAR_5->pmu->start(VAR_5, 0);

 return 0;
}
