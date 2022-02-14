
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int (* filter_match ) (struct perf_event*) ;} ;
struct perf_event {struct pmu* pmu; } ;


 int FUNC_0 (struct perf_event*) ;

__attribute__((used)) static inline int FUNC_1(struct perf_event *VAR_0)
{
 struct pmu *VAR_1 = VAR_0->pmu;
 return VAR_1->filter_match ? VAR_1->filter_match(VAR_0) : 1;
}
