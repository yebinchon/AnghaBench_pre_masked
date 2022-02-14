
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int idx; int prev_count; } ;
struct perf_event {TYPE_1__ hw; int pmu; } ;
struct l3cache_pmu {scalar_t__ regs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (struct perf_event*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (scalar_t__) ;
 struct l3cache_pmu* FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct perf_event *VAR_3)
{
 struct l3cache_pmu *VAR_4 = FUNC_9(VAR_3->pmu);
 int VAR_5 = VAR_3->hw.idx;
 u32 VAR_6 = FUNC_6(VAR_3);
 u32 VAR_7;


 VAR_7 = FUNC_8(VAR_4->regs + VAR_1);
 VAR_7 |= FUNC_1(VAR_5 + 1);
 FUNC_10(VAR_7, VAR_4->regs + VAR_1);


 FUNC_7(&VAR_3->hw.prev_count, 0);
 FUNC_10(0, VAR_4->regs + FUNC_3(VAR_5 + 1));
 FUNC_10(0, VAR_4->regs + FUNC_3(VAR_5));





 FUNC_10(FUNC_0(0), VAR_4->regs + FUNC_4(VAR_5 + 1));
 FUNC_10(FUNC_0(VAR_6), VAR_4->regs + FUNC_4(VAR_5));


 FUNC_10(VAR_2, VAR_4->regs + FUNC_2(VAR_5 + 1));
 FUNC_10(FUNC_5(VAR_5 + 1), VAR_4->regs + VAR_0);
 FUNC_10(VAR_2, VAR_4->regs + FUNC_2(VAR_5));
 FUNC_10(FUNC_5(VAR_5), VAR_4->regs + VAR_0);
}
