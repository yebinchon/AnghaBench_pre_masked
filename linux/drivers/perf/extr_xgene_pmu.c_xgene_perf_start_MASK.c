
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xgene_pmu_dev {struct xgene_pmu* parent; } ;
struct xgene_pmu {TYPE_1__* ops; } ;
struct hw_perf_event {int state; int prev_count; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct TYPE_2__ {int (* write_counter ) (struct xgene_pmu_dev*,int ,int ) ;} ;


 int FUNC_0 (struct perf_event*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct xgene_pmu_dev*,int ,int ) ;
 struct xgene_pmu_dev* FUNC_5 (int ) ;
 int FUNC_6 (struct perf_event*) ;
 int FUNC_7 (struct perf_event*) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_3, int VAR_4)
{
 struct xgene_pmu_dev *VAR_5 = FUNC_5(VAR_3->pmu);
 struct xgene_pmu *VAR_6 = VAR_5->parent;
 struct hw_perf_event *VAR_7 = &VAR_3->hw;

 if (FUNC_1(!(VAR_7->state & VAR_1)))
  return;

 FUNC_1(!(VAR_7->state & VAR_2));
 VAR_7->state = 0;

 FUNC_7(VAR_3);

 if (VAR_4 & VAR_0) {
  u64 VAR_8 = FUNC_2(&VAR_7->prev_count);

  VAR_6->ops->write_counter(VAR_5, FUNC_0(VAR_3),
           VAR_8);
 }

 FUNC_6(VAR_3);
 FUNC_3(VAR_3);
}
