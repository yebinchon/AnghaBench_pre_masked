
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event {TYPE_1__* pmu; } ;
struct TYPE_2__ {int (* check_period ) (struct perf_event*,int ) ;} ;


 int FUNC_0 (struct perf_event*,int ) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_0, u64 VAR_1)
{
 return VAR_0->pmu->check_period(VAR_0, VAR_1);
}
