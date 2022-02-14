
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct hw_perf_event {scalar_t__ interrupts; } ;
struct perf_event {struct hw_perf_event hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_event*,int,struct perf_sample_data*,struct pt_regs*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_1, u64 VAR_2,
        struct perf_sample_data *VAR_3,
        struct pt_regs *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_1->hw;
 int VAR_6 = 0;

 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_1);

 if (VAR_5->interrupts == VAR_0)
  return;

 for (; VAR_2; VAR_2--) {
  if (FUNC_0(VAR_1, VAR_6,
         VAR_3, VAR_4)) {




   break;
  }
  VAR_6 = 1;
 }
}
