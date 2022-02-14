
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_event_queue {scalar_t__ oq_ci_copy; int oq_pi; } ;
struct pqi_admin_queues {int oq_pi; scalar_t__ oq_ci_copy; scalar_t__ iq_pi_copy; } ;
struct pqi_ctrl_info {unsigned int num_queue_groups; struct pqi_event_queue event_queue; TYPE_1__* queue_groups; struct pqi_admin_queues admin_queues; } ;
struct TYPE_2__ {int oq_pi; int * iq_ci; scalar_t__ oq_ci_copy; scalar_t__* iq_pi_copy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pqi_ctrl_info *VAR_2)
{
 unsigned int VAR_3;
 struct pqi_admin_queues *VAR_4;
 struct pqi_event_queue *VAR_5;

 VAR_4 = &VAR_2->admin_queues;
 VAR_4->iq_pi_copy = 0;
 VAR_4->oq_ci_copy = 0;
 FUNC_0(0, VAR_4->oq_pi);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_queue_groups; VAR_3++) {
  VAR_2->queue_groups[VAR_3].iq_pi_copy[VAR_1] = 0;
  VAR_2->queue_groups[VAR_3].iq_pi_copy[VAR_0] = 0;
  VAR_2->queue_groups[VAR_3].oq_ci_copy = 0;

  FUNC_0(0, VAR_2->queue_groups[VAR_3].iq_ci[VAR_1]);
  FUNC_0(0, VAR_2->queue_groups[VAR_3].iq_ci[VAR_0]);
  FUNC_0(0, VAR_2->queue_groups[VAR_3].oq_pi);
 }

 VAR_5 = &VAR_2->event_queue;
 FUNC_0(0, VAR_5->oq_pi);
 VAR_5->oq_ci_copy = 0;
}
