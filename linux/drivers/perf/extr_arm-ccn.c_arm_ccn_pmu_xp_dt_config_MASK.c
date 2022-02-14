
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int config; } ;
struct hw_perf_event {scalar_t__ idx; int event_base; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; int pmu; } ;
struct arm_ccn_component {scalar_t__ base; } ;
struct TYPE_4__ {int config_lock; } ;
struct arm_ccn {TYPE_2__ dt; struct arm_ccn_component* xp; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (int ) ;
 struct arm_ccn* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct perf_event *VAR_5, int VAR_6)
{
 struct arm_ccn *VAR_7 = FUNC_5(VAR_5->pmu);
 struct hw_perf_event *VAR_8 = &VAR_5->hw;
 struct arm_ccn_component *VAR_9;
 u32 VAR_10, VAR_11;


 if (VAR_8->idx == VAR_0)
  return;

 if (FUNC_1(VAR_5->attr.config) == VAR_1)
  VAR_9 = &VAR_7->xp[FUNC_2(VAR_5->attr.config)];
 else
  VAR_9 = &VAR_7->xp[FUNC_4(
    FUNC_0(VAR_5->attr.config))];

 if (VAR_6)
  VAR_11 = VAR_8->event_base;
 else
  VAR_11 = VAR_4;

 FUNC_7(&VAR_7->dt.config_lock);

 VAR_10 = FUNC_6(VAR_9->base + VAR_2);
 VAR_10 &= ~(VAR_3 <<
   FUNC_3(VAR_8->idx));
 VAR_10 |= VAR_11 << FUNC_3(VAR_8->idx);
 FUNC_9(VAR_10, VAR_9->base + VAR_2);

 FUNC_8(&VAR_7->dt.config_lock);
}
