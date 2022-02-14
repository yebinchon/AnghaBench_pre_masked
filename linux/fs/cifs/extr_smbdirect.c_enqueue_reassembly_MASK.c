
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_response {int list; } ;
struct smbd_connection {int reassembly_data_length; int count_enqueue_reassembly_queue; int count_reassembly_queue; int reassembly_queue_lock; int reassembly_queue_length; int reassembly_queue; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(
 struct smbd_connection *VAR_0,
 struct smbd_response *VAR_1,
 int VAR_2)
{
 FUNC_1(&VAR_0->reassembly_queue_lock);
 FUNC_0(&VAR_1->list, &VAR_0->reassembly_queue);
 VAR_0->reassembly_queue_length++;






 FUNC_3();
 VAR_0->reassembly_data_length += VAR_2;
 FUNC_2(&VAR_0->reassembly_queue_lock);
 VAR_0->count_reassembly_queue++;
 VAR_0->count_enqueue_reassembly_queue++;
}
