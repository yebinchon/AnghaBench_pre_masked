
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int periodic_sched_queued; int periodic_sched_assigned; int periodic_sched_ready; int periodic_sched_inactive; int non_periodic_sched_active; int non_periodic_sched_waiting; int non_periodic_sched_inactive; } ;


 int FUNC_0 (struct dwc2_hsotg*,int *) ;

__attribute__((used)) static void FUNC_1(struct dwc2_hsotg *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->non_periodic_sched_inactive);
 FUNC_0(VAR_0, &VAR_0->non_periodic_sched_waiting);
 FUNC_0(VAR_0, &VAR_0->non_periodic_sched_active);
 FUNC_0(VAR_0, &VAR_0->periodic_sched_inactive);
 FUNC_0(VAR_0, &VAR_0->periodic_sched_ready);
 FUNC_0(VAR_0, &VAR_0->periodic_sched_assigned);
 FUNC_0(VAR_0, &VAR_0->periodic_sched_queued);
}
