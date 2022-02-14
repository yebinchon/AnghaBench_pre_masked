
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_event_list {int lock; int list; } ;
struct perf_event {int sb_list; int cpu; } ;


 int FUNC_0 (int *,int *) ;
 struct pmu_event_list* FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_1)
{
 struct pmu_event_list *VAR_2 = FUNC_1(&VAR_0, VAR_1->cpu);

 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_1->sb_list, &VAR_2->list);
 FUNC_3(&VAR_2->lock);
}
