
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int exclusive_cnt; } ;
struct perf_event {int attach_state; struct pmu* pmu; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pmu*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_1)
{
 struct pmu *VAR_2 = VAR_1->pmu;

 if (!FUNC_2(VAR_2))
  return;


 if (VAR_1->attach_state & VAR_0)
  FUNC_0(&VAR_2->exclusive_cnt);
 else
  FUNC_1(&VAR_2->exclusive_cnt);
}
