
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addr_filters_gen; } ;
struct perf_event {scalar_t__ addr_filters_gen; TYPE_2__ hw; TYPE_1__* pmu; } ;
struct perf_addr_filters_head {int lock; } ;
struct TYPE_3__ {int (* addr_filters_sync ) (struct perf_event*) ;} ;


 int FUNC_0 (struct perf_event*) ;
 struct perf_addr_filters_head* FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct perf_event*) ;

void FUNC_5(struct perf_event *VAR_0)
{
 struct perf_addr_filters_head *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_0(VAR_0))
  return;

 FUNC_2(&VAR_1->lock);
 if (VAR_0->addr_filters_gen != VAR_0->hw.addr_filters_gen) {
  VAR_0->pmu->addr_filters_sync(VAR_0);
  VAR_0->hw.addr_filters_gen = VAR_0->addr_filters_gen;
 }
 FUNC_3(&VAR_1->lock);
}
