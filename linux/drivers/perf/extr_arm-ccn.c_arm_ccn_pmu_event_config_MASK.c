
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int config; } ;
struct hw_perf_event {int idx; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; int pmu; } ;
struct TYPE_4__ {int config_lock; scalar_t__ base; } ;
struct arm_ccn {TYPE_2__ dt; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct perf_event*) ;
 int FUNC_7 (struct perf_event*) ;
 int FUNC_8 (struct perf_event*) ;
 struct arm_ccn* FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct perf_event *VAR_5)
{
 struct arm_ccn *VAR_6 = FUNC_9(VAR_5->pmu);
 struct hw_perf_event *VAR_7 = &VAR_5->hw;
 u32 VAR_8, VAR_9, VAR_10;


 if (VAR_7->idx == VAR_3)
  return;

 if (FUNC_2(VAR_5->attr.config) == VAR_4)
  VAR_8 = FUNC_3(VAR_5->attr.config);
 else
  VAR_8 = FUNC_5(FUNC_1(VAR_5->attr.config));

 FUNC_11(&VAR_6->dt.config_lock);


 VAR_9 = (VAR_7->idx / 4) * 4;
 VAR_10 = FUNC_10(VAR_6->dt.base + VAR_0 + VAR_9);
 VAR_10 &= ~(VAR_1 <<
   FUNC_4(VAR_7->idx % 4));
 VAR_10 |= VAR_8 << FUNC_4(VAR_7->idx % 4);
 FUNC_13(VAR_10, VAR_6->dt.base + VAR_0 + VAR_9);

 if (FUNC_2(VAR_5->attr.config) == VAR_4) {
  if (FUNC_0(VAR_5->attr.config) ==
    VAR_2)
   FUNC_8(VAR_5);
  else
   FUNC_7(VAR_5);
 } else {
  FUNC_6(VAR_5);
 }

 FUNC_12(&VAR_6->dt.config_lock);
}
