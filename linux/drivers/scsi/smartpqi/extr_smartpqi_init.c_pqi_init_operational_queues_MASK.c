
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ int_msg_num; scalar_t__ oq_id; } ;
struct pqi_ctrl_info {unsigned int num_queue_groups; TYPE_2__* queue_groups; TYPE_1__ event_queue; } ;
struct TYPE_4__ {unsigned int int_msg_num; int * request_list; int * submit_lock; scalar_t__ oq_id; scalar_t__* iq_id; struct pqi_ctrl_info* ctrl_info; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pqi_ctrl_info *VAR_3)
{
 unsigned int VAR_4;
 u16 VAR_5 = VAR_1;
 u16 VAR_6 = VAR_1;





 for (VAR_4 = 0; VAR_4 < VAR_3->num_queue_groups; VAR_4++)
  VAR_3->queue_groups[VAR_4].ctrl_info = VAR_3;






 VAR_3->event_queue.oq_id = VAR_6++;
 for (VAR_4 = 0; VAR_4 < VAR_3->num_queue_groups; VAR_4++) {
  VAR_3->queue_groups[VAR_4].iq_id[VAR_2] = VAR_5++;
  VAR_3->queue_groups[VAR_4].iq_id[VAR_0] = VAR_5++;
  VAR_3->queue_groups[VAR_4].oq_id = VAR_6++;
 }





 VAR_3->event_queue.int_msg_num = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3->num_queue_groups; VAR_4++)
  VAR_3->queue_groups[VAR_4].int_msg_num = VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_queue_groups; VAR_4++) {
  FUNC_1(&VAR_3->queue_groups[VAR_4].submit_lock[0]);
  FUNC_1(&VAR_3->queue_groups[VAR_4].submit_lock[1]);
  FUNC_0(&VAR_3->queue_groups[VAR_4].request_list[0]);
  FUNC_0(&VAR_3->queue_groups[VAR_4].request_list[1]);
 }
}
