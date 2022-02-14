
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int exclusive_cnt; } ;
struct perf_event {int attach_state; struct pmu* pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pmu*) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_2)
{
 struct pmu *VAR_3 = VAR_2->pmu;

 if (!FUNC_2(VAR_3))
  return 0;
 if (VAR_2->attach_state & VAR_1) {
  if (!FUNC_1(&VAR_3->exclusive_cnt))
   return -VAR_0;
 } else {
  if (!FUNC_0(&VAR_3->exclusive_cnt))
   return -VAR_0;
 }

 return 0;
}
