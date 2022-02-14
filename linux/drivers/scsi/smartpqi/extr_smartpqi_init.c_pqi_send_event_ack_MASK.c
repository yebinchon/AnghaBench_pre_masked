
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_queue_group {int* iq_pi_copy; int * submit_lock; int * iq_pi; void** iq_element_array; int * iq_ci; int oq_id; } ;
struct TYPE_2__ {int response_queue_id; } ;
struct pqi_event_acknowledge_request {TYPE_1__ header; } ;
struct pqi_ctrl_info {int num_elements_per_iq; struct pqi_queue_group* queue_groups; } ;
typedef int pqi_index_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (void*,struct pqi_event_acknowledge_request*,size_t) ;
 scalar_t__ FUNC_1 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct pqi_ctrl_info *VAR_3,
 struct pqi_event_acknowledge_request *VAR_4, size_t VAR_5)
{
 pqi_index_t VAR_6;
 pqi_index_t VAR_7;
 unsigned long VAR_8;
 void *VAR_9;
 struct pqi_queue_group *VAR_10;

 VAR_10 = &VAR_3->queue_groups[VAR_0];
 FUNC_3(VAR_10->oq_id, &VAR_4->header.response_queue_id);

 while (1) {
  FUNC_5(&VAR_10->submit_lock[VAR_2], VAR_8);

  VAR_6 = VAR_10->iq_pi_copy[VAR_2];
  VAR_7 = FUNC_4(VAR_10->iq_ci[VAR_2]);

  if (FUNC_2(VAR_6, VAR_7,
   VAR_3->num_elements_per_iq))
   break;

  FUNC_6(
   &VAR_10->submit_lock[VAR_2], VAR_8);

  if (FUNC_1(VAR_3))
   return;
 }

 VAR_9 = VAR_10->iq_element_array[VAR_2] +
  (VAR_6 * VAR_1);

 FUNC_0(VAR_9, VAR_4, VAR_5);

 VAR_6 = (VAR_6 + 1) % VAR_3->num_elements_per_iq;
 VAR_10->iq_pi_copy[VAR_2] = VAR_6;





 FUNC_7(VAR_6, VAR_10->iq_pi[VAR_2]);

 FUNC_6(&VAR_10->submit_lock[VAR_2], VAR_8);
}
