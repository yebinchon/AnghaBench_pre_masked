
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xgene_pmu_dev {TYPE_1__* inf; struct xgene_pmu* parent; } ;
struct xgene_pmu {TYPE_2__* ops; } ;
struct perf_event {int pmu; } ;
struct TYPE_4__ {int (* enable_counter_int ) (struct xgene_pmu_dev*,int ) ;int (* enable_counter ) (struct xgene_pmu_dev*,int ) ;int (* write_agent1msk ) (struct xgene_pmu_dev*,int ) ;int (* write_agentmsk ) (struct xgene_pmu_dev*,int ) ;int (* write_evttype ) (struct xgene_pmu_dev*,int ,int ) ;} ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct xgene_pmu_dev*,int ,int ) ;
 int FUNC_5 (struct xgene_pmu_dev*,int ) ;
 int FUNC_6 (struct xgene_pmu_dev*,int ) ;
 int FUNC_7 (struct xgene_pmu_dev*,int ) ;
 int FUNC_8 (struct xgene_pmu_dev*,int ) ;
 struct xgene_pmu_dev* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct perf_event *VAR_1)
{
 struct xgene_pmu_dev *VAR_2 = FUNC_9(VAR_1->pmu);
 struct xgene_pmu *VAR_3 = VAR_2->parent;

 VAR_3->ops->write_evttype(VAR_2, FUNC_2(VAR_1),
          FUNC_3(VAR_1));
 VAR_3->ops->write_agentmsk(VAR_2, ~((u32)FUNC_1(VAR_1)));
 if (VAR_2->inf->type == VAR_0)
  VAR_3->ops->write_agent1msk(VAR_2,
      ~((u32)FUNC_0(VAR_1)));

 VAR_3->ops->enable_counter(VAR_2, FUNC_2(VAR_1));
 VAR_3->ops->enable_counter_int(VAR_2, FUNC_2(VAR_1));
}
