
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event_attr {int dummy; } ;
struct TYPE_2__ {int sample_period; } ;
struct perf_event {TYPE_1__ hw; struct perf_event_attr attr; } ;


 int FUNC_0 (struct perf_event_attr*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct perf_event*) ;
 int VAR_1 ;

__attribute__((used)) static u64 FUNC_2(struct perf_event *VAR_2)
{
 struct perf_event_attr *VAR_3 = &VAR_2->attr;
 u64 VAR_4 = 0;

 FUNC_1(VAR_2);

 VAR_4 |= FUNC_0(VAR_3, VAR_1) << VAR_0;
 VAR_4 |= VAR_2->hw.sample_period;

 return VAR_4;
}
