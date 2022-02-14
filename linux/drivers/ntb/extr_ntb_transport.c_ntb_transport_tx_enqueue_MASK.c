
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int tx_free_q; int ntb_tx_free_q_lock; int tx_err_no_buf; int link_is_up; } ;
struct ntb_queue_entry {unsigned int len; int entry; scalar_t__ tx_index; scalar_t__ retries; scalar_t__ errors; scalar_t__ flags; void* buf; void* cb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *) ;
 struct ntb_queue_entry* FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ntb_transport_qp*,struct ntb_queue_entry*) ;

int FUNC_3(struct ntb_transport_qp *VAR_2, void *VAR_3, void *VAR_4,
        unsigned int VAR_5)
{
 struct ntb_queue_entry *VAR_6;
 int VAR_7;

 if (!VAR_2 || !VAR_2->link_is_up || !VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_1(&VAR_2->ntb_tx_free_q_lock, &VAR_2->tx_free_q);
 if (!VAR_6) {
  VAR_2->tx_err_no_buf++;
  return -VAR_0;
 }

 VAR_6->cb_data = VAR_3;
 VAR_6->buf = VAR_4;
 VAR_6->len = VAR_5;
 VAR_6->flags = 0;
 VAR_6->errors = 0;
 VAR_6->retries = 0;
 VAR_6->tx_index = 0;

 VAR_7 = FUNC_2(VAR_2, VAR_6);
 if (VAR_7)
  FUNC_0(&VAR_2->ntb_tx_free_q_lock, &VAR_6->entry,
        &VAR_2->tx_free_q);

 return VAR_7;
}
