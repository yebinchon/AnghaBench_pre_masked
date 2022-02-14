
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int idx; int prev_count; } ;
struct perf_event {TYPE_1__ hw; int pmu; } ;
struct l3cache_pmu {scalar_t__ regs; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct perf_event*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (scalar_t__) ;
 struct l3cache_pmu* FUNC_10 (int ) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct perf_event *VAR_4)
{
 struct l3cache_pmu *VAR_5 = FUNC_10(VAR_4->pmu);
 int VAR_6 = VAR_4->hw.idx;
 u32 VAR_7 = FUNC_7(VAR_4);
 u32 VAR_8 = FUNC_9(VAR_5->regs + VAR_2);


 FUNC_11(VAR_8 | FUNC_6(VAR_6), VAR_5->regs + VAR_2);


 FUNC_8(&VAR_4->hw.prev_count, 0);
 FUNC_11(0, VAR_5->regs + FUNC_2(VAR_6));


 FUNC_11(FUNC_0(VAR_7), VAR_5->regs + FUNC_3(VAR_6));


 FUNC_11(FUNC_5(VAR_6), VAR_5->regs + VAR_1);


 FUNC_11(VAR_3, VAR_5->regs + FUNC_1(VAR_6));
 FUNC_11(FUNC_4(VAR_6), VAR_5->regs + VAR_0);
}
