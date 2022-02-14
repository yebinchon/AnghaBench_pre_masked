
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int rx_free_q; int ntb_rx_q_lock; int rx_pend_q; scalar_t__ client_ready; } ;
struct ntb_queue_entry {unsigned int len; int entry; void* cb_data; } ;


 int FUNC_0 (int *,int *,int *) ;
 struct ntb_queue_entry* FUNC_1 (int *,int *) ;

void *FUNC_2(struct ntb_transport_qp *VAR_0, unsigned int *VAR_1)
{
 struct ntb_queue_entry *VAR_2;
 void *VAR_3;

 if (!VAR_0 || VAR_0->client_ready)
  return ((void*)0);

 VAR_2 = FUNC_1(&VAR_0->ntb_rx_q_lock, &VAR_0->rx_pend_q);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = VAR_2->cb_data;
 *VAR_1 = VAR_2->len;

 FUNC_0(&VAR_0->ntb_rx_q_lock, &VAR_2->entry, &VAR_0->rx_free_q);

 return VAR_3;
}
