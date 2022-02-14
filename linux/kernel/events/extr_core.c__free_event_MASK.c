
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ target; } ;
struct TYPE_4__ {int sample_type; } ;
struct perf_event {int rcu_head; TYPE_3__* pmu; scalar_t__ ctx; TYPE_2__ hw; int (* destroy ) (struct perf_event*) ;int addr_filter_ranges; TYPE_1__ attr; int parent; int mmap_mutex; scalar_t__ rb; int pending; } ;
struct TYPE_6__ {int module; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct perf_event*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct perf_event*,int *) ;
 int FUNC_9 (struct perf_event*) ;
 int FUNC_10 (struct perf_event*) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct perf_event*,int *) ;
 int FUNC_15 (struct perf_event*) ;
 int FUNC_16 (struct perf_event*) ;

__attribute__((used)) static void FUNC_17(struct perf_event *VAR_2)
{
 FUNC_2(&VAR_2->pending);

 FUNC_16(VAR_2);

 if (VAR_2->rb) {






  FUNC_6(&VAR_2->mmap_mutex);
  FUNC_14(VAR_2, ((void*)0));
  FUNC_7(&VAR_2->mmap_mutex);
 }

 if (FUNC_3(VAR_2))
  FUNC_9(VAR_2);

 if (!VAR_2->parent) {
  if (VAR_2->attr.sample_type & VAR_0)
   FUNC_11();
 }

 FUNC_10(VAR_2);
 FUNC_8(VAR_2, ((void*)0));
 FUNC_4(VAR_2->addr_filter_ranges);

 if (VAR_2->destroy)
  VAR_2->destroy(VAR_2);





 if (VAR_2->hw.target)
  FUNC_13(VAR_2->hw.target);





 if (VAR_2->ctx)
  FUNC_12(VAR_2->ctx);

 FUNC_1(VAR_2);
 FUNC_5(VAR_2->pmu->module);

 FUNC_0(&VAR_2->rcu_head, VAR_1);
}
