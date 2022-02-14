
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int period; } ;
struct TYPE_2__ {int sample_type; int freq; } ;
struct hw_perf_event {int last_period; int sample_period; int period_left; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; int count; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 void FUNC_3 (struct perf_event*,int,struct perf_sample_data*,struct pt_regs*) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_1, u64 VAR_2,
          struct perf_sample_data *VAR_3,
          struct pt_regs *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_1->hw;

 FUNC_1(VAR_2, &VAR_1->count);

 if (!VAR_4)
  return;

 if (!FUNC_0(VAR_1))
  return;

 if ((VAR_1->attr.sample_type & VAR_0) && !VAR_1->attr.freq) {
  VAR_3->period = VAR_2;
  return FUNC_3(VAR_1, 1, VAR_3, VAR_4);
 } else
  VAR_3->period = VAR_1->hw.last_period;

 if (VAR_2 == 1 && VAR_5->sample_period == 1 && !VAR_1->attr.freq)
  return FUNC_3(VAR_1, 1, VAR_3, VAR_4);

 if (FUNC_2(VAR_2, &VAR_5->period_left))
  return;

 FUNC_3(VAR_1, 0, VAR_3, VAR_4);
}
